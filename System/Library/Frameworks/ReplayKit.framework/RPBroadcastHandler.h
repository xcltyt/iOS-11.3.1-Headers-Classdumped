/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSDictionary, NSExtensionContext, NSXPCListenerEndpoint, NSXPCConnection, NSXPCListener, NSString;

@interface RPBroadcastHandler : NSObject <NSXPCListenerDelegate, NSExtensionRequestHandling> {

	NSDictionary* _serviceInfo;
	NSExtensionContext* _extensionContext;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSXPCConnection* _connection;
	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSDictionary * serviceInfo;                            //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,retain) NSExtensionContext * extensionContext;                 //@synthesize extensionContext=_extensionContext - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;              //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSExtensionContext *)extensionContext;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setServiceInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)serviceInfo;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(void)_completeRequestWithReturnItems:(id)arg1 ;
-(void)updateServiceInfo:(id)arg1 ;
@end

