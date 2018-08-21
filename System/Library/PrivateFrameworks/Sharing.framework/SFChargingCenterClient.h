/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SBUISound, SFWirelessChargingMonitor, SFChargingUICoordinator;

@interface SFChargingCenterClient : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	int _triggerEngagementToken;
	BOOL _forcePill;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _visualInformationRequestHandler;
	/*^block*/id _requestHandler;
	SBUISound* _chimeSound;
	SFWirelessChargingMonitor* _monitor;
	SFChargingUICoordinator* _uiCoordinator;

}

@property (nonatomic,retain) SBUISound * chimeSound;                                  //@synthesize chimeSound=_chimeSound - In the implementation block
@property (nonatomic,retain) SFWirelessChargingMonitor * monitor;                     //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain) SFChargingUICoordinator * uiCoordinator;                 //@synthesize uiCoordinator=_uiCoordinator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id visualInformationRequestHandler;                        //@synthesize visualInformationRequestHandler=_visualInformationRequestHandler - In the implementation block
@property (nonatomic,copy) id requestHandler;                                         //@synthesize requestHandler=_requestHandler - In the implementation block
@property (nonatomic,readonly) long long numberOfDevicesCharging; 
-(SFWirelessChargingMonitor *)monitor;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(void)setRequestHandler:(id)arg1 ;
-(void)activate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)requestHandler;
-(void)onqueue_activate;
-(void)onqueue_invalidate;
-(void)checkDefaults;
-(void)setChimeSound:(SBUISound *)arg1 ;
-(void)setUpMonitor;
-(void)setUiCoordinator:(SFChargingUICoordinator *)arg1 ;
-(void)listenToNotifications;
-(void)sendPresentationRequestForPowerSource:(id)arg1 removed:(BOOL)arg2 ;
-(SFChargingUICoordinator *)uiCoordinator;
-(id)visualInformationRequestHandler;
-(void)updateConfigurationContextWithPowerSourcesData:(id)arg1 ;
-(void)updateConfigurationContext:(id)arg1 withInformationProvider:(id)arg2 ;
-(void)updateConfigurationContext:(id)arg1 withKeyPowerSource:(id)arg2 ;
-(void)playChime;
-(void)presentationRequestContextsForReason:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(SBUISound *)chimeSound;
-(id)dataRepresentationForInformationProvider:(id)arg1 ;
-(long long)numberOfDevicesCharging;
-(void)contextsForRemoteAlertActivationWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVisualInformationRequestHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMonitor:(SFWirelessChargingMonitor *)arg1 ;
@end
