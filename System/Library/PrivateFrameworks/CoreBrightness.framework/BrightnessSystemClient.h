/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class BrightnessSystemClientInternal, NSObject;

@interface BrightnessSystemClient : NSObject {

	BrightnessSystemClientInternal* bsci;
	NSObject*<OS_os_log> _logHandle;

}
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)registerNotificationForKey:(id)arg1 ;
-(void)unregisterNotificationForKey:(id)arg1 ;
-(void)registerNotificationForKeys:(id)arg1 ;
-(void)unregisterNotificationForKeys:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isAlsSupported;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
@end
