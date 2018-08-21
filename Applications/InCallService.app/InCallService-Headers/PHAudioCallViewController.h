//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHCallViewController.h"

#import "MFMessageComposeViewControllerDelegate.h"
#import "PHAudioCallControlsViewControllerDelegate.h"
#import "PHAudioRoutingAlertDataSource.h"
#import "PHAudioRoutingAlertDelegate.h"
#import "TURouteControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class CALayer, NSLayoutConstraint, NSString, PHAudioCallControlsViewController, PHAudioRoutingAlertController, PHCallParticipantsViewController, PHInCallKeypadViewController, TUCall, UIImageView, UIView, UIVisualEffectView;

@interface PHAudioCallViewController : PHCallViewController <MFMessageComposeViewControllerDelegate, TURouteControllerDelegate, PHAudioRoutingAlertDataSource, PHAudioRoutingAlertDelegate, UIPopoverPresentationControllerDelegate, PHAudioCallControlsViewControllerDelegate>
{
    _Bool _participantsViewControllersShouldIgnoreUpdates;
    unsigned short _middleViewState;
    UIView *_currentMiddleView;
    PHCallParticipantsViewController *_callParticipantsViewController;
    PHCallParticipantsViewController *_callWaitingParticipantsViewController;
    NSLayoutConstraint *_participantsViewBaselineConstraint;
    PHAudioCallControlsViewController *_buttonsViewController;
    PHInCallKeypadViewController *_keypadViewController;
    UIView *_middleSizingView;
    TUCall *_callForBackgroundImage;
    UIImageView *_backgroundImageView;
    UIVisualEffectView *_backgroundEffectView;
    CALayer *_backgroundImageFilterLayer;
    PHAudioRoutingAlertController *_routeListController;
}

@property(nonatomic) _Bool participantsViewControllersShouldIgnoreUpdates; // @synthesize participantsViewControllersShouldIgnoreUpdates=_participantsViewControllersShouldIgnoreUpdates;
@property(retain, nonatomic) PHAudioRoutingAlertController *routeListController; // @synthesize routeListController=_routeListController;
@property(retain, nonatomic) CALayer *backgroundImageFilterLayer; // @synthesize backgroundImageFilterLayer=_backgroundImageFilterLayer;
@property(retain, nonatomic) UIVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) TUCall *callForBackgroundImage; // @synthesize callForBackgroundImage=_callForBackgroundImage;
@property(retain) UIView *middleSizingView; // @synthesize middleSizingView=_middleSizingView;
@property(retain, nonatomic) PHInCallKeypadViewController *keypadViewController; // @synthesize keypadViewController=_keypadViewController;
@property(retain, nonatomic) PHAudioCallControlsViewController *buttonsViewController; // @synthesize buttonsViewController=_buttonsViewController;
@property(retain) NSLayoutConstraint *participantsViewBaselineConstraint; // @synthesize participantsViewBaselineConstraint=_participantsViewBaselineConstraint;
@property(retain) PHCallParticipantsViewController *callWaitingParticipantsViewController; // @synthesize callWaitingParticipantsViewController=_callWaitingParticipantsViewController;
@property(retain) PHCallParticipantsViewController *callParticipantsViewController; // @synthesize callParticipantsViewController=_callParticipantsViewController;
@property(nonatomic) unsigned short middleViewState; // @synthesize middleViewState=_middleViewState;
@property(retain) UIView *currentMiddleView; // @synthesize currentMiddleView=_currentMiddleView;
- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)stopSuppressionOfSTKAlerts;
- (void)startSuppressionOfSTKAlerts;
- (void)routesChangedForRouteController:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)audioRoutingAlertControllerDidDismiss:(id)arg1;
- (void)audioRoutingAlertController:(id)arg1 didSelectRoute:(id)arg2;
- (id)hideActionTitleForAudioRoutingAlertController:(id)arg1;
- (id)routesForAudioRoutingAlertController:(id)arg1;
- (void)dismissAudioRoutingDeviceListAnimated:(_Bool)arg1;
- (void)dismissAudioRoutingDeviceList;
- (void)revealAudioRoutingDeviceListAnimated:(_Bool)arg1;
- (void)revealAudioRoutingDeviceListAnimatedIfNeeded;
- (void)cancelAutodismissTimer;
- (void)startAutodismissRoutingTimer;
- (void)setViewsHiddenForAudioRoutes:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hardwareButtonEventNotification:(id)arg1;
- (unsigned long long)desiredButtonEvents;
- (_Bool)allowsBanners;
- (_Bool)allowsMenuButtonDismissal;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)_leaveMessage;
- (long long)bottomBarCallStateInBar:(id)arg1;
- (id)customizedTitleForItemInBar:(id)arg1 withActionType:(long long)arg2;
- (_Bool)shouldShowUseRTT;
- (_Bool)shouldShowAnswerRTT;
- (_Bool)shouldShowHardPauseNumbers;
- (void)bottomBarActionPerformed:(long long)arg1 withCompletionState:(long long)arg2 fromBar:(id)arg3;
- (void)sliderActionFromBar:(id)arg1 slidToProportion:(float)arg2;
- (void)setMiddleViewState:(unsigned short)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setMiddleViewState:(unsigned short)arg1 animated:(_Bool)arg2;
- (id)frontmostCallProviderIconForAudioCallControlsViewController:(id)arg1;
- (void)audioCallControlsViewControllerRequestedPunchOutPresentation:(id)arg1;
- (void)audioCallControlsViewControllerRequestedVideoPresentation:(id)arg1;
- (void)audioCallControlsViewControllerRequestedAudioRoutesPresentation:(id)arg1;
- (void)audioCallControlsViewControllerRequestedAddCallPresentation:(id)arg1 forView:(id)arg2;
- (void)audioCallControlsViewControllerRequestedContactsPresentation:(id)arg1 forView:(id)arg2;
- (void)audioCallControlsViewControllerRequestedKeypadPresentationForFieldMode:(id)arg1;
- (void)audioCallControlsViewControllerRequestedKeypadPresentation:(id)arg1;
- (long long)bottomBarStateForCallWaitingCall;
- (void)setShowsCallWaitingParticipantView:(_Bool)arg1;
- (id)isolatedCall;
- (void)setBackgroundImage:(id)arg1;
- (id)contactImageDataForCall:(id)arg1 withContactStore:(id)arg2;
- (_Bool)setCallForBackgroundImage:(id)arg1 animated:(_Bool)arg2 blurred:(_Bool)arg3;
@property(readonly, nonatomic, getter=isShowingBackgroundImage) _Bool showingBackgroundImage;
@property(readonly, nonatomic) _Bool canShowBackgroundImage;
- (void)updateHardPauseDigitsState;
- (void)setCurrentState:(unsigned short)arg1 animated:(_Bool)arg2;
- (void)setCurrentState:(unsigned short)arg1;
- (void)updateCurrentState;
- (void)handleTUCallTTYTypeChangedNotification:(id)arg1;
- (void)handleTUCallSupportsTTYWithVoiceChangedNotification:(id)arg1;
- (void)callOnHoldChangedNotification:(id)arg1;
- (void)hardPauseDigitsStateChangedNotification:(id)arg1;
- (void)callContinuityStateChangedNotification:(id)arg1;
- (void)callCenterCallStatusChangedNotification:(id)arg1;
- (void)wantsHoldMusicChangedNotification:(id)arg1;
- (void)releaseDismissalAssertion;
- (id)dismissalAssertionReason;
- (_Bool)needsDismissalAssertion;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_applyParticipantViewContstraintsToParticipantView:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)_testing_didTransitionToIncomingRingingCallState:(id)arg1;
- (void)_testing_didTransitionToEndingCallState;
- (void)_testing_didTransitionToIdleCallState;
- (void)_testing_didTransitionToActiveCallState:(id)arg1;
- (void)_testing_finishedAnimatingToActiveCallState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

