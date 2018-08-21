/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDataCollector.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, HDDataCollectorConfiguration, NSMutableDictionary, NSDate, NSMutableArray, NSSet, HDWorkoutManager, NSString, HKDevice, HKSource, CMFitnessMachine, HDProfile;

@interface HDFitnessMachineDataCollector : NSObject <HDDataCollector> {

	unsigned long long _fitnessMachineType;
	NSMapTable* _aggregators;
	NSObject*<OS_dispatch_queue> _queue;
	HDDataCollectorConfiguration* _configuration;
	NSMutableDictionary* _previousDatums;
	NSMutableDictionary* _previousWorkoutMetrics;
	NSDate* _approximatedStartDate;
	NSMutableArray* _bufferedCharacteristics;
	NSSet* _localDevicePreferredObjectTypes;
	HDWorkoutManager* _workoutManager;
	BOOL _workoutManagerReady;
	NSMutableDictionary* _bufferedMetrics;
	NSString* _machineBrand;
	HKDevice* _device;
	HKSource* _source;
	CMFitnessMachine* _cmFitnessMachine;
	HDProfile* _profile;
	NSDate* _machinePreferredUntilDate;

}

@property (nonatomic,retain) NSDate * machinePreferredUntilDate;              //@synthesize machinePreferredUntilDate=_machinePreferredUntilDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tearDown;
-(void)handleDataCharacteristic:(id)arg1 ;
-(void)setMachineStartDate:(id)arg1 ;
-(void)setMachinePreferredUntilDate:(NSDate *)arg1 ;
-(void)setMachineBrand:(id)arg1 ;
-(id)initWithFitnessMachineType:(unsigned long long)arg1 profile:(id)arg2 ;
-(NSDate *)machinePreferredUntilDate;
-(void)configureCollectorsAndAggregators;
-(void)workoutManagerStateDidChange:(id)arg1 ;
-(void)_queue_processBufferedCharacteristics;
-(void)_queue_handleDataCharacteristic:(id)arg1 ;
-(void)_queue_processDataCharacteristic:(id)arg1 ;
-(BOOL)_queue_shouldApplyDatum:(id)arg1 toAggregator:(id)arg2 ;
-(id)_queue_calculateDatumForAggregatorType:(id)arg1 currentDatum:(id)arg2 previousDatum:(id)arg3 ;
-(id)deviceForDataAggregator:(id)arg1 ;
-(id)workoutMetricsFromDatums:(id)arg1 ;
-(void)_queue_checkHasAnyActiveConnectedGymWorkouts;
-(id)_cmFitnessMachineDataFromDatums:(id)arg1 timestamp:(id)arg2 ;
-(void)_queue_fitnessMachineSumForType:(id)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_filterForFitnessMachineSamplesWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_queue_handleConfigurationChanged:(id)arg1 ;
-(double)_getDoubleFromDatum:(id)arg1 unitString:(id)arg2 defaultValue:(double)arg3 ;
-(long long)_getLongFromDatum:(id)arg1 unitString:(id)arg2 defaultValue:(long long)arg3 ;
-(void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2 ;
-(void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2 ;
-(id)sourceForDataAggregator:(id)arg1 ;
-(id)identifierForDataAggregator:(id)arg1 ;
@end
