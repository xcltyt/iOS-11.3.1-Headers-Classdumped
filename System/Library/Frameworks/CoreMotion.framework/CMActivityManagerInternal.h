/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMActivityManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	/*^block*/id fActivityHandler;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	NSObject*<OS_dispatch_queue> fPrivateQueue;
	BOOL fSubscribedToMotionState;
	NSObject*<OS_dispatch_semaphore> fSidebandOverrideSemaphore;
	NSObject*<OS_dispatch_queue> fSidebandOverrideQueue;
	BOOL fSidebandOverrideWaiting;
	long long fSidebandOverrideResult;
	NSObject*<OS_dispatch_semaphore> fMotionStateSimSemaphore;
	NSObject*<OS_dispatch_queue> fMotionStateSimQueue;
	BOOL fMotionStateSimWaiting;
	long long fMotionStateSimResult;

}
-(void)stopWatchdogCheckinsPrivate;
-(void)startWatchdogCheckinsPrivate;
-(void)startActivityUpdatesWithHandlerPrivate:(/*^block*/id)arg1 ;
-(void)stopActivityUpdatesPrivate;
-(void)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2 ;
-(void)simulateMotionState:(BOOL)arg1 withState:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)connect;
-(void)disconnect;
@end
