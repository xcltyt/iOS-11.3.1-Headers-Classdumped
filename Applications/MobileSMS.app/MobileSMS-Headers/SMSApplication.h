//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "IMSystemMonitorListener.h"
#import "PARSessionDelegate.h"
#import "UIApplicationDelegate.h"

@class BKSProcessAssertion, CKMessagesController, CKRegistrationViewController, NSArray, NSString, NSURL, TLAlert, UIWindow;

@interface SMSApplication : UIApplication <IMSystemMonitorListener, PARSessionDelegate, UIApplicationDelegate>
{
    _Bool _waitToSendFinishLaunching;
    _Bool _isLocked;
    _Bool _isSuspended;
    UIWindow *_window;
    CKMessagesController *_messagesController;
    CKRegistrationViewController *_madridRegistrationController;
    NSString *_defaultPng;
    NSArray *_suspendUnreadMessages;
    BKSProcessAssertion *_backgroundAssertion;
    TLAlert *_alert;
    _Bool _shouldShowRegistrationOverride;
    id <SMSApplicationPerformSearchProtocol> _testPerformSearchDelegate;
    _Bool _isHandlingLaunchTask;
    _Bool _needsDeferredRestoreSetup;
    NSString *_openURLSourceApplication;
    NSURL *_deferredLoadURL;
    NSString *_deferredLoadURLSourceApplication;
    CDUnknownBlockType _alertViewHandler;
}

@property(nonatomic) _Bool needsDeferredRestoreSetup; // @synthesize needsDeferredRestoreSetup=_needsDeferredRestoreSetup;
@property(nonatomic) _Bool isHandlingLaunchTask; // @synthesize isHandlingLaunchTask=_isHandlingLaunchTask;
@property(copy, nonatomic) CDUnknownBlockType alertViewHandler; // @synthesize alertViewHandler=_alertViewHandler;
@property(retain, nonatomic) CKMessagesController *messagesController; // @synthesize messagesController=_messagesController;
@property(retain, nonatomic) NSString *deferredLoadURLSourceApplication; // @synthesize deferredLoadURLSourceApplication=_deferredLoadURLSourceApplication;
@property(retain, nonatomic) NSURL *deferredLoadURL; // @synthesize deferredLoadURL=_deferredLoadURL;
@property(retain, nonatomic) NSString *openURLSourceApplication; // @synthesize openURLSourceApplication=_openURLSourceApplication;
- (void).cxx_destruct;
- (id)validIntentDictionaryWithURLParameters:(id)arg1;
- (_Bool)hasBusinessRecipientWithRecipientIDs:(id)arg1;
- (void)_showPeerPaymentUIForPerson:(id)arg1 amount:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleAccountsChanged:(id)arg1;
- (_Bool)_shouldShowMadridRegistrationView;
- (void)_updateMadridRegistrationViewAnimated:(_Bool)arg1;
- (void)_destroyMadridRegistrationView;
- (void)_createMadridRegistrationViewIfNecessary;
- (void)_showMadridRegistrationViewIfNecessary;
- (void)__showMadridRegistrationViewIfNecessary;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_updateAppSnapshot;
- (void)__updateAppSnapshot;
- (_Bool)_isShowingNewComposition;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_scheduleDeferredSetup;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationSignificantTimeChange:(id)arg1;
- (_Bool)applicationSuspendWithSettings:(id)arg1;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidResumeFromUnderLock;
- (void)_prepareForResume:(_Bool)arg1;
- (void)_prepareForSuspend;
- (_Bool)openURL:(id)arg1;
- (void)reportAppLaunchFinished;
- (void)setWaitToSendFinishLaunching:(_Bool)arg1;
- (void)applicationOpenURL:(id)arg1;
- (_Bool)isLocked;
- (_Bool)isHandlingURL;
- (void)_storeState;
- (_Bool)_restoreState:(out CDUnknownBlockType *)arg1;
- (_Bool)_restoreState;
- (void)_handleDeferredLoadURL;
- (void)_handleUnitTestInvocation:(id)arg1;
- (void)handleURL:(id)arg1;
- (void)_loadURLMessageGUID:(id)arg1;
- (_Bool)_loadingApplicationFromSpotlightSearch:(id)arg1;
- (void)_conversationListDidLoad:(id)arg1;
- (void)_messageSendFailed:(id)arg1;
- (void)_messageSent:(id)arg1;
- (_Bool)isFromFilteredSender:(id)arg1 fromPerson:(id)arg2;
- (void)_messageReceived:(id)arg1;
- (void)_resetIdleTimer;
- (void)_playMessageReceivedForMessage:(id)arg1 inChat:(id)arg2;
- (_Bool)_shouldPlayDefaultSendSoundForMessageInCurrentTranscript:(id)arg1;
- (void)_playReceiveAcknowledgmentSound;
- (void)_playSendSoundForMessage:(id)arg1;
- (void)dealloc;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)_application:(id)arg1 handleSiriTask:(id)arg2;
- (id)init;
- (id)defaultPng;
- (void)setDefaultPng:(id)arg1;
- (void)_clearFailureBadge;
- (void)startAndFailTestNamed:(id)arg1 withFailure:(id)arg2;
- (void)showConversationForChatIdentifier:(id)arg1 forceReload:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)installNotificationObserverForNotificationName:(id)arg1 notificationName:(id)arg2 forOneNotification:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)stopPPTSubtestForCurrentTest:(id)arg1;
- (void)startPPTSubtestForCurrentTest:(id)arg1;
- (void)_willConfigureCellWithTranscriptPluginChatItem:(id)arg1;
- (void)startLiveBubbleLoadingTest:(id)arg1;
- (void)didChangeOrientation:(id)arg1;
- (void)showMessagesApplicationAndStartTestForIdentifier:(id)arg1 supportsLaunchSubtest:(_Bool)arg2;
- (void)startPriorityBoostingTestWithOptions:(id)arg1;
- (void)startExtensionTest:(id)arg1 launch:(_Bool)arg2;
- (void)scrollPhotoPickerTestWithOptions:(id)arg1;
- (void)perfTestScrollAppsDrawerWithOptions:(id)arg1;
- (void)startScrollForCollectionView:(id)arg1;
- (void)_startActualAppDrawerScrollingTest:(id)arg1;
- (void)_runScrollingAppDrawerTestWithOptions;
- (void)perfTestScrollAppsTray;
- (void)_runScrollingAppShelfTest;
- (void)clearEntryView;
- (void)startScrollConversationsTest:(id)arg1;
- (void)_audioBalloonPlaybackDidFinish:(id)arg1;
- (void)_audioBalloonPlaybackWillStart:(id)arg1;
- (void)startAudioBalloonPlaybackTest:(id)arg1;
- (void)startQuicklookPresentationTest:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)startKeyboardResponsivenessTest:(id)arg1;
- (void)startKeyboardPresentationTest:(id)arg1;
- (void)startGifPlaybackStaticFPSTest;
- (void)startInvisibleInkStaticFPSTest;
- (void)startAudioWaveformFPSTest;
- (void)_chatControllerDidRotate:(id)arg1;
- (void)_chatControllerWillRotate:(id)arg1;
- (void)startRotationTestWithTranscript:(id)arg1;
- (void)startRotationTest:(id)arg1;
- (void)_stickerDragFired:(id)arg1;
- (void)startInteractiveStickerDragTest:(id)arg1;
- (void)fsmDidFinish:(id)arg1;
- (id)_fsmIdentifierForTestName:(id)arg1;
- (void)startFSMTest;
- (void)startStaticFSMFPSTest:(id)arg1;
- (void)startGeneralStaticFPSTestWithDelay:(id)arg1;
- (void)startStaticTranscriptFPSTest:(id)arg1;
- (_Bool)canRunTests;
- (void)chatRegistryDidLoad:(id)arg1;
- (void)startScrollTranscriptTest:(id)arg1;
- (void)_finishSendAnimationTest:(id)arg1;
- (void)_startSendAnimationTest:(id)arg1;
- (void)startSendAnimationExistingTest;
- (void)startSendAnimationNewComposeTest:(id)arg1;
- (void)_detailsViewScrollingPerfTest:(id)arg1;
- (void)startDetailsTest:(id)arg1;
- (void)sendMultipleMessagesEntryView:(id)arg1 composition:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)startStuckAudioPillTest:(id)arg1;
- (void)startShowNewComposeTest:(id)arg1;
- (void)startResolveContactTest:(id)arg1;
- (void)_startResolveContactTest:(id)arg1;
- (void)_scrollPseudoContactTest:(id)arg1 withOptions:(id)arg2;
- (void)startScrollPseudoContactNamesTest:(id)arg1;
- (void)_startcomposePseudoContactTest:(id)arg1 withOptions:(id)arg2;
- (void)startComposeMessageToPseudoContactTest:(id)arg1;
- (void)typeInContactName:(id)arg1;
- (void)_resolveContactTest:(id)arg1;
- (void)tearDownResolveContactTest:(CDUnknownBlockType)arg1;
- (void)startCancelPeoplePickerTest:(id)arg1;
- (void)_startCancelPeoplePickerTest;
- (void)_cancelPeoplePicker;
- (void)tearDownCancelPeoplePickerTest;
- (void)startSelectContactPeoplePickerTest:(id)arg1;
- (void)_startSelectContactPeoplePickerTest;
- (void)_selectContact:(id)arg1;
- (void)tearDownSelectContactPeoplePickerTest;
- (void)startShowPeoplePickerTest:(id)arg1;
- (void)_startPeoplePickerTest;
- (void)_showPeoplePickerTest:(id)arg1;
- (void)tearDownShowPeoplePickerTest;
- (void)tearDownShowPeoplePickerTest:(id)arg1;
- (void)_dismissPeoplePickerWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dissmissComposeSheet;
- (void)startShowMessagesTest:(id)arg1;
- (void)showNextMessage;
- (void)IMCoreDeleteTopChat;
- (void)IMCoreToggleDisturb;
- (void)IMCoreSendNewCompose;
- (void)_recordAllTestsPassed:(_Bool)arg1 resultsDictionary:(id)arg2;
- (void)_recordResult:(_Bool)arg1 forKey:(id)arg2 comment:(id)arg3 resultsDictionary:(id)arg4;
- (_Bool)validateActionMenuWindowOrientationExpectedOrientation:(long long)arg1 withResultsDictionary:(id)arg2;
- (_Bool)validateRecipientSelectionControllerIsFirstResponder:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validateTranscriptPreviewCacheHasResumed:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validateTranscriptIsScrolledToBottom:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validateEntryViewIsFirstResponder:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validateTranscriptControllerIsFirstResponder:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validateIAVisExpanded:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validateBottomInsetGreaterThanIAVHeight:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validateNonzeroTranscriptInsets:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validateTranscriptVendingIAV:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validateTranscriptShouldAutorotate:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validatePhotoPickerWindowLevel:(id)arg1 expected:(double)arg2 withResultsDictionary:(id)arg3 withinSubtest:(id)arg4;
- (_Bool)validatePhotoPickerVisibility:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3 withinSubtest:(id)arg4;
- (_Bool)validateSelectedPhotoIsZoomed:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validatePhotoIsSelected:(id)arg1 expected:(_Bool)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validateAtConversationListInConversationListController:(id)arg1 previousSearchText:(id)arg2 withResultsDictionary:(id)arg3;
- (_Bool)validateNumberOfSearchResultsInConversationListController:(id)arg1 searchText:(id)arg2 expectedNumber:(long long)arg3 withResultsDictionary:(id)arg4;
- (void)_clearSearchStringWithPreviousSearchText:(id)arg1 resultsDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_searchForStringWithNoCompletion:(id)arg1;
- (void)_searchForString:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_searchForString:(id)arg1 validateExpectedSearchResults:(id)arg2 resultsDictionary:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_performNextSearchWithRemainingSearches:(id)arg1 passedSoFar:(_Bool)arg2 resultsDictionary:(id)arg3 finalCompletion:(CDUnknownBlockType)arg4;
- (void)_performNextSearchResultsClearingTestWithRemainingSearches:(id)arg1 passedSoFar:(_Bool)arg2 resultsDictionary:(id)arg3 finalCompletion:(CDUnknownBlockType)arg4;
- (void)_performNextSearchPartialFirstWithRemainingSearches:(id)arg1 passedSoFar:(_Bool)arg2 resultsDictionary:(id)arg3 finalCompletion:(CDUnknownBlockType)arg4;
- (void)_performNextTapIntoTapOutOfTestWithRemainingSearches:(id)arg1 startTime:(double)arg2 passedSoFar:(_Bool)arg3 resultsDictionary:(id)arg4 finalCompletion:(CDUnknownBlockType)arg5;
- (void)UITestSearchResultNearTop;
- (void)UITestTapIntoAndOutOfConversations;
- (void)UITestSearchForSubstringThenFullString;
- (void)UITestSearchResultsClearingAfterNotFound;
- (void)UITestSearchForStrings;
- (void)UITestCancelNewComposeLandscape;
- (void)UITestNewComposeDismissContactPicker;
- (void)newComposeDismissContactPicker:(id)arg1;
- (void)contactPickerDidHide;
- (void)perfTestPushTranscriptToAppsShelf;
- (void)_startActualAppShelfScrollingTest:(id)arg1;
- (void)perfTestPushToTranscript;
- (void)UITestSendNewComposeDraft;
- (void)UITestPresentNewComposeWithDraft;
- (void)UITestPresentNewCompose;
- (void)UITestRotateTranscriptTwiceKeyboardUp;
- (void)UITestRotateTranscriptTwice;
- (void)UITestRotateTranscriptKeyboardUp;
- (void)UITestRotateTranscript;
- (void)UITestDismissRegistration;
- (void)UITestPushTranscriptAndDetailsKeyboardUp;
- (void)UITestPushTranscriptAndDetails;
- (void)UITestPushTranscriptKeyboardDownExpandTextEntry;
- (void)UITestPushTranscriptWithDraft;
- (void)UITestLaunchToTranscript;
- (void)UITestPushTranscript;
- (void)UITestDeleteTopChat;
- (void)deleteChat:(id)arg1;
- (void)didDeleteChat;
- (void)UITestActionMenuAfterRotationInVideoTaker;
- (void)UITestShowConversationWithAlertPresented;
- (void)UITestSendAndPlayAudioMessage;
- (void)sendAudioMessage;
- (void)playAudioMessage;
- (void)deleteTopChat;
- (void)didShowTranscriptList;
- (void)didShowNewCompose;
- (void)didShowAMessage:(id)arg1;
- (void)scrollTranscript;
- (void)tapFSMIfNecessary;
- (void)scrollPseudoContacts;
- (void)showKeyboard;
- (void)showTranscriptListNotAnimated;
- (void)showTranscriptList;
- (void)showTransscriptAnimated:(_Bool)arg1;
- (void)doPushToTranscriptTestForChatIdentifierPerformanceTest:(id)arg1 testBlock:(CDUnknownBlockType)arg2;
- (void)showConversationForChatIdentifier:(id)arg1 willShowConversation:(CDUnknownBlockType)arg2 didShowConversation:(CDUnknownBlockType)arg3;
- (void)cleanupCurrentTest;
- (void)failedTest:(id)arg1;
- (void)failedTest:(id)arg1 withFailure:(id)arg2;
- (void)failedTest:(id)arg1 withFailure:(id)arg2 withResults:(id)arg3;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)finishedTest:(id)arg1 waitForCommit:(_Bool)arg2 extraResults:(id)arg3 withTeardownBlock:(CDUnknownBlockType)arg4;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (_Bool)runTestNameOrFallback:(id)arg1;
@property(nonatomic) __weak id <SMSApplicationPerformSearchProtocol> testPerformSearchDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

