/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NotificationManager : NSObject {

	int* listThermalSensorToken;
	int thermalStatusToken;
	int thermalPressureLevelToken;
	int totalSensors;
	BOOL includeSolarInfo;

}

@property (assign,nonatomic) BOOL includeSolarInfo; 
-(void)updateNotifyTokens;
-(void)updateMaxValueToken:(unsigned long long)arg1 ;
-(void)updateThermalNotification:(unsigned long long)arg1 ;
-(long long)updateThermalPressureLevelNotification:(unsigned long long)arg1 shouldForceThermalPressure:(BOOL)arg2 ;
-(id)init:(int)arg1 withSolarInfo:(BOOL)arg2 ;
-(BOOL)includeSolarInfo;
-(void)setIncludeSolarInfo:(BOOL)arg1 ;
-(void)dealloc;
@end
