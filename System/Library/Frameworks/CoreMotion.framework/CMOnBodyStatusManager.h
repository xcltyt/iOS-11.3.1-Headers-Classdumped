/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMOnBodyStatusManager : NSObject {

	CLConnectionClient* fLocationdConnection;
	BOOL fSubscribedToOnBodyStatusDetection;
	NSObject*<OS_dispatch_queue> fOnBodyStatusQueue;
	/*^block*/id fOnBodyStatusHandler;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	NSObject*<OS_dispatch_queue> fPrivateQueue;

}
+(BOOL)isOnBodyStatusDetectionAvailable;
+(id)sharedOnBodyStatusManager;
-(void)stopWatchdogCheckinsPrivate;
-(void)startWatchdogCheckinsPrivate;
-(void)startOnBodyStatusDetectionPrivateToQueue:(id)arg1 withParameters:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stopOnBodyStatusDetectionPrivate;
-(void)startOnBodyStatusDetectionToQueue:(id)arg1 withParameters:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stopOnBodyStatusDetection;
-(void)setPropertiesWithDictionary:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)connect;
-(void)disconnect;
@end
