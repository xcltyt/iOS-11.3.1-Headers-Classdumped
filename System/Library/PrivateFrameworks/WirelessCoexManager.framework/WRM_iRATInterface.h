/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessCoexManager/WirelessCoexManager-Structs.h>
#import <WirelessCoexManager/WRMClientInterface.h>

@class NSMutableArray;

@interface WRM_iRATInterface : WRMClientInterface {

	NSMutableArray* mAppLists;
	BOOL mClientSupportsMultipleAppTypes;
	/*^block*/id mObserver;
	/*^block*/id mOppModeObserver;
	BOOL mLinkPreferenceSubscriptionEnabled;
	BOOL mTelephoneAssertionEnabled;
	BOOL mTelephonyStateEnabled;
	BOOL mLocationAssertionEnabled;
	int mLocationState;
	BOOL mBBAssertionBGAppActive;

}
-(id)init;
-(void)dealloc;
-(void)unregisterClient;
-(void)registerClient:(int)arg1 queue:(id)arg2 ;
-(void)subscribeMultipleAppTypes:(id)arg1 observer:(/*^block*/id)arg2 ;
-(void)subscribeAppType:(SCD_Struct_WR0)arg1 observer:(/*^block*/id)arg2 ;
-(void)setTelephonyEnabled:(BOOL)arg1 ;
-(void)assertCommCenterBaseBandMode:(int)arg1 ;
-(void)expediteBBAssertionBGAppActive:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)reConnect;
-(void)processOperatingModeNotification:(id)arg1 ;
-(void)handleNotification:(id)arg1 :(BOOL)arg2 ;
-(void)addAppType:(id)arg1 ;
-(int)getSubscribeMessageType:(int)arg1 ;
-(int)getStatusUpdateMessageType:(int)arg1 ;
-(void)_expediteBBAssertionBGAppActive_sync:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeAppType:(id)arg1 ;
-(void)subscribeOperatingModeChangeNotification:(/*^block*/id)arg1 ;
-(void)assertCommCenterBaseBand:(int)arg1 ;
-(void)statusUpdateAppType:(int)arg1 linkType:(int)arg2 serviceStatus:(BOOL)arg3 ;
-(void)processNotificationList:(id)arg1 ;
@end
