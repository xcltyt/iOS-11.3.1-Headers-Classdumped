/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/tGraphDataSource.h>

@interface CameraTS : NSObject <tGraphDataSource> {

	BOOL _rearCamAutoFocusState;
	BOOL _rearCameraAutoFocusState;
	int _torchState;
	int _rearCameraSensorIdx;
	int _frontCameraSensorIdx;
	int _rearCameraTeleSensorIdx;
	int _torchStateToken;
	int _rearCameraAutoFocusStateToken;
	int _rearCameraStateToken;
	int _rearCameraTemperatureToken;
	int _frontCameraStateToken;
	int _frontCameraTemperatureToken;
	int _rearCameraTeleStateToken;
	int _rearCameraTeleTemperatureToken;

}

@property (assign,nonatomic) int torchState;                                  //@synthesize torchState=_torchState - In the implementation block
@property (assign,nonatomic) BOOL rearCameraAutoFocusState;                   //@synthesize rearCameraAutoFocusState=_rearCameraAutoFocusState - In the implementation block
@property (assign,nonatomic) int rearCameraSensorIdx;                         //@synthesize rearCameraSensorIdx=_rearCameraSensorIdx - In the implementation block
@property (assign,nonatomic) int frontCameraSensorIdx;                        //@synthesize frontCameraSensorIdx=_frontCameraSensorIdx - In the implementation block
@property (assign,nonatomic) int rearCameraTeleSensorIdx;                     //@synthesize rearCameraTeleSensorIdx=_rearCameraTeleSensorIdx - In the implementation block
@property (assign,nonatomic) int torchStateToken;                             //@synthesize torchStateToken=_torchStateToken - In the implementation block
@property (assign,nonatomic) int rearCameraAutoFocusStateToken;               //@synthesize rearCameraAutoFocusStateToken=_rearCameraAutoFocusStateToken - In the implementation block
@property (assign,nonatomic) int rearCameraStateToken;                        //@synthesize rearCameraStateToken=_rearCameraStateToken - In the implementation block
@property (assign,nonatomic) int rearCameraTemperatureToken;                  //@synthesize rearCameraTemperatureToken=_rearCameraTemperatureToken - In the implementation block
@property (assign,nonatomic) int frontCameraStateToken;                       //@synthesize frontCameraStateToken=_frontCameraStateToken - In the implementation block
@property (assign,nonatomic) int frontCameraTemperatureToken;                 //@synthesize frontCameraTemperatureToken=_frontCameraTemperatureToken - In the implementation block
@property (assign,nonatomic) int rearCameraTeleStateToken;                    //@synthesize rearCameraTeleStateToken=_rearCameraTeleStateToken - In the implementation block
@property (assign,nonatomic) int rearCameraTeleTemperatureToken;              //@synthesize rearCameraTeleTemperatureToken=_rearCameraTeleTemperatureToken - In the implementation block
@property (nonatomic,readonly) BOOL rearCamAutoFocusState;                    //@synthesize rearCamAutoFocusState=_rearCamAutoFocusState - In the implementation block
-(int)numberOfFields;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(id)initWithFrontCameraSensorIdx:(int)arg1 rearCameraSensorIdx:(int)arg2 ;
-(void)enableAutoFocusNotifications;
-(void)enableRearCameraTeleNotifications:(int)arg1 ;
-(void)setTorchStateToken:(int)arg1 ;
-(void)setRearCameraAutoFocusStateToken:(int)arg1 ;
-(void)setFrontCameraSensorIdx:(int)arg1 ;
-(void)setFrontCameraStateToken:(int)arg1 ;
-(BOOL)rearCamAutoFocusState;
-(void)setRearCameraSensorIdx:(int)arg1 ;
-(void)setRearCameraStateToken:(int)arg1 ;
-(void)setRearCameraTeleStateToken:(int)arg1 ;
-(void)setRearCameraTeleTemperatureToken:(int)arg1 ;
-(void)setFrontCameraTemperatureToken:(int)arg1 ;
-(void)setRearCameraTemperatureToken:(int)arg1 ;
-(BOOL)rearCameraAutoFocusState;
-(void)handleStateChangeNotification:(int)arg1 temperatureSensorIndex:(int)arg2 ;
-(int)frontCameraStateToken;
-(void)setTorchState:(int)arg1 ;
-(int)rearCameraTeleTemperatureToken;
-(int)rearCameraAutoFocusStateToken;
-(void)setRearCameraAutoFocusState:(BOOL)arg1 ;
-(void)setRearCameraTeleSensorIdx:(int)arg1 ;
-(int)rearCameraTemperatureToken;
-(void)handleTemperatureChangeNotification:(int)arg1 temperatureSensorIndex:(int)arg2 ;
-(int)frontCameraTemperatureToken;
-(void)updateSensor:(int)arg1 temperature:(unsigned long long)arg2 ;
-(int)rearCameraStateToken;
-(int)rearCameraSensorIdx;
-(int)frontCameraSensorIdx;
-(int)rearCameraTeleStateToken;
-(int)rearCameraTeleSensorIdx;
-(int)torchStateToken;
-(void)dealloc;
-(int)torchState;
@end
