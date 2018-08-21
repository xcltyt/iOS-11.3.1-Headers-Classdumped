//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIApplicationDelegate.h"

@class CBNavigationController, CBSystem, NSString, UIWindow;

@interface CBAppDelegate : UIResponder <UIApplicationDelegate>
{
    UIWindow *_window;
    CBSystem *_system;
    CBNavigationController *_mainNavigationController;
}

@property(retain, nonatomic) CBNavigationController *mainNavigationController; // @synthesize mainNavigationController=_mainNavigationController;
@property(retain, nonatomic) CBSystem *system; // @synthesize system=_system;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

