/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPXRequestHandlingProxyCreating.h>

@class FPFileProviderService, FPXExtensionContext, NSString;

@interface FPXRequestHandlingProxyFactory : NSObject <FPXRequestHandlingProxyCreating> {

	FPFileProviderService* _service;
	FPXExtensionContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchProxyForItemIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithService:(id)arg1 context:(id)arg2 ;
@end
