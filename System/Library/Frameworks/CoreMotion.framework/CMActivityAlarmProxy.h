/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSMutableDictionary, NSObject;

@interface CMActivityAlarmProxy : NSObject {

	id _internal;
	CLConnectionClient* fLocationdConnection;
	int fAlarmCounter;
	NSMutableDictionary* fAlarms;
	NSObject*<OS_dispatch_queue> fReplyQueue;
	BOOL fAlarmAvailable;
	NSObject*<OS_dispatch_source> fWatchdogTimer;

}
+(id)sharedInstance;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)listenForActivityAlarm:(id)arg1 ;
-(void)stopListeningForActivityAlarm:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)activityAlarmAvailable;
@end
