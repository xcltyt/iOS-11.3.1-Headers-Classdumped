/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSString, NSObject;

@interface CKDClientInfo : NSObject {

	NSString* _cachedHostname;
	NSObject*<OS_dispatch_queue> _hostCallbackQueue;
	MGNotificationTokenStructRef _hostNotificationToken;

}

@property (nonatomic,readonly) NSString * hostname; 
+(id)sharedClientInfo;
-(NSString *)hostname;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)_refreshHostname;
@end
