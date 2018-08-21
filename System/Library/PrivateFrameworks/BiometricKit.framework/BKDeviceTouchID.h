/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BKDevice.h>

@interface BKDeviceTouchID : BKDevice
+(BOOL)deviceAvailableWithError:(id*)arg1 ;
-(id)createEnrollOperationWithError:(id*)arg1 ;
-(BOOL)enableBackgroundFingerDetection:(BOOL)arg1 error:(id*)arg2 ;
-(id)createMatchOperationWithError:(id*)arg1 ;
-(id)createPresenceDetectOperationWithError:(id*)arg1 ;
-(id)createExtendEnrollTouchIDOperationWithError:(id*)arg1 ;
@end
