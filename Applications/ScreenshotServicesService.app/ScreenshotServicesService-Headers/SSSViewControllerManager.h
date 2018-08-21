//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSRemoteAlertHandleProviderDelegate.h"

@class NSMutableArray, NSMutableSet, SSRemoteAlertHandleProvider, SSSDittoRemoteAlertViewController, SSSDittoRemoteViewController, SSSDittoRootViewController;

@interface SSSViewControllerManager : NSObject <SSRemoteAlertHandleProviderDelegate>
{
    SSSDittoRootViewController *_rootViewController;
    NSMutableSet *_receivedSessionIdentifiers;
    NSMutableArray *_savedScreenshotsForRootViewController;
    SSRemoteAlertHandleProvider *_remoteAlertHandleProvider;
    CDUnknownBlockType _changeBlockForWhenAlertActivates;
    SSSDittoRemoteViewController *_remoteViewController;
    SSSDittoRemoteAlertViewController *_remoteAlertViewController;
}

+ (id)sharedViewControllerManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldAnimateDragCancel;
- (void)_screenshotManagerHasNoScreenshotsBeingTracked:(id)arg1;
- (void)screenshotsDismissed;
- (void)dismissScreenshots;
- (void)screenshotDismissAnimationFinished;
@property(readonly, nonatomic) _Bool isRemoteAlertViewControllerRegistered;
- (void)moveFromRemoteAlertViewControllerToRemoteViewController;
- (void)_moveFromRemoteAlertViewControllerToRemoteViewControllerPreparingAlertHandle:(_Bool)arg1;
- (void)moveFromRemoteViewControllerToRemoteAlertViewControllerExecutingChangeBlockWhenReady:(CDUnknownBlockType)arg1;
- (void)_actuallyMoveFromRemoteViewControllerToRemoteAlertViewController;
- (void)_moveDittoRootViewControllerFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)unregisterRemoteAlertViewController:(id)arg1;
- (void)registerRemoteAlertViewController:(id)arg1;
- (void)unregisterRemoteViewController:(id)arg1;
- (void)registerRemoteViewController:(id)arg1;
- (void)remoteAlertHandleProvider:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleProviderDidDeactivate:(id)arg1;
- (void)_cleanupForDeadAlertHandle;
- (void)remoteAlertHandleProviderDidActivate:(id)arg1;
- (void)receiveImageIdentifierUpdate:(id)arg1;
- (void)receiveEnvironmentDescription:(id)arg1;
@property(readonly, nonatomic) SSSDittoRootViewController *rootViewController;
- (void)_prepareRootViewControllerIfNecessary;
- (id)init;

@end
