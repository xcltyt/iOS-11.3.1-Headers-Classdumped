/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct heim_oid {
	unsigned long long length;
	unsigned components;
} heim_oid;

typedef const struct __CFString* CFStringRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct SignerInfo_signedAttrs {
	unsigned len;
	Attribute val;
} SignerInfo_signedAttrs;

typedef struct SignerInfo_unsignedAttrs {
	unsigned len;
	Attribute val;
} SignerInfo_unsignedAttrs;

typedef struct __SecTrust* SecTrustRef;
