/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>

@protocol SBSAccelerometerDelegate;
@class BKSAccelerometer, NSString;

@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate> {

	id<SBSAccelerometerDelegate> _delegate;
	BKSAccelerometer* _bksMirror;

}

@property (assign,nonatomic) BOOL accelerometerEventsEnabled; 
@property (assign,nonatomic) double updateInterval; 
@property (assign,nonatomic) float xThreshold; 
@property (assign,nonatomic) float yThreshold; 
@property (assign,nonatomic) float zThreshold; 
@property (assign,nonatomic) BOOL orientationEventsEnabled; 
@property (assign,nonatomic,__weak) id<SBSAccelerometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)xThreshold;
-(float)yThreshold;
-(float)zThreshold;
-(BOOL)orientationEventsEnabled;
-(id)init;
-(id<SBSAccelerometerDelegate>)delegate;
-(void)setDelegate:(id<SBSAccelerometerDelegate>)arg1 ;
-(void)dealloc;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(void)setAccelerometerEventsEnabled:(BOOL)arg1 ;
-(BOOL)accelerometerEventsEnabled;
-(void)setXThreshold:(float)arg1 ;
-(void)setYThreshold:(float)arg1 ;
-(void)setZThreshold:(float)arg1 ;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(int)currentDeviceOrientation;
-(void)setOrientationEventsEnabled:(BOOL)arg1 ;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2 ;
@end
