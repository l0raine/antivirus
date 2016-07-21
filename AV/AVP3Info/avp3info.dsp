# Microsoft Developer Studio Project File - Name="AVP3Info" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=AVP3Info - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "avp3info.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "avp3info.mak" CFG="AVP3Info - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "AVP3Info - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "AVP3Info - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""$/Prague/avp3info", SGITAAAA"
# PROP Scc_LocalPath "."
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "AVP3Info - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 1
# PROP Target_Dir ""
LIB32=link.exe -lib
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /G5 /MD /W3 /Zi /O1 /I "../Include" /I "../../COMMONFILES" /I "../../COMMONFILES/STUFF" /I "../" /I "../../AVP32" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_PRAGUE_TRACE_" /FD /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x417 /i "..\..\CommonFiles" /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 libcmt.lib /nologo /base:"0x61e00000" /entry:"DllMain" /subsystem:windows /dll /pdb:"..\..\out/Release/avp3info.pdb" /debug /machine:I386 /out:"..\..\out/Release/avp3info.ppl" /IGNORE:4098 /opt:ref
# SUBTRACT LINK32 /pdb:none /nodefaultlib /pdbtype:<none>
# Begin Special Build Tool
TargetPath=\out\Release\avp3info.ppl
SOURCE="$(InputPath)"
PostBuild_Cmds=call prconvert "$(TargetPath)"	tsigner "$(TargetPath)"
# End Special Build Tool

!ELSEIF  "$(CFG)" == "AVP3Info - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 1
# PROP Target_Dir ""
LIB32=link.exe -lib
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /YX /FD /GZ /c
# ADD CPP /nologo /G5 /MDd /W3 /Gm /GX /ZI /Od /I "../Include" /I "../../COMMONFILES" /I "../../COMMONFILES/STUFF" /I "../" /I "../../AVP32" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_PRAGUE_TRACE_" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "_DEBUG"
# ADD RSC /l 0x417 /i "..\..\CommonFiles" /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /dll /pdb:"..\..\out/Debug/avp3info.pdb" /debug /machine:I386 /out:"..\..\out/Debug/avp3info.ppl" /implib:"" /pdbtype:sept
# SUBTRACT LINK32 /pdb:none /nodefaultlib

!ENDIF 

# Begin Target

# Name "AVP3Info - Win32 Release"
# Name "AVP3Info - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\avp3info.cpp
# End Source File
# Begin Source File

SOURCE=.\plugin_avp3info.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\avp3info.h
# End Source File
# Begin Source File

SOURCE=..\Include\iface\i_avp3info.h
# End Source File
# Begin Source File

SOURCE=..\Include\plugin\p_avp3info.h
# End Source File
# Begin Source File

SOURCE=..\Include\structs\s_avp3info.h
# End Source File
# Begin Source File

SOURCE=.\ver_mod.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\avp3info.imp
# End Source File
# Begin Source File

SOURCE=.\avp3info.meta
# End Source File
# Begin Source File

SOURCE=".\avp3info_res.h"
# End Source File
# Begin Source File

SOURCE=".\avp3info_res.rc"
# End Source File
# End Group
# Begin Source File

SOURCE=.\avp3info.dep
# End Source File
# Begin Source File

SOURCE=.\avp3info.mak
# End Source File
# End Target
# End Project
