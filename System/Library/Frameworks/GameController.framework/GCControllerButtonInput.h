/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@interface GCControllerButtonInput : GCControllerElement

@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,copy) id pressedChangedHandler; 
@property (nonatomic,readonly) float value; 
@property (getter=isPressed,nonatomic,readonly) BOOL pressed; 
-(void)setValueChangedHandler:(id)arg1 ;
-(float)value;
-(BOOL)isPressed;
-(BOOL)_setValue:(float)arg1 ;
-(id)valueChangedHandler;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(id)pressedChangedHandler;
-(void)setPressedChangedHandler:(id)arg1 ;
@end
