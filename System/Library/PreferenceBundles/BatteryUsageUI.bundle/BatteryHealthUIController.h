/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol OS_os_log;
@class NSObject, PSSpecifier, NSString;

@interface BatteryHealthUIController : PSListController <UIAlertViewDelegate> {

	BOOL _invalidData;
	BOOL _userDisabledPerfManagement;
	int _perfManagementState;
	int _serviceRecommendedOption;
	int _maxChargeCapacityPct;
	NSObject*<OS_os_log> _BHUILog;
	unsigned long long __batteryHealthUILoadEndTime;
	unsigned long long __batteryHealthUILoadStartTime;
	PSSpecifier* _spinnerGroup;

}

@property (assign) int perfManagementState;                                       //@synthesize perfManagementState=_perfManagementState - In the implementation block
@property (assign) int serviceRecommendedOption;                                  //@synthesize serviceRecommendedOption=_serviceRecommendedOption - In the implementation block
@property (assign) int maxChargeCapacityPct;                                      //@synthesize maxChargeCapacityPct=_maxChargeCapacityPct - In the implementation block
@property (assign) BOOL invalidData;                                              //@synthesize invalidData=_invalidData - In the implementation block
@property (assign) BOOL userDisabledPerfManagement;                               //@synthesize userDisabledPerfManagement=_userDisabledPerfManagement - In the implementation block
@property (assign) unsigned long long _batteryHealthUILoadEndTime;                //@synthesize _batteryHealthUILoadEndTime=__batteryHealthUILoadEndTime - In the implementation block
@property (assign) unsigned long long _batteryHealthUILoadStartTime;              //@synthesize _batteryHealthUILoadStartTime=__batteryHealthUILoadStartTime - In the implementation block
@property (retain) PSSpecifier * spinnerGroup;                                    //@synthesize spinnerGroup=_spinnerGroup - In the implementation block
@property (retain) NSObject*<OS_os_log> BHUILog;                                  //@synthesize BHUILog=_BHUILog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userDidDisable;
-(void)userDidLeaveOn;
-(int)getManagementStateWithSync:(BOOL)arg1 ;
-(void)updateMaximumCapacity;
-(void)updatePerfManagementState;
-(void)updateServiceRecommendedOption;
-(id)getChargeCapacityRemaining;
-(void)setGroupBatteryOptNotDeterminable:(id)arg1 ;
-(NSObject*<OS_os_log>)BHUILog;
-(void)updateData;
-(id)aboutBatteriesGroupSpecifier;
-(id)spinnerSpecifierGroup;
-(id)chargeCapacityGroupSpecifier;
-(id)peakPowerCapacityGroupSpecifier;
-(id)serviceRecommendedTextGroupSpecifier;
-(void)setPerfManagementState:(int)arg1 ;
-(int)perfManagementState;
-(BOOL)userDisabledPerfManagement;
-(PSSpecifier *)spinnerGroup;
-(void)setBHUILog:(NSObject*<OS_os_log>)arg1 ;
-(int)serviceRecommendedOption;
-(void)setPerformanceManagementAlert;
-(void)setServiceRecommendedOption:(int)arg1 ;
-(void)setAboutBatteriesLink;
-(void)setMaxChargeCapacityPct:(int)arg1 ;
-(BOOL)invalidData;
-(void)setUserDisabledPerfManagement:(BOOL)arg1 ;
-(unsigned long long)_batteryHealthUILoadEndTime;
-(void)set_batteryHealthUILoadEndTime:(unsigned long long)arg1 ;
-(unsigned long long)_batteryHealthUILoadStartTime;
-(void)set_batteryHealthUILoadStartTime:(unsigned long long)arg1 ;
-(void)setSpinnerGroup:(PSSpecifier *)arg1 ;
-(void)setBatteryServiceLink;
-(int)maxChargeCapacityPct;
-(void)setInvalidData:(BOOL)arg1 ;
-(id)chargeCapacityRemainingDemo:(id)arg1 ;
-(id)init;
-(void)viewDidLoad;
-(id)specifiers;
@end
