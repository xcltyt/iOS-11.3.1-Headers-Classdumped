//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class ADWatchdog, NSObject<OS_dispatch_source>, NSString, UIWindow;

@interface ADSAppDelegate : NSObject <UIApplicationDelegate>
{
    _Bool _hasCreatedAdSpace;
    _Bool _isTailspinning;
    int _classicModeUnavailableToken;
    UIWindow *_frontMostWindow;
    double _lastURLCachePersist;
    NSObject<OS_dispatch_source> *_memoryNotificationSource;
    unsigned long long _classicModeUnavailableCounter;
    ADWatchdog *_mainThreadWatchdog;
}

+ (void)returnNoClassicModeAssertion;
+ (void)takeNoClassicModeAssertion;
+ (void)didCreateAdSpace;
@property(nonatomic) _Bool isTailspinning; // @synthesize isTailspinning=_isTailspinning;
@property(retain, nonatomic) ADWatchdog *mainThreadWatchdog; // @synthesize mainThreadWatchdog=_mainThreadWatchdog;
@property(nonatomic) _Bool hasCreatedAdSpace; // @synthesize hasCreatedAdSpace=_hasCreatedAdSpace;
@property(nonatomic) unsigned long long classicModeUnavailableCounter; // @synthesize classicModeUnavailableCounter=_classicModeUnavailableCounter;
@property(nonatomic) int classicModeUnavailableToken; // @synthesize classicModeUnavailableToken=_classicModeUnavailableToken;
@property(nonatomic) NSObject<OS_dispatch_source> *memoryNotificationSource; // @synthesize memoryNotificationSource=_memoryNotificationSource;
@property(nonatomic) double lastURLCachePersist; // @synthesize lastURLCachePersist=_lastURLCachePersist;
@property(readonly, nonatomic) UIWindow *frontMostWindow; // @synthesize frontMostWindow=_frontMostWindow;
- (void)returnNoClassicModeAssertion;
- (void)takeNoClassicModeAssertion;
- (void)setupNoClassicModeNotificationAndState;
- (void)applicationWillTerminate:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2;
- (void)_postLaunchSetup;
- (void)_startWatchdog;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_setupiAdID;
- (void)startUpdatingIDs;
- (void)updateCurrentDSID:(CDUnknownBlockType)arg1;
- (void)_persistURLCache;
- (void)prepareForShutdown;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

