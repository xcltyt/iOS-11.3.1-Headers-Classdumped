/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NEVPNManager;

@interface NEVPNConnection : NSObject {

	int _sessionType;
	long long _status;
	NSDate* _connectedDate;
	void* _session;
	NEVPNManager* _weakmanager;

}

@property (assign) void* session;                           //@synthesize session=_session - In the implementation block
@property (readonly) int sessionType;                       //@synthesize sessionType=_sessionType - In the implementation block
@property (__weak) NEVPNManager * weakmanager;              //@synthesize weakmanager=_weakmanager - In the implementation block
@property (readonly) long long status;                      //@synthesize status=_status - In the implementation block
@property (readonly) NSDate * connectedDate;                //@synthesize connectedDate=_connectedDate - In the implementation block
@property (readonly) NEVPNManager * manager; 
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
-(long long)status;
-(void*)session;
-(void)setSession:(void*)arg1 ;
-(NEVPNManager *)manager;
-(BOOL)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2 ;
-(NSDate *)connectedDate;
-(void)updateSessionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)startVPNTunnelAndReturnError:(id*)arg1 ;
-(void)stopVPNTunnel;
-(void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)destroySession;
-(NEVPNManager *)weakmanager;
-(void)setWeakmanager:(NEVPNManager *)arg1 ;
-(int)sessionType;
@end
