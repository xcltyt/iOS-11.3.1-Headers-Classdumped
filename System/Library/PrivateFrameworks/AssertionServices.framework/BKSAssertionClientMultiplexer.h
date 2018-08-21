/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface BKSAssertionClientMultiplexer : BSBaseXPCClient {

	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSMutableDictionary* _listeners;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> assertionQueue; 
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_connectionWasDestroyed;
-(void)sendEvent:(id)arg1 withAssertionType:(id)arg2 forEventType:(unsigned long long)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_assertionQueue_handleEvent:(id)arg1 forListener:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)sendMessage:(/*^block*/id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
@end
