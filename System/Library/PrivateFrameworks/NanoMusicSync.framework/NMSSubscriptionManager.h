/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, ACAccount, NSString;

@interface NMSSubscriptionManager : NSObject <ICEnvironmentMonitorObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	long long _icStatusType;
	ACAccount* _activeAccount;
	unsigned long long _subscriptionStatus;
	unsigned long long _failedGetSubscriptionStatusAttempts;

}

@property (nonatomic,readonly) unsigned long long subscriptionStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(unsigned long long)subscriptionStatus;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(void)_updateSubscriptionStatus;
-(unsigned long long)_statusWithActiveAccount:(id)arg1 icStatusType:(long long)arg2 ;
-(void)_updateICSubscriptionStatusType;
-(void)_handleICSubscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_updateActiveAccount;
@end
