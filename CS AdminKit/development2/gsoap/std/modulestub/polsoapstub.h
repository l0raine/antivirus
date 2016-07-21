/*!
 * (C) "Kaspersky Lab"
 *
 * \file polsoapstub.h
 * \author Generated by createsoapheader.pl
 * \brief SOAP stub declaration and registration code
 */

#include "soapH.h"

#include "std/gsoap/stubrouter.h"

/* Declaration of functions */

int klpol_GetPolicyCommonDataStub(  struct soap *soap, 
    xsd__int nGroupId,
    xsd__int nExpectedServerVersion,
	struct klpol_GetPolicyCommonDataResponse&r );

int klpol_GetAllAcivePoliciesForGroupStub(  struct soap *soap, 
    xsd__int nGroupId,
	struct klpol_GetAllAcivePoliciesForGroupResponse&r );

int klpol_GetSinglePolicyCommonDataStub(  struct soap *soap, 
    xsd__int policyId,
	struct klpol_GetSinglePolicyCommonDataResponse&r );

int klpol_AddPolicyStub(  struct soap *soap, 
    xsd__int nGroupId,
    struct  klpol_policy_common_data    policy,
	struct klpol_AddPolicyResponse&r );

int klpol_UpdatePolicyCommonDataStub(  struct soap *soap, 
    struct  klpol_policy_common_data    policy,
	struct klpol_UpdatePolicyCommonDataResponse&r );

int klpol_DeletePolicyStub(  struct soap *soap, 
    xsd__int policyId,
	struct klpol_DeletePolicyResponse&r );

int klpol_CopyPolicyExStub(  struct soap *soap, 
    xsd__int        policyId,
    xsd__int        nNewGroupId,
    xsd__boolean    bDeleteOrigin,
	struct klpol_CopyPolicyExResponse&r );

int klpol_GetSSProxyIDStub(  struct soap *soap, 
    xsd__int policyId,
    xsd__int nTimeout,
	struct klpol_GetSSProxyIDResponse&r );

int klpol_ModifySettingsStub(  struct soap *soap, 
        xsd__int policyId,
        struct klpol_ModifySettingsResponse&r );

int klpol_MakePolicyActiveStub(  struct soap *soap, 
        xsd__int policyId,
        xsd__boolean bActive,
        struct klpol_MakePolicyActiveResponse&r );

int klpol_MakePolicyRoamingStub(  struct soap *soap, 
        xsd__int policyId,
        struct klpol_MakePolicyRoamingResponse&r );

int klpol_GetPoliciesForGroupStub(  struct soap *soap,  
    xsd__int nGroupId,
    xsd__int nExpectedServerVersion,
	struct klpol_GetPoliciesForGroupResponse&r );

int klpol_CopyOrMovePolicyStub(  struct soap *soap, 
    xsd__int                            policyId,
    xsd__int                            nNewGroupId,
    xsd__boolean                        bDeleteOrigin,
    struct  klpol_policy_common_data    data,
	struct klpol_CopyOrMovePolicyResponse&r );

int klpol_SetOutbreakPolicyStub(  struct soap *soap, 
    klpol_polici_ids    vec_policies,
	struct klpol_SetOutbreakPolicyResponse&r );

int klpol_GetOutbreakPolicyStub(  struct soap *soap, 
	struct klpol_GetOutbreakPolicyResponse&r );

int klpol_SetOutbreakPolicy2Stub(  struct soap *soap, 
    param__params           data,
	struct klpol_SetOutbreakPolicy2Response&r );

int klpol_GetOutbreakPolicy2Stub(  struct soap *soap, 
	struct klpol_GetOutbreakPolicy2Response&r );

namespace KLPOL
{

	struct KLSTRT::SOAPStubFunc pol_funcs_ptrs[18]=
	{
		{ L"klpol_GetPolicyCommonData",		 (void*)klpol_GetPolicyCommonDataStub },
		{ L"klpol_GetAllAcivePoliciesForGroup",		 (void*)klpol_GetAllAcivePoliciesForGroupStub },
		{ L"klpol_GetSinglePolicyCommonData",		 (void*)klpol_GetSinglePolicyCommonDataStub },
		{ L"klpol_AddPolicy",		 (void*)klpol_AddPolicyStub },
		{ L"klpol_UpdatePolicyCommonData",		 (void*)klpol_UpdatePolicyCommonDataStub },
		{ L"klpol_DeletePolicy",		 (void*)klpol_DeletePolicyStub },
		{ L"klpol_CopyPolicyEx",		 (void*)klpol_CopyPolicyExStub },
		{ L"klpol_GetSSProxyID",		 (void*)klpol_GetSSProxyIDStub },
		{ L"klpol_ModifySettings",		 (void*)klpol_ModifySettingsStub },
		{ L"klpol_MakePolicyActive",		 (void*)klpol_MakePolicyActiveStub },
		{ L"klpol_MakePolicyRoaming",		 (void*)klpol_MakePolicyRoamingStub },
		{ L"klpol_GetPoliciesForGroup",		 (void*)klpol_GetPoliciesForGroupStub },
		{ L"klpol_CopyOrMovePolicy",		 (void*)klpol_CopyOrMovePolicyStub },
		{ L"klpol_SetOutbreakPolicy",		 (void*)klpol_SetOutbreakPolicyStub },
		{ L"klpol_GetOutbreakPolicy",		 (void*)klpol_GetOutbreakPolicyStub },
		{ L"klpol_SetOutbreakPolicy2",		 (void*)klpol_SetOutbreakPolicy2Stub },
		{ L"klpol_GetOutbreakPolicy2",		 (void*)klpol_GetOutbreakPolicy2Stub },
		{ L"", NULL },
	};

	void RegisterGSOAPStubFunctions()
	{
		KLSTRT::RegisterGSOAPStubFunctions( pol_funcs_ptrs, (sizeof(pol_funcs_ptrs)/sizeof(pol_funcs_ptrs[0])) );
	}

	void UnregisterGSOAPStubFunctions()
	{
		KLSTRT::UnregisterGSOAPStubFunctions( pol_funcs_ptrs, (sizeof(pol_funcs_ptrs)/sizeof(pol_funcs_ptrs[0])) );
	}

} // end namespace KLPOL
