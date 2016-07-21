/*!
 * (C) "Kaspersky Lab"
 *
 * \file grpsoapstub.h
 * \author Generated by createsoapheader.pl
 * \brief SOAP stub declaration and registration code
 */

#include "soapH.h"

#include "std/gsoap/stubrouter.h"

/* Declaration of functions */

int klgrp_GetGroupsStub(  struct soap *soap, 
					xsd__int	parent,
					xsd__int	depth, 
					struct klgrp_GetGroupsResponse&r);

int klgrp_GetUnassignedGroupIdStub(  struct soap *soap, 
					void* _,
					struct klgrp_GetUnassignedGroupIdResponse&r);

int klgrp_GetGroupInfoStub(  struct soap *soap, 
					xsd__int			id,
                    param__params		info,
					struct klgrp_GetGroupInfoResponse&r);

int klgrp_AddGroupStub(  struct soap *soap, 
					param__params		info,
					struct klgrp_AddGroupResponse&r);

int klgrp_DelGroupStub(  struct soap *soap, 
					xsd__int id,
					struct klgrp_DelGroupResponse&r);

int klgrp_UpdateGroupStub(  struct soap *soap, 
					xsd__int			id,
					param__params		info,
					struct klgrp_UpdateGroupResponse&r);

int klgrp_SetGroupHostsStub(  struct soap *soap, 
					xsd__int			id,
					param__params		hosts,
					struct klgrp_SetGroupHostsResponse&r);

int klgrp_RemoveHostsStub(  struct soap *soap, 
    				klgrp_wstrings	hosts,
					struct klgrp_RemoveHostsResponse&r);

int klgrp_ResetGroupHostsIteratorStub(  struct soap *soap, 
					xsd__int			id,
					klgrp_wstrings		fields,
					xsd__int			lifetime,
					struct klgrp_ResetGroupHostsIteratorResponse&r);

int klgrp_ReleaseGroupHostsIteratorStub(  struct soap *soap, 
					xsd__wstring		it,
					struct klgrp_ReleaseGroupHostsIteratorResponse&r);

int klgrp_GetNextGroupHostStub(  struct soap *soap, 
					xsd__wstring	it,
					xsd__int		nCount,
					struct klgrp_GetNextGroupHostResponse&r);

int klgrp_FindHostsStub(  struct soap *soap, 
                    xsd__wstring	            wstrFilter,
					klgrp_wstrings	            arrFields,
					klgrp_field_order_array     arrFieldsToOrder,
					param__params				params,
					xsd__int		            lTimeout,
                    xsd__wstring	            wstrRequestId,
					struct klgrp_FindHostsResponse& r);

int klgrp_FindHostsCancelStub(  struct soap *soap, 
					xsd__wstring	wstrRequestId,
					struct klgrp_FindHostsCancelResponse&r );

int klgrp_FindHostsGetAccessorStub(  struct soap *soap, 
					xsd__wstring	wstrRequestId,
					struct klgrp_FindHostsGetAccessorResponse&r );

int klgrp_GetSuperGroupIdStub(  struct soap *soap, 
					void* _,
					struct klgrp_GetSuperGroupIdResponse&r);

int klgrp_FindGroupsStub(  struct soap *soap, 
                    xsd__wstring	            wstrFilter,
					klgrp_wstrings	            arrFields,
					klgrp_field_order_array     arrFieldsToOrder,
					param__params				params,
					xsd__int		            lTimeout,
                    xsd__wstring	            wstrRequestId,
					struct klgrp_FindGroupsResponse& r);

namespace KLGRP
{

	struct KLSTRT::SOAPStubFunc grp_funcs_ptrs[17]=
	{
		{ L"klgrp_GetGroups",		 (void*)klgrp_GetGroupsStub },
		{ L"klgrp_GetUnassignedGroupId",		 (void*)klgrp_GetUnassignedGroupIdStub },
		{ L"klgrp_GetGroupInfo",		 (void*)klgrp_GetGroupInfoStub },
		{ L"klgrp_AddGroup",		 (void*)klgrp_AddGroupStub },
		{ L"klgrp_DelGroup",		 (void*)klgrp_DelGroupStub },
		{ L"klgrp_UpdateGroup",		 (void*)klgrp_UpdateGroupStub },
		{ L"klgrp_SetGroupHosts",		 (void*)klgrp_SetGroupHostsStub },
		{ L"klgrp_RemoveHosts",		 (void*)klgrp_RemoveHostsStub },
		{ L"klgrp_ResetGroupHostsIterator",		 (void*)klgrp_ResetGroupHostsIteratorStub },
		{ L"klgrp_ReleaseGroupHostsIterator",		 (void*)klgrp_ReleaseGroupHostsIteratorStub },
		{ L"klgrp_GetNextGroupHost",		 (void*)klgrp_GetNextGroupHostStub },
		{ L"klgrp_FindHosts",		 (void*)klgrp_FindHostsStub },
		{ L"klgrp_FindHostsCancel",		 (void*)klgrp_FindHostsCancelStub },
		{ L"klgrp_FindHostsGetAccessor",		 (void*)klgrp_FindHostsGetAccessorStub },
		{ L"klgrp_GetSuperGroupId",		 (void*)klgrp_GetSuperGroupIdStub },
		{ L"klgrp_FindGroups",		 (void*)klgrp_FindGroupsStub },
		{ L"", NULL },
	};

	void RegisterGSOAPStubFunctions()
	{
		KLSTRT::RegisterGSOAPStubFunctions( grp_funcs_ptrs, (sizeof(grp_funcs_ptrs)/sizeof(grp_funcs_ptrs[0])) );
	}

	void UnregisterGSOAPStubFunctions()
	{
		KLSTRT::UnregisterGSOAPStubFunctions( grp_funcs_ptrs, (sizeof(grp_funcs_ptrs)/sizeof(grp_funcs_ptrs[0])) );
	}

} // end namespace KLGRP
