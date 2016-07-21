# createsoapheader.pl
# Create header for gSOAP compiler
# D.Shiyafetdinov 2002

use strict;

my $outHeader = 'soapheader.h';
open file, '>'.$outHeader;
my @str = <>; 


my $outStubRouter = 'stub/gsoapstubs.cpp';
my $stubRouterPageHeader = 
"/*!\n".
" * (C) \"Kaspersky Lab\"\n".
" *\n".
" * \\file $outStubRouter\n" .
" * \\author Generated by createsoapheader.pl\n".
" * \\brief SOAP stub router\n".
" */\n\n".
"#include \"stdsoap2.h\"\n".
"#include \"soapH.h\"\n\n".
"#include \"std/gsoap/stubrouter.h\"\n\n";

open stubFile, '>'.$outStubRouter;
print stubFile "$stubRouterPageHeader";


my $stubModulePageHeader = 
"/*!\n".
" * (C) \"Kaspersky Lab\"\n".
" *\n".
" * \\file ";
my $stubModulePageHeader2 = "\n" .
" * \\author Generated by createsoapheader.pl\n".
" * \\brief SOAP stub declaration and registration code\n".
" */\n\n".
"#include \"soapH.h\"\n\n".
"#include \"std/gsoap/stubrouter.h\"\n\n".
"/* Declaration of functions */\n\n";
 
foreach(@str)
{
	my $outStr = $_;	
	# Find include derective in file
	if ( $outStr =~ m/include\s+"(.+)"/ ) {
		my $includeFileNameStr = $1; 
		open includeFile, '<' . $1;		
		undef $/;
		my $includeText = <includeFile>;
		print file $includeText;
		close includeFile;
		my $includeStr = $includeText;	
		
		my @includeSplitFileName = split( m{\\|/}, $includeFileNameStr );
		my $moduleName = $includeSplitFileName[$#includeSplitFileName-1];
		my $moduleStubDeclFileStr = $moduleName;# . "/". $includeSplitFileName[$#includeSplitFileName];
		my $moduleStubFile;
		my $msFileNameStr;
		my @moduleFuncNameArray;
		
									
		while( $includeStr =~ m/
			((int\s+(\w+)\s*\()		# int func_name (   $1 - full func decl, $2 - 'int func_name (', $3 - 'func_name' )
			(.*?)				# $4 - argument of function
			\)\s*=*\s*0*\s*;)/gsx 		# ) ; OR ) = 0;
		)
		{
			my $funcBeginDeclStr = $2;
			my $funcBeginDeclStrStub = "int ".$3."Stub( ";
			my $fullFuncDeclStr = $1;
			my $funcNameStr = $3;
			my $funcArgsStr = $4;
			my $funcTypedefNameStr = $3 . "FuncDef";			
			my $callFuncArgSrt;		
			
 			if ( $funcNameStr !~ /getType/ )
			{	
				if ( !$msFileNameStr )
				{					
					$msFileNameStr = "$moduleName" . "soapstub.h";					
					open moduleStubFile, '>' . "modulestub/" . "$msFileNameStr";
					print moduleStubFile "$stubModulePageHeader";
					print moduleStubFile "$msFileNameStr";
					print moduleStubFile "$stubModulePageHeader2";
				}
				
				$funcArgsStr =~ s/\{.*?\}//gs;
				
				my $smpfuncArgsStr = $funcArgsStr;
				
				# Compose list of parameters for a call of function
				$smpfuncArgsStr =~ s/struct|class//gs;
				while( $smpfuncArgsStr =~ m/\s*\w+\s*\**\&*(\s*\w*)\s*(,|)\s*/gs ) {					
					if ( $callFuncArgSrt ) {
						$callFuncArgSrt = $callFuncArgSrt . ",";
					}					
					$callFuncArgSrt = $callFuncArgSrt . $1;					
				}				
								
				# Write typedef in file
				print stubFile "typedef int (* $funcTypedefNameStr)( struct soap *soap, $funcArgsStr);\n\n";
				
				print stubFile "$funcBeginDeclStr struct soap *soap, $funcArgsStr)\n".
				"{\n".
				"\tvoid *funcPtr = KLSTRT::GetFunctionPtrByName(L\"$funcNameStr\");\n".
				"\tif ( funcPtr==NULL ) return SOAP_NO_METHOD;\n".
				"\telse return (($funcTypedefNameStr)funcPtr)(soap," . "$callFuncArgSrt);\n".
				"}\n\n";
				
				print moduleStubFile "$funcBeginDeclStrStub struct soap *soap, $funcArgsStr);\n\n";
				
				$moduleFuncNameArray[scalar(@moduleFuncNameArray)]=$funcNameStr;
			}
		}
		
		if ( $msFileNameStr ) 
		{			
			if ( scalar(@moduleFuncNameArray)!=0 )
			{	
				my $funcPtrStr = $moduleName . "_funcs_ptrs";
				print moduleStubFile "namespace KL". uc($moduleName) ."\n".
				"{\n\n";
				print moduleStubFile "\tstruct KLSTRT::SOAPStubFunc $funcPtrStr"."[";
				print moduleStubFile scalar(@moduleFuncNameArray)+1 . "]=\n".
				"\t{\n";
				my $fname;
				foreach $fname (@moduleFuncNameArray) {
					print moduleStubFile "\t\t{ L\"$fname\",\t\t (void*)$fname"."Stub },\n";
				}
				print moduleStubFile "\t\t{ L\"\", NULL },\n".
				"\t};\n\n";
				
				print moduleStubFile "\tvoid RegisterGSOAPStubFunctions()\n".
				"\t{\n".
				"\t\tKLSTRT::RegisterGSOAPStubFunctions( $funcPtrStr, (sizeof($funcPtrStr)/sizeof(" . $funcPtrStr . "[0])) );\n".
				"\t}\n\n";
				
				print moduleStubFile "\tvoid UnregisterGSOAPStubFunctions()\n".
				"\t{\n".
				"\t\tKLSTRT::UnregisterGSOAPStubFunctions( $funcPtrStr, (sizeof($funcPtrStr)/sizeof(" . $funcPtrStr. "[0])) );\n".
				"\t}\n\n";
				
				print moduleStubFile "} // end namespace KL". uc($moduleName) . "\n";
			}
			close moduleStubFile;
		}
	}
	else {
		print file $outStr;
	}
}

close file;
close stubFile;

