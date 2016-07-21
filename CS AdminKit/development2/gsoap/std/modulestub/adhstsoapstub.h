/*!
 * (C) "Kaspersky Lab"
 *
 * \file adhstsoapstub.h
 * \author Generated by createsoapheader.pl
 * \brief SOAP stub declaration and registration code
 */

#include "soapH.h"

#include "std/gsoap/stubrouter.h"

/* Declaration of functions */

int adhst_GetChildComputersStub(  struct soap *soap, 
                    xsd__int                    idOU, 
                    klhst_wstrings              fields,
                    xsd__int                    lTimeout,
                    struct adhst_GetChildComputersResponse&r);

int adhst_GetChildOUsStub(  struct soap *soap, 
                    xsd__int                    idOU, 
                    klhst_wstrings              fields,
                    xsd__int                    lTimeout,
                    struct adhst_GetChildOUsResponse&r);

int adhst_GetOUStub(  struct soap *soap, 
                    xsd__int                    idOU, 
                    klhst_wstrings              fields,
                    struct adhst_GetOUResponse&r);

int adhst_UpdateOUStub(  struct soap *soap, 
                    xsd__int                    idOU, 
                    param__params		        parData,
                    struct adhst_UpdateOUResponse&r);

namespace KLADHST
{

	struct KLSTRT::SOAPStubFunc adhst_funcs_ptrs[5]=
	{
		{ L"adhst_GetChildComputers",		 (void*)adhst_GetChildComputersStub },
		{ L"adhst_GetChildOUs",		 (void*)adhst_GetChildOUsStub },
		{ L"adhst_GetOU",		 (void*)adhst_GetOUStub },
		{ L"adhst_UpdateOU",		 (void*)adhst_UpdateOUStub },
		{ L"", NULL },
	};

	void RegisterGSOAPStubFunctions()
	{
		KLSTRT::RegisterGSOAPStubFunctions( adhst_funcs_ptrs, (sizeof(adhst_funcs_ptrs)/sizeof(adhst_funcs_ptrs[0])) );
	}

	void UnregisterGSOAPStubFunctions()
	{
		KLSTRT::UnregisterGSOAPStubFunctions( adhst_funcs_ptrs, (sizeof(adhst_funcs_ptrs)/sizeof(adhst_funcs_ptrs[0])) );
	}

} // end namespace KLADHST
