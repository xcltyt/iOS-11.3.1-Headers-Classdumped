/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface NWPHContext : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _request;
	NSObject*<OS_xpc_object> _reply;

}

@property (retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_xpc_object> request;                 //@synthesize request=_request - In the implementation block
@property (retain) NSObject*<OS_xpc_object> reply;                   //@synthesize reply=_reply - In the implementation block
@property (nonatomic,readonly) int pid; 
-(void)setRequest:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)request;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithRequest:(id)arg1 onConnection:(id)arg2 ;
-(NSObject*<OS_xpc_object>)reply;
-(void)setReply:(NSObject*<OS_xpc_object>)arg1 ;
-(int)pid;
@end
