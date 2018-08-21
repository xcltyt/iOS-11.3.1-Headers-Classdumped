//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BrowserContainerViewControllerDelegate.h"
#import "CloudTabStoreDelegate.h"
#import "TabMergingControllerDelegate.h"
#import "_SFAuthenticationContextDelegate.h"

@class CloudTabStore, NSArray, NSMutableArray, NSString, WBSAutomaticReaderActivationManager, _SFBrowserSavedState;

@interface BrowserWindowController : NSObject <TabMergingControllerDelegate, CloudTabStoreDelegate, _SFAuthenticationContextDelegate, BrowserContainerViewControllerDelegate>
{
    _Bool _cloudTabStoreNeedsPeriodicUpdates;
    NSMutableArray *_tabMergingControllers;
    _SFBrowserSavedState *_savedState;
    _Bool _cloudTabsEnabled;
    id <BrowserWindowControllerDelegate> _delegate;
    id <BrowserWindowControllerObserving> _changeObserver;
    NSArray *_browserControllers;
    WBSAutomaticReaderActivationManager *_automaticReaderActivationManager;
    CloudTabStore *_cloudTabStore;
}

@property(nonatomic) _Bool cloudTabsEnabled; // @synthesize cloudTabsEnabled=_cloudTabsEnabled;
@property(readonly, nonatomic) CloudTabStore *cloudTabStore; // @synthesize cloudTabStore=_cloudTabStore;
@property(readonly, nonatomic) WBSAutomaticReaderActivationManager *automaticReaderActivationManager; // @synthesize automaticReaderActivationManager=_automaticReaderActivationManager;
@property(readonly, copy, nonatomic) NSArray *browserControllers; // @synthesize browserControllers=_browserControllers;
@property(nonatomic) __weak id <BrowserWindowControllerObserving> changeObserver; // @synthesize changeObserver=_changeObserver;
@property(nonatomic) __weak id <BrowserWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)arg1;
- (_Bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (_Bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (_Bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (_Bool)authenticationEnabledForContext:(id)arg1;
- (void)_closeEmptyController:(id)arg1 reportedByMergingController:(id)arg2;
- (id)_ownerControllerForUUID:(id)arg1;
- (void)_togglePrivateBrowsingOnSplitIfActiveItemChanged:(id)arg1;
- (void)tabMergingControllerDidReconcileItems:(id)arg1;
- (void)tabMergingController:(id)arg1 didChangeOwnershipOfItem:(id)arg2 fromOwnerUUID:(id)arg3 toOwnerUUID:(id)arg4;
- (void)tabMergingController:(id)arg1 didChangeActiveItem:(id)arg2;
- (id)browserContainerViewController:(id)arg1 openNewWindowOnEdge:(long long)arg2 fromBrowserController:(id)arg3;
- (void)containerWillChangeArrangement:(id)arg1;
- (id)_otherBrowserControllerWithBrowserController:(id)arg1;
- (id)_browserControllerUUIDs;
@property(readonly, nonatomic) NSArray *tabMergingControllers;
- (void)_restoreWindowsFromBrowserSavedState:(id)arg1;
- (void)_saveBrowserStateWithQuickUpdate:(_Bool)arg1;
- (void)saveBrowserState;
- (void)cleanUpExtraWindowsIfNeeded;
- (void)_mergeTabsBeforeClose:(id)arg1;
- (void)closeWindow:(id)arg1 temporarily:(_Bool)arg2;
- (void)closeWindow:(id)arg1;
- (void)_moveTabDocument:(id)arg1 toBrowserController:(id)arg2 withSourceInfo:(id)arg3 replacingActiveTab:(_Bool)arg4;
- (void)moveTabDocument:(id)arg1 toNewWindowAtPosition:(long long)arg2 withSourceInfo:(id)arg3;
- (void)moveTabDocument:(id)arg1 toBrowserController:(id)arg2 withSourceInfo:(id)arg3;
- (id)openURL:(id)arg1 inNewWindowAtPosition:(long long)arg2 withSourceInfo:(id)arg3;
- (id)openURL:(id)arg1 inNewWindowWithSourceBrowserController:(id)arg2;
- (void)saveCloudTabsUsingCloudTabStore:(id)arg1;
- (void)cloudTabStore:(id)arg1 cloudTabsEnabledDidChange:(_Bool)arg2;
- (void)cloudTabStore:(id)arg1 didReceiveTabCloseRequest:(id)arg2;
- (void)restoreEducationDeviceCloudTabs:(id)arg1 animated:(_Bool)arg2;
- (void)restoreEducationDeviceTabs;
- (void)updateCloudTabsForEnteringBackground;
- (void)updateCloudTabsForEnteringForeground;
- (void)saveCloudTabs;
- (void)handlePendingCloseTabRequests;
- (void)updateCloudTabStorePeriodicUpdates;
- (_Bool)_needsCloudTabPeriodicUpdates;
- (void)_destroyCloudTabsStore;
- (void)_createCloudTabsStore;
- (void)updateCloudTabUpdatesEnabled;
- (void)_cloudTabFeatureAvailabilityDidChange:(id)arg1;
- (id)_mergedNormalTabDocuments;
@property(readonly, nonatomic) unsigned long long capacity;
- (void)dealloc;
- (id)initWithBrowserSavedState:(id)arg1 automaticReaderActivationManager:(id)arg2;
- (id)initWithBrowserSavedState:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
