/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/WebInspector-Structs.h>
#import <libobjc.A.dylib/RWIRelayDelegate.h>

@class RWIRelay, BKSApplicationStateMonitor, NSTimer;

@interface RWIRelayDelegateIOS : NSObject <RWIRelayDelegate> {

	RWIRelay* _relay;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSTimer* _preventDeviceFromIdlingTimer;

}
-(void)relayInitialize:(id)arg1 ;
-(void)relay:(id)arg1 activateApplicationWithBundleIdentifier:(id)arg2 ;
-(void)relayClientConnectionDidChange:(id)arg1 ;
-(BOOL)relay:(id)arg1 allowIncomingApplicationViaProxy:(SCD_Struct_RW5)arg2 ;
-(void)relay:(id)arg1 applicationUpdated:(id)arg2 ;
-(void)relay:(id)arg1 applicationConnected:(id)arg2 ;
-(void)relay:(id)arg1 applicationDisconnected:(id)arg2 ;
-(BOOL)relay:(id)arg1 allowIncomingApplicationConnection:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)relay:(id)arg1 applicationInfoForIncomingConnection:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)relay:(id)arg1 unhandledApplicationXPCMessage:(id)arg2 ;
-(BOOL)_hasRemoteInspectorEntitlement:(SCD_Struct_RW5)arg1 ;
-(BOOL)_hasCarrierRemoteInspectorEntitlement:(SCD_Struct_RW5)arg1 ;
-(BOOL)_usedDevelopmentProvisioningProfile:(SCD_Struct_RW5)arg1 ;
-(BOOL)_allowApplication:(SCD_Struct_RW5)arg1 bundleIdentifier:(id)arg2 ;
-(void)_createApplicationStateMonitorIfNeeded;
-(BOOL)_isProxyApplication:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_backBoardApplicationStateChanged:(id)arg1 ;
-(void)_updateDeviceIdlePrevention;
-(void)_tickleIdleTimer;
-(void)_startPreventingDeviceFromIdling;
-(void)_stopPreventingDeviceFromIdling;
-(id)relaySetupResponseForClientConnection:(id)arg1 ;
@end
