/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface AXHAXPCClient : NSObject {

	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	unsigned long long _requestedUpdates;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcQueue;               //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (assign,nonatomic) unsigned long long requestedUpdates;                 //@synthesize requestedUpdates=_requestedUpdates - In the implementation block
+(id)clientWithConnection:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(BOOL)wantsUpdatesForIdentifier:(unsigned long long)arg1 ;
-(void)setWantsUpdates:(BOOL)arg1 forIdentifier:(unsigned long long)arg2 ;
-(unsigned long long)requestedUpdates;
-(void)setRequestedUpdates:(unsigned long long)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)teardownConnection;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(void)setXpcQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
