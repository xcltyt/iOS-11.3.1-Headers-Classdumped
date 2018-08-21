//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSStatusBarStyleOverridesCoordinatorDelegate.h"

@class NSString, SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator, TabDocument;

@interface MediaCaptureStatusBarManager : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate>
{
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
    _Bool _hasStatusBarOverride;
    TabDocument *_recordingTabDocument;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;
- (_Bool)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_didInvalideStatusBarOverride;
- (void)_didAcquireStatusBarOverrideSuccessfully:(_Bool)arg1;
- (void)_releaseStatusBarOverride;
- (void)_acquireStatusBarOverride;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)browserControllerWillExitTabView:(id)arg1;
- (void)browserControllerWillEnterTabView:(id)arg1;
- (void)tabDidBecomeActive:(id)arg1;
- (void)tabDocumentDidEndMediaCapture:(id)arg1;
- (void)tabDocumentDidBeginMediaCapture:(id)arg1;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
- (void)setRecordingTabDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
