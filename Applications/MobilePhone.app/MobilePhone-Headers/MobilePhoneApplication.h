//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhoneApplication.h"

@interface MobilePhoneApplication : PhoneApplication
{
}

- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)refreshDynamicApplicationShortcuts;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (long long)headerViewNumberOfCallsToShow;
- (_Bool)headerViewShowsAllRecentCalls;
- (_Bool)audioButtonAllowsPhoneCallsAndFaceTimeAudio;
- (_Bool)hasEnhancedVoicemail;
- (_Bool)shouldHideVoicemailUI;
- (_Bool)showsPhoneVoicemail;
- (_Bool)showsPhoneDialer;
- (_Bool)badgesMissedFaceTimeVideo;
- (_Bool)badgesMissedFaceTimeAudio;
- (_Bool)badgesMissedTelephonyCalls;
- (_Bool)showsThirdPartyRecents;
- (_Bool)showsFaceTimeVideoRecents;
- (_Bool)showsFaceTimeAudioRecents;
- (_Bool)showsTelephonyRecents;
- (_Bool)showsFaceTimeVideoFavorites;
- (_Bool)showsFaceTimeAudioFavorites;
- (_Bool)showsTelephonyFavorites;
- (_Bool)showsFaceTimeAudio;
- (_Bool)showsFaceTimeVideo;
- (_Bool)showsTelephonyCalls;
- (int)defaultAction;
- (_Bool)showSplashScreenOnSignin;
- (_Bool)tabBarCanSlide;
- (_Bool)tabBarFillsScreen;
- (_Bool)contentViewCanRotate;
- (_Bool)alwaysShowLocalVideo;
- (_Bool)usesBlendModes;
- (unsigned int)userInterfaceStyle;
- (id)rootViewController;
- (void)dealloc;
- (id)init;
- (void)applicationDidFinishLaunching:(id)arg1;
- (_Bool)_isIPad;

@end

