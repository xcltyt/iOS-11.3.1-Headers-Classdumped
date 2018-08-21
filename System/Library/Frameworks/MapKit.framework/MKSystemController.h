/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKSystemControllerOpenURLDelegate;
#import <MapKit/MapKit-Structs.h>
@interface MKSystemController : NSObject {

	id<MKSystemControllerOpenURLDelegate> _openURLDelegate;

}

@property (assign,nonatomic,__weak) id<MKSystemControllerOpenURLDelegate> openURLDelegate;              //@synthesize openURLDelegate=_openURLDelegate - In the implementation block
+(id)sharedInstance;
-(BOOL)isInternalInstall;
-(int)userInterfaceIdiom;
-(BOOL)openURL:(id)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)screenScale;
-(BOOL)isWifiEnabled;
-(BOOL)isDevicePluggedIn;
-(BOOL)isPhone6PlusOrLarger;
-(BOOL)supportsAlwaysOnCompass;
-(BOOL)isHiDPI;
-(BOOL)supports3DMaps;
-(BOOL)supportsPitchAPI;
-(BOOL)supports3DImagery;
-(BOOL)requiresRTT;
-(BOOL)reduceMotionEnabled;
-(id)_defaultOpenURLOptions;
-(BOOL)_openURLsOnBackgroundThread;
-(BOOL)_shouldUseLaunchServices;
-(BOOL)_isRunningInLockScreen;
-(void)placeDialRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openURL:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 requireOptionKeyPromptUnlockDevice:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)overrideBlurStyle;
-(id<MKSystemControllerOpenURLDelegate>)openURLDelegate;
-(void)setOpenURLDelegate:(id<MKSystemControllerOpenURLDelegate>)arg1 ;
-(CGSize)screenSize;
@end
