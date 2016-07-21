/*!
 * (C) "Kaspersky Lab"
 *
 * \file nlstsoapstub.h
 * \author Generated by createsoapheader.pl
 * \brief SOAP stub declaration and registration code
 */

#include "soapH.h"

#include "std/gsoap/stubrouter.h"

/* Declaration of functions */

int klnlst_ResetIteratorStub(  struct soap *soap, 
        xsd__wstring		        listName,
        param__params		        paramIteratorDescr,
		klnlst_wstring_array		fields,
		klnlst_field_order_array	fields_to_order,
		xsd__int					lifetime,
		struct klnlst_ResetIteratorResponse&r);

int klnlst_GetRecordCountStub(  struct soap *soap, 
		xsd__wstring	iteratorId,
		struct klnlst_GetRecordCountResponse&r);

int klnlst_GetRecordRangeStub(  struct soap *soap, 
		xsd__wstring	iteratorId,
		xsd__int		nStart,
        xsd__int		nEnd,
		struct klnlst_GetRecordRangeResponse&r);

int klnlst_ReleaseIteratorStub(  struct soap *soap, 
		xsd__wstring	iteratorId,
		struct klnlst_ReleaseIteratorResponse&r);

int klnlst_UpdateHostNetworkListStub(  struct soap *soap, 
		xsd__wstring					nagentTransportName,
		xsd__wstring					listName,
		xsd__wstring					listComponentName,
		klnlst_network_list_item_array	listsItemsArray,
		struct klnlst_UpdateHostNetworkListResponse&r);

int klnlst_AddListItemTaskStub(  struct soap *soap, 
		long						itemId,
		param__params				taskParams,
		xsd__wstring				taskName,
		struct klnlst_AddListItemTaskResponse&r);

int klnlst_AddTaskForListItemsStub(  struct soap *soap, 
		klnlst_long_array			itemsIds,
		param__params				taskParams,
		xsd__wstring				taskName,
		struct klnlst_AddTaskForListItemsResponse&r);

int klnlst_GetItemInfoStub(  struct soap *soap, 
		long						itemId,		
		struct klnlst_GetItemInfoResponse&r);

namespace KLNLST
{

	struct KLSTRT::SOAPStubFunc nlst_funcs_ptrs[9]=
	{
		{ L"klnlst_ResetIterator",		 (void*)klnlst_ResetIteratorStub },
		{ L"klnlst_GetRecordCount",		 (void*)klnlst_GetRecordCountStub },
		{ L"klnlst_GetRecordRange",		 (void*)klnlst_GetRecordRangeStub },
		{ L"klnlst_ReleaseIterator",		 (void*)klnlst_ReleaseIteratorStub },
		{ L"klnlst_UpdateHostNetworkList",		 (void*)klnlst_UpdateHostNetworkListStub },
		{ L"klnlst_AddListItemTask",		 (void*)klnlst_AddListItemTaskStub },
		{ L"klnlst_AddTaskForListItems",		 (void*)klnlst_AddTaskForListItemsStub },
		{ L"klnlst_GetItemInfo",		 (void*)klnlst_GetItemInfoStub },
		{ L"", NULL },
	};

	void RegisterGSOAPStubFunctions()
	{
		KLSTRT::RegisterGSOAPStubFunctions( nlst_funcs_ptrs, (sizeof(nlst_funcs_ptrs)/sizeof(nlst_funcs_ptrs[0])) );
	}

	void UnregisterGSOAPStubFunctions()
	{
		KLSTRT::UnregisterGSOAPStubFunctions( nlst_funcs_ptrs, (sizeof(nlst_funcs_ptrs)/sizeof(nlst_funcs_ptrs[0])) );
	}

} // end namespace KLNLST
