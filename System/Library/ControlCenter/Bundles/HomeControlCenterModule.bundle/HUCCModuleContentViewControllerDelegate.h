/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CCUIContentModuleContext;


@protocol HUCCModuleContentViewControllerDelegate <NSObject>
@property (nonatomic,readonly) CCUIContentModuleContext * contentModuleContext; 
@required
-(BOOL)isDeviceUnlockedForModuleViewController:(id)arg1;
-(void)launchHomeAppForModuleViewController:(id)arg1;
-(CCUIContentModuleContext *)contentModuleContext;

@end
