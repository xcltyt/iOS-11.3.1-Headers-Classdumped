/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ComponentControl.h>
#import <ThermalMonitor/tGraphDataSource.h>

@interface SocCC : ComponentControl <tGraphDataSource> {

	int listIDPos;
	unsigned gpuPowerTarget;
	float timeActive;

}
-(int)numberOfFields;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(void)refreshCurrentLoadingIndex;
-(id)initWithParams:(CFDictionaryRef)arg1 listID:(int)arg2 ;
-(void)defaultAction;
@end
