/*!
 * (C) "Kaspersky Lab"
 *
 * \file trfsoapstub.h
 * \author Generated by createsoapheader.pl
 * \brief SOAP stub declaration and registration code
 */

#include "soapH.h"

#include "std/gsoap/stubrouter.h"

/* Declaration of functions */

int kltrf_ReplaceRestrictionStub(  struct soap *soap, 						
						kltrf_Restriction	restriction,
						struct kltrf_ReplaceRestrictionResponse
							&r );

int kltrf_DeleteRestrictionStub(  struct soap *soap, 
						xsd__long		nRestrictionId,
						struct kltrf_DeleteRestrictionResponse
							&r );

int kltrf_GetRestrictionsStub(  struct soap *soap, 						
						struct kltrf_GetRestrictionsResponse
							&r );

namespace KLTRF
{

	struct KLSTRT::SOAPStubFunc trf_funcs_ptrs[4]=
	{
		{ L"kltrf_ReplaceRestriction",		 (void*)kltrf_ReplaceRestrictionStub },
		{ L"kltrf_DeleteRestriction",		 (void*)kltrf_DeleteRestrictionStub },
		{ L"kltrf_GetRestrictions",		 (void*)kltrf_GetRestrictionsStub },
		{ L"", NULL },
	};

	void RegisterGSOAPStubFunctions()
	{
		KLSTRT::RegisterGSOAPStubFunctions( trf_funcs_ptrs, (sizeof(trf_funcs_ptrs)/sizeof(trf_funcs_ptrs[0])) );
	}

	void UnregisterGSOAPStubFunctions()
	{
		KLSTRT::UnregisterGSOAPStubFunctions( trf_funcs_ptrs, (sizeof(trf_funcs_ptrs)/sizeof(trf_funcs_ptrs[0])) );
	}

} // end namespace KLTRF
