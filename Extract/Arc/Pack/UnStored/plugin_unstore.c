// AVP Prague stamp begin( Interface header,  )
// -------- ANSI C Code Generator 2.0 --------
// -------- Wednesday,  16 March 2005,  18:43 --------
// -------------------------------------------
// Copyright � Kaspersky Labs 1996-2004.
// -------------------------------------------
// Project     -- Not defined
// Sub project -- Not defined
// Purpose     -- Unstored decompressor
// Author      -- Dmitry Glavatskikh
// File Name   -- plugin_unstore.c
// Additional info
//    Unstored decompressor. (Just copy)
// -------------------------------------------
// AVP Prague stamp end



// AVP Prague stamp begin( Header includes,  )
#include <Prague/prague.h>
#include <Prague/iface/i_root.h>
// AVP Prague stamp end



// AVP Prague stamp begin( Plugin extern and export declaration,  )
extern tERROR pr_call Transformer_Register( hROOT root );

// AVP Prague stamp end



// AVP Prague stamp begin( Plugin definitions,  )
PR_MAKE_TRACE_FUNC;

hROOT  g_root = NULL;

tBOOL __stdcall DllMain( tPTR hInstance, tDWORD dwReason, tERROR* pError ) {
  // tDWORD count;

  switch( dwReason ) {
    case DLL_PROCESS_ATTACH:
    case DLL_PROCESS_DETACH:
    case DLL_THREAD_ATTACH :
    case DLL_THREAD_DETACH :
      break;

    case PRAGUE_PLUGIN_LOAD :
      g_root = (hROOT)hInstance;
      *pError = errOK;
      //resolve  my imports
      //if ( PR_FAIL(*pError=CALL_Root_ResolveImportTable(g_root,&count,import_table_variable...,PID_UNSTORE)) ) {
      //   PR_TRACE(( g_root, prtERROR, "cannot resolve import table for ..." ));
      //   return cFALSE;
      //}

      //register my exports
      //CALL_Root_RegisterExportTable( g_root, &count, export_table_..., PID_UNSTORE );

      //register my custom property ids
      //if ( PR_FAIL(*pError=CALL_Root_RegisterCustomPropId(g_root,&some_propid_variable,"some_property_name",pTYPE_DWORD)) ) {
      //  PR_TRACE(( g_root, prtERROR, "cannot register custom property ..." ));
      //  return cFALSE;
      //}

      // register my interfaces
      if ( PR_FAIL(*pError=Transformer_Register(g_root)) ) {
        PR_TRACE(( g_root, prtERROR, "cannot register \"Transformer\" interface"));
        return cFALSE;
      }
      break;

    case PRAGUE_PLUGIN_UNLOAD :
      // free system resources
      // unregister my custom property ids -- you can drop it, kernel do it by itself
      // release    my imports		         -- you can drop it, kernel do it by itself
      // unregister my exports		         -- you can drop it, kernel do it by itself
      // unregister my interfaces          -- you can drop it, kernel do it by itself
      g_root = NULL;
      break;
  }
  return cTRUE;
}
// AVP Prague stamp end



