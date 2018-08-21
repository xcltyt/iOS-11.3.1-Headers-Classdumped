/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/WeatherExtensionBridgeSettings.bundle/WeatherExtensionBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class BPSAppGlanceManager, WeatherPrefsMonitor;

@interface WeatherCompanionBridgeSettingsController : PSListController {

	BPSAppGlanceManager* _manager;
	WeatherPrefsMonitor* _weatherPrefsMonitor;

}

@property (nonatomic,retain) BPSAppGlanceManager * manager;                          //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) WeatherPrefsMonitor * weatherPrefsMonitor;              //@synthesize weatherPrefsMonitor=_weatherPrefsMonitor - In the implementation block
-(void)setWeatherPrefsMonitor:(WeatherPrefsMonitor *)arg1 ;
-(WeatherPrefsMonitor *)weatherPrefsMonitor;
-(id)defaultCity:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BPSAppGlanceManager *)manager;
-(void)setManager:(BPSAppGlanceManager *)arg1 ;
-(id)localizedPaneTitle;
-(id)specifiers;
@end
