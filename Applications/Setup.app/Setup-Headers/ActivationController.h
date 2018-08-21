//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ActivationFailurePageDelegate.h"
#import "BFFFlowItem.h"
#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"
#import "RemoteUIControllerDelegate.h"

@class ActivationFailurePage, BuddyActivationEngine, NSData, NSMutableArray, NSObject<OS_xpc_object>, NSString, NSTimer, NSURL, RUIPage, RemoteUIController, SecureBackup, UIActivityIndicatorView, UILabel;

@interface ActivationController : UIViewController <NSURLSessionDelegate, NSURLSessionDataDelegate, RemoteUIControllerDelegate, ActivationFailurePageDelegate, BFFFlowItem>
{
    BuddyActivationEngine *_engine;
    RemoteUIController *_remoteUIController;
    NSMutableArray *_objectModels;
    RUIPage *_loadingPage;
    SecureBackup *_secureBackup;
    NSString *_escrowSessionKey;
    NSData *_srpInitResponse;
    NSString *_accountDSID;
    UIViewController *_spinningViewController;
    void *_otaAssertion;
    int _activationState;
    UILabel *_statusLabel;
    UILabel *_infoLabel;
    UIActivityIndicatorView *_spinner;
    _Bool _displayTimerElapsed;
    _Bool _cellNetworkTimerElapsed;
    _Bool _nonSilentActivation;
    NSTimer *_displayTimer;
    NSTimer *_cellNetworkTimer;
    NSTimer *_ticketAcceptedTimer;
    NSTimer *_waitingForBasebandTimer;
    int _waitingForBasebandFailureCount;
    ActivationFailurePage *_activationFailurePage;
    _Bool _connectionFailed;
    _Bool _connectionOTA;
    NSURL *_agreeURL;
    NSURL *_disagreeURL;
    _Bool _activationControllerDismissed;
    _Bool _appIsSuspended;
    NSTimer *_activationLockTimer;
    RUIPage *_activationLockPage;
    NSObject<OS_xpc_object> *_demoConnection;
    _Bool _cdmaSelectionActivation;
    id <ActivationControllerDelegate> _delegate;
    NSURL *_activationURL;
    NSString *_contentType;
}

+ (id)cloudConfigSkipKey;
+ (_Bool)supportsCellularActivation;
+ (_Bool)controllerNeedsToRun;
+ (_Bool)isBricked;
@property(readonly, nonatomic) _Bool cdmaSelectionActivation; // @synthesize cdmaSelectionActivation=_cdmaSelectionActivation;
@property(retain, nonatomic) NSURL *disagreeURL; // @synthesize disagreeURL=_disagreeURL;
@property(retain, nonatomic) NSURL *agreeURL; // @synthesize agreeURL=_agreeURL;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSURL *activationURL; // @synthesize activationURL=_activationURL;
@property(nonatomic) __weak id <ActivationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_userAgreedToTCs:(_Bool)arg1;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)_setHandlerForPasscode;
- (void)_activateWithPasscode:(id)arg1 fromObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)_handleEscrowResponse:(id)arg1;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)tryAgainOnRemoteUIDialog;
- (void)disagreeToRemoteUIDialog;
- (void)agreeToRemoteUIDialog;
- (void)activationFailurePagePopped:(id)arg1;
- (void)activationFailurePagePressedWifi:(id)arg1;
- (void)activationFailurePagePressedRetry:(id)arg1;
- (void)_stopActivationLockExpirationTimer;
- (void)_startActivationLockExpirationTimerForPage:(id)arg1;
- (void)_updateStatusLabel;
- (void)_dismissRemoteUI;
- (void)_sendAck;
- (void)_activate;
- (void)_systemTimeUpdated;
- (void)_sanitizeSystemTime;
- (void)_waitingForBasebandTimeout;
- (void)_clearWaitingForBasebandTimer;
- (void)_checkBasebandStatusBeforeActivation;
- (void)_startActivation;
- (void)_tryActivateWithOptions:(id)arg1 requestMutator:(CDUnknownBlockType)arg2;
- (void)_getSRPInitNonceRequestOptionsCompletion:(CDUnknownBlockType)arg1;
- (void)_handleFailureWithError:(id)arg1;
- (void)_handleActivationData:(id)arg1 responseHeaders:(id)arg2 baseURL:(id)arg3;
- (void)startRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopSpinningForIdentifier:(id)arg1;
- (void)startSpinningWithIdentifier:(id)arg1;
- (void)_cleanup;
- (void)_displayTimerTimeout;
- (void)didBecomeActive:(id)arg1;
- (void)didResignActive:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_activateIfNecessary;
- (void)_activationStateChanged;
- (void)_ticketAcceptedDidTimeout;
- (void)_clearTicketAcceptedTimer;
- (void)startOver;
- (void)_checkActivationFailIfBricked:(_Bool)arg1;
- (void)_clearDisplayTimer;
- (void)back:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)shouldSuppressExtendedInitializationActivityIndicator;
- (void)_enterState:(int)arg1;
- (void)_fetchCloudConfig;
- (void)_tryFetchCloudConfigNote:(id)arg1;
- (_Bool)_hasDeKOTAFlagInActivationRecord;
- (void)_cellNetworkTimerTimeout;
- (void)_clearCellNetworkTimer;
- (void)_stopWaitingForCellNetwork;
- (void)_startWaitingForCellNetwork;
- (void)_attemptDismiss;
- (void)_removePagesFromNavStack;
- (id)_demodConnection;
- (void)_releaseOTAAssertion;
- (id)_carrierID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
