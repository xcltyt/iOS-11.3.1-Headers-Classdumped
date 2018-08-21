/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebQuotaManager;
#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebSecurityOriginPrivate;

@interface WebSecurityOrigin : NSObject {

	WebSecurityOriginPrivate* _private;
	id<WebQuotaManager> _applicationCacheQuotaManager;
	id<WebQuotaManager> _databaseQuotaManager;

}
+(id)webSecurityOriginFromDatabaseIdentifier:(id)arg1 ;
-(SecurityOrigin*)_core;
-(unsigned long long)quota;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)stringValue;
-(unsigned long long)usage;
-(id)host;
-(id)databaseQuotaManager;
-(void)setQuota:(unsigned long long)arg1 ;
-(id)applicationCacheQuotaManager;
-(unsigned short)port;
-(id)protocol;
-(id)_initWithWebCoreSecurityOrigin:(SecurityOrigin*)arg1 ;
-(id)databaseIdentifier;
-(id)toString;
@end
