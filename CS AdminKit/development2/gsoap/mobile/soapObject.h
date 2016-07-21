/* soapObject.h
   Generated by gSOAP 2.7.0d from soapheader.h
   Copyright (C) 2001-2004 Genivia, Inc. All Rights Reserved.
   This software is released under one of the following three licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
   See README.txt for further details.
*/

#ifndef soapService_H
#define soapService_H
#include "soapH.h"
SOAP_BEGIN_NAMESPACE(soap)
class Service : public soap
{    public:
	Service() { static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope"},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding"},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance"},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema"},
	{"param", "http://tempuri.org/param.xsd"},
	{"aklwngt", "http://tempuri.org/aklwngt.xsd"},
	{NULL, NULL}
};
	soap_init(this); if (!this->namespaces) this->namespaces = namespaces; };
	~Service() { soap_destroy(this); soap_end(this); soap_done(this); };
	int serve() { return soap_serve(this); };
};
SOAP_END_NAMESPACE(soap)
#endif
