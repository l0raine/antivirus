/*!
 * (C) "Kaspersky Lab"
 *
 * \file dpnssoapstub.h
 * \author Generated by createsoapheader.pl
 * \brief SOAP stub declaration and registration code
 */

#include "soapH.h"

#include "std/gsoap/stubrouter.h"

/* Declaration of functions */

int kldpns_AddDiapasonStub(  struct soap *soap, 
                    param__params data,
                    struct kldpns_AddDiapasonResponse&r);

int kldpns_UpdateDiapasonStub(  struct soap *soap, 
                    xsd__int        id,
                    param__params data,
                    struct kldpns_UpdateDiapasonResponse&r);

int kldpns_RemoveDiapasonStub(  struct soap *soap, 
                    xsd__int        id,
                    struct kldpns_RemoveDiapasonResponse&r);

int kldpns_GetDiapasonsStub(  struct soap *soap, 
                    klhst_wstrings	fields,
                    xsd__int        lTimeout,
					struct kldpns_GetDiapasonsResponse&r);

int kldpns_GetDiapasonStub(  struct soap *soap, 
                    xsd__int        id,
                    klhst_wstrings	fields,
					struct kldpns_GetDiapasonResponse&r);

int kldpns_NotifyDpnsTaskStub(  struct soap *soap, 
					struct kldpns_NotifyDpnsTaskResponse&r);

namespace KLDPNS
{

	struct KLSTRT::SOAPStubFunc dpns_funcs_ptrs[7]=
	{
		{ L"kldpns_AddDiapason",		 (void*)kldpns_AddDiapasonStub },
		{ L"kldpns_UpdateDiapason",		 (void*)kldpns_UpdateDiapasonStub },
		{ L"kldpns_RemoveDiapason",		 (void*)kldpns_RemoveDiapasonStub },
		{ L"kldpns_GetDiapasons",		 (void*)kldpns_GetDiapasonsStub },
		{ L"kldpns_GetDiapason",		 (void*)kldpns_GetDiapasonStub },
		{ L"kldpns_NotifyDpnsTask",		 (void*)kldpns_NotifyDpnsTaskStub },
		{ L"", NULL },
	};

	void RegisterGSOAPStubFunctions()
	{
		KLSTRT::RegisterGSOAPStubFunctions( dpns_funcs_ptrs, (sizeof(dpns_funcs_ptrs)/sizeof(dpns_funcs_ptrs[0])) );
	}

	void UnregisterGSOAPStubFunctions()
	{
		KLSTRT::UnregisterGSOAPStubFunctions( dpns_funcs_ptrs, (sizeof(dpns_funcs_ptrs)/sizeof(dpns_funcs_ptrs[0])) );
	}

} // end namespace KLDPNS
