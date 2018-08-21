/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface PKDaemonClient : NSObject {

	NSObject*<OS_xpc_object> _pkd;
	NSObject*<OS_dispatch_queue> _replyQueue;
	long long _protocolVersion;

}

@property (retain) NSObject*<OS_xpc_object> pkd;                         //@synthesize pkd=_pkd - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> replyQueue;              //@synthesize replyQueue=_replyQueue - In the implementation block
@property (assign) long long protocolVersion;                            //@synthesize protocolVersion=_protocolVersion - In the implementation block
+(id)convertToXPC:(id)arg1 version:(unsigned long long)arg2 ;
-(void)findPlugInByUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)findPlugInByPathURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)errorInReply:(id)arg1 ;
-(id)convertFromXPC:(id)arg1 ;
-(void)matchPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)accessPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)readyPlugIns:(id)arg1 flags:(unsigned long long)arg2 environment:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setPluginAnnotations:(id)arg1 annotations:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)copyReceipt:(/*^block*/id)arg1 ;
-(void)setPkd:(NSObject*<OS_xpc_object>)arg1 ;
-(id)request:(const char*)arg1 paths:(id)arg2 ;
-(void)send:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)request:(const char*)arg1 ;
-(void)set:(id)arg1 plugins:(id)arg2 ;
-(void)set:(id)arg1 uuids:(id)arg2 ;
-(void)addPlugIns:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removePlugIns:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)bulkPlugins:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)bulkSetPluginAnnotations:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)holdPlugins:(id)arg1 flags:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)releaseHold:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_xpc_object>)pkd;
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(id)initWithServiceName:(const char*)arg1 ;
-(void)setReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)replyQueue;
@end
