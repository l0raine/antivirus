
#include <rpc.h>
#include <prague.h>
#include "../pr_manager.h"
#include <iface/i_root.h>

#if defined (_WIN32)
extern "C" void __RPC_FAR * __RPC_USER MIDL_user_allocate( size_t len )       { return malloc(len); }
extern "C" void             __RPC_USER MIDL_user_free( void __RPC_FAR * ptr ) { free(ptr);} 
#endif

PRRemoteManager * g_manager = NULL;

// --------------------------------------------------------------------------------

extern "C" void RPCRegister(hROOT root)
{
	tPROPID prop;
	if( PR_FAIL(root->RegisterCustomPropId(&prop, PR_REMOTE_MANAGER_PROP, pTYPE_PTR)) )
		return;

	g_manager = (PRRemoteManager*)root->propGetPtr(prop);
	if( !g_manager )
		return;

#if defined (_WIN32)
	PR_REGISTER_STUB(IID_REGISTRY)
	PR_REGISTER_STUB(IID_STRING)
	PR_REGISTER_STUB(IID_ENGINE)
	PR_REGISTER_STUB(IID_IFACE_ENUM)
	PR_REGISTER_STUB(IID_IO)
	PR_REGISTER_STUB(IID_OBJPTR)
	PR_REGISTER_STUB(IID_OS)
	PR_REGISTER_STUB(IID_INSIDER)
	PR_REGISTER_STUB(IID_MCHK)
#endif	
	PR_REGISTER_STUB(IID_BUFFER)
}

#if defined (_WIN32)
BOOL APIENTRY DllMain( HANDLE hModule, 
                                   DWORD  ul_reason_for_call, 
                                   LPVOID lpReserved
					 )
{
    switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
		case PRAGUE_PLUGIN_LOAD :
			RPCRegister((hROOT)hModule);
			break;
		case PRAGUE_PLUGIN_UNLOAD :
			break;
    }
    return TRUE;
}
#elif defined (__unix__)
extern "C" tBOOL DllMain ( tVOID* hModule, 
                           tDWORD ul_reason_for_call, 
                           tVOID* lpReserved
					 )
{
  switch (ul_reason_for_call)	{
  case PRAGUE_PLUGIN_LOAD :
    RPCRegister((hROOT)hModule);
    break;
  case PRAGUE_PLUGIN_UNLOAD :
    break;
  default:
    break;
  }
  return cTRUE;
}
#endif
