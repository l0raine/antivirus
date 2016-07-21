/* soapStub.h
   Generated by gSOAP 2.7.0d from soapheader.h
   Copyright (C) 2001-2004 Genivia, Inc. All Rights Reserved.
   This software is released under one of the following three licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
   See README.txt for further details.
*/
#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"

SOAP_BEGIN_NAMESPACE(soap)

/* Enumerations */

/* Classes and Structs */

/* xsd:anyType: */
class SOAP_CMAC xsd__anyType
{
public:
	virtual int getType();	/* required element */
public:
	virtual int soap_type() const { return 6; } /* = unique id SOAP_TYPE_xsd__anyType */
	virtual void soap_default(struct soap*); 
	virtual void soap_serialize(struct soap*) const;
	virtual void soap_mark(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*); 
};

/* xsd:anySimpleType: */
class SOAP_CMAC xsd__anySimpleType : public xsd__anyType
{
public:
	virtual int getType();	/* required element */
public:
	virtual int soap_type() const { return 8; } /* = unique id SOAP_TYPE_xsd__anySimpleType */
	virtual void soap_default(struct soap*); 
	virtual void soap_serialize(struct soap*) const;
	virtual void soap_mark(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*); 
};

/* Primitive xsd:decimal schema type: */
class SOAP_CMAC xsd__decimal_ : public xsd__anySimpleType
{
public:
	char *__item;
	virtual int getType();	/* required element */
public:
	virtual int soap_type() const { return 13; } /* = unique id SOAP_TYPE_xsd__decimal_ */
	virtual void soap_default(struct soap*); 
	virtual void soap_serialize(struct soap*) const;
	virtual void soap_mark(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*); 
};

/* Primitive xsd:integer schema type: */
class SOAP_CMAC xsd__integer_ : public xsd__decimal_
{
public:
	char *__item;
	virtual int getType();	/* required element */
public:
	virtual int soap_type() const { return 16; } /* = unique id SOAP_TYPE_xsd__integer_ */
	virtual void soap_default(struct soap*); 
	virtual void soap_serialize(struct soap*) const;
	virtual void soap_mark(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*); 
};

/* Primitive xsd:long schema type: */
class SOAP_CMAC xsd__long_ : public xsd__integer_
{
public:
	LONG64 __item;
	virtual int getType();	/* required element */
public:
	virtual int soap_type() const { return 20; } /* = unique id SOAP_TYPE_xsd__long_ */
	virtual void soap_default(struct soap*); 
	virtual void soap_serialize(struct soap*) const;
	virtual void soap_mark(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*); 
};

/* transient type: */
struct message_desc_t
{
	long requestFlag;	/* transient */
	long messageId;	/* transient */
};

/* SOAP Header: */
struct SOAP_ENV__Header
{
	struct message_desc_t messDesc;	/* external */
};

/* Base64 schema type: */
struct xsd__klft_file_chunk_buff
{
	unsigned char *__ptr;
	int __size;
};

/* klft-file-chunk-t: */
struct klft_file_chunk_t
{
	wchar_t *fileName;	/* optional element */
	wchar_t *fileId;	/* optional element */
	ULONG64 CRC;	/* required element */
	ULONG64 startPosInFile;	/* required element */
	ULONG64 fullFileSize;	/* required element */
	struct xsd__klft_file_chunk_buff buff;	/* required element */
};

/* klft-file-info-t: */
struct klft_file_info_t
{
	wchar_t *fileName;	/* optional element */
	bool isDir;	/* required element */
	bool readPermission;	/* required element */
	ULONG64 createTime;	/* required element */
	ULONG64 fullFileSize;	/* required element */
};

/* klftbridge-CreateReceiverResponse: */
struct klftbridge_CreateReceiverResponse
{
	wchar_t *receiverId;	/* RPC return element */	/* optional element */
	LONG64 res;	/* required element */
};

/* klftbridge-CreateReceiver: */
struct klftbridge_CreateReceiver
{
	bool useUpdaterFolder;	/* required element */
};

/* klftbridge-ConnectResponse: */
struct klftbridge_ConnectResponse
{
	LONG64 res;	/* RPC return element */	/* required element */
};

/* klftbridge-Connect: */
struct klftbridge_Connect
{
	wchar_t *receiverId;	/* optional element */
	bool toMasterServer;	/* required element */
};

/* klftbridge-GetFileInfoResponse: */
struct klftbridge_GetFileInfoResponse
{
	struct klft_file_info_t info;	/* RPC return element */	/* required element */
	LONG64 res;	/* required element */
};

/* klftbridge-GetFileInfo: */
struct klftbridge_GetFileInfo
{
	wchar_t *receiverId;	/* optional element */
	wchar_t *fileName;	/* optional element */
};

/* klftbridge-GetNextFileChunkResponse: */
struct klftbridge_GetNextFileChunkResponse
{
	struct klft_file_chunk_t chunk;	/* RPC return element */	/* required element */
	LONG64 res;	/* required element */
};

/* klftbridge-GetNextFileChunk: */
struct klftbridge_GetNextFileChunk
{
	wchar_t *receiverId;	/* optional element */
	wchar_t *fileName;	/* optional element */
	ULONG64 startFilePos;	/* required element */
	ULONG64 neededSize;	/* required element */
};

/* klftbridge-ReleaseReceiverResponse: */
struct klftbridge_ReleaseReceiverResponse
{
	LONG64 res;	/* RPC return element */	/* required element */
};

/* klftbridge-ReleaseReceiver: */
struct klftbridge_ReleaseReceiver
{
	wchar_t *receiverId;	/* optional element */
};

/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
	char *SOAP_ENV__Value;	/* optional element */
	char *SOAP_ENV__Node;	/* optional element */
	char *SOAP_ENV__Role;	/* optional element */
};

/* SOAP-ENV:Detail: */
struct SOAP_ENV__Detail
{
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
	char *__any;
};

/* SOAP Fault: */
struct SOAP_ENV__Fault
{
	char *faultcode;	/* optional element */
	char *faultstring;	/* optional element */
	char *faultactor;	/* optional element */
	struct SOAP_ENV__Detail *detail;	/* optional element */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element */
	char *SOAP_ENV__Reason;	/* optional element */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element */
};

/* Types With Custom (De)serializers: */
typedef struct message_desc_t message_desc;

/* Typedefs */
typedef char *_XML;
typedef char *_QName;
typedef bool xsd__boolean;
typedef char *xsd__decimal;
typedef char *xsd__integer;
typedef LONG64 xsd__long;
typedef long xsd__int;
typedef ULONG64 xsd__unsignedLong;
typedef unsigned char xsd__unsignedByte;
typedef wchar_t *xsd__wstring;

/* Extern */

/* Remote Methods */

SOAP_FMAC5 int SOAP_FMAC6 klftbridge_CreateReceiver(struct soap*, bool, struct klftbridge_CreateReceiverResponse &);

SOAP_FMAC5 int SOAP_FMAC6 klftbridge_Connect(struct soap*, wchar_t *, bool, struct klftbridge_ConnectResponse &);

SOAP_FMAC5 int SOAP_FMAC6 klftbridge_GetFileInfo(struct soap*, wchar_t *, wchar_t *, struct klftbridge_GetFileInfoResponse &);

SOAP_FMAC5 int SOAP_FMAC6 klftbridge_GetNextFileChunk(struct soap*, wchar_t *, wchar_t *, ULONG64, ULONG64, struct klftbridge_GetNextFileChunkResponse &);

SOAP_FMAC5 int SOAP_FMAC6 klftbridge_ReleaseReceiver(struct soap*, wchar_t *, struct klftbridge_ReleaseReceiverResponse &);

/* Stubs */

SOAP_FMAC5 int SOAP_FMAC6 soap_call_klftbridge_CreateReceiver(struct soap*, const char*, const char*, bool, struct klftbridge_CreateReceiverResponse &);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_klftbridge_Connect(struct soap*, const char*, const char*, wchar_t *, bool, struct klftbridge_ConnectResponse &);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_klftbridge_GetFileInfo(struct soap*, const char*, const char*, wchar_t *, wchar_t *, struct klftbridge_GetFileInfoResponse &);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_klftbridge_GetNextFileChunk(struct soap*, const char*, const char*, wchar_t *, wchar_t *, ULONG64, ULONG64, struct klftbridge_GetNextFileChunkResponse &);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_klftbridge_ReleaseReceiver(struct soap*, const char*, const char*, wchar_t *, struct klftbridge_ReleaseReceiverResponse &);

/* Skeletons */

SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_klftbridge_CreateReceiver(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_klftbridge_Connect(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_klftbridge_GetFileInfo(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_klftbridge_GetNextFileChunk(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_klftbridge_ReleaseReceiver(struct soap*);

SOAP_END_NAMESPACE(soap)

#endif

/* end of soapStub.h */
