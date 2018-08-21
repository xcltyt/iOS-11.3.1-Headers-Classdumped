//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADClientStateDelegate.h"
#import "ADSSession_RPC.h"

@class ADClientState, NSData, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSURL, NSXPCConnection;

@interface ADSSession : NSObject <ADSSession_RPC, ADClientStateDelegate>
{
    _Bool _clientIsPrivileged;
    _Bool _hasNewsEntitlement;
    _Bool _canReceiveAdsInBackground;
    _Bool _hasMobileInstallationData;
    _Bool _actionInProgress;
    _Bool _isOpen;
    _Bool _policyEngineEnabled;
    unsigned int _state;
    NSString *_bundleID;
    NSString *_appVersion;
    NSData *_clientAuditToken;
    NSXPCConnection *_connection;
    double _connectTime;
    unsigned long long _adSpaceCount;
    long long _PID;
    NSString *_authenticationUserName;
    NSURL *_contentProxyURL;
    NSURL *_contentProxyURLConnect;
    NSString *_configVersion;
    long long _proxyType;
    ADClientState *_clientState;
    NSMutableDictionary *_adSpacesByCreativeType;
    NSMutableArray *_adSpaceControllers;
    NSString *_clientLinkedOnVersion;
    long long _clientApplicationRunState;
    NSString *_clientApplicationVersion;
    NSMutableArray *_actionsAwaitingMobileInstallationData;
    NSTimer *_closeTimer;
    double _lastPolicyEngineEventTimestamp;
    double _lastBannerEventTimestamp;
    double _lastClientStateChangeTimestamp;
    NSMutableArray *_outstandingStationEntryRecords;
    NSMutableArray *_outstandingSongBeganRecords;
    NSObject<OS_dispatch_queue> *_adSpaceControllersQueue;
    struct CGRect _currentAppSize;
}

@property(nonatomic) NSObject<OS_dispatch_queue> *adSpaceControllersQueue; // @synthesize adSpaceControllersQueue=_adSpaceControllersQueue;
@property(readonly, nonatomic) NSMutableArray *outstandingSongBeganRecords; // @synthesize outstandingSongBeganRecords=_outstandingSongBeganRecords;
@property(readonly, nonatomic) NSMutableArray *outstandingStationEntryRecords; // @synthesize outstandingStationEntryRecords=_outstandingStationEntryRecords;
@property(nonatomic) _Bool policyEngineEnabled; // @synthesize policyEngineEnabled=_policyEngineEnabled;
@property(nonatomic) double lastClientStateChangeTimestamp; // @synthesize lastClientStateChangeTimestamp=_lastClientStateChangeTimestamp;
@property(nonatomic) double lastBannerEventTimestamp; // @synthesize lastBannerEventTimestamp=_lastBannerEventTimestamp;
@property(nonatomic) double lastPolicyEngineEventTimestamp; // @synthesize lastPolicyEngineEventTimestamp=_lastPolicyEngineEventTimestamp;
@property(readonly, nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(readonly, retain, nonatomic) NSTimer *closeTimer; // @synthesize closeTimer=_closeTimer;
@property(readonly, nonatomic) _Bool actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(retain, nonatomic) NSMutableArray *actionsAwaitingMobileInstallationData; // @synthesize actionsAwaitingMobileInstallationData=_actionsAwaitingMobileInstallationData;
@property(nonatomic) _Bool hasMobileInstallationData; // @synthesize hasMobileInstallationData=_hasMobileInstallationData;
@property(copy, nonatomic) NSString *clientApplicationVersion; // @synthesize clientApplicationVersion=_clientApplicationVersion;
@property(nonatomic) long long clientApplicationRunState; // @synthesize clientApplicationRunState=_clientApplicationRunState;
@property(copy, nonatomic) NSString *clientLinkedOnVersion; // @synthesize clientLinkedOnVersion=_clientLinkedOnVersion;
@property(nonatomic) _Bool canReceiveAdsInBackground; // @synthesize canReceiveAdsInBackground=_canReceiveAdsInBackground;
@property(retain, nonatomic) NSMutableArray *adSpaceControllers; // @synthesize adSpaceControllers=_adSpaceControllers;
@property(retain, nonatomic) NSMutableDictionary *adSpacesByCreativeType; // @synthesize adSpacesByCreativeType=_adSpacesByCreativeType;
@property(retain, nonatomic) ADClientState *clientState; // @synthesize clientState=_clientState;
@property(nonatomic) struct CGRect currentAppSize; // @synthesize currentAppSize=_currentAppSize;
@property(nonatomic) long long proxyType; // @synthesize proxyType=_proxyType;
@property(copy, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(copy, nonatomic) NSURL *contentProxyURLConnect; // @synthesize contentProxyURLConnect=_contentProxyURLConnect;
@property(copy, nonatomic) NSURL *contentProxyURL; // @synthesize contentProxyURL=_contentProxyURL;
@property(readonly, nonatomic) _Bool hasNewsEntitlement; // @synthesize hasNewsEntitlement=_hasNewsEntitlement;
@property(readonly, nonatomic) _Bool clientIsPrivileged; // @synthesize clientIsPrivileged=_clientIsPrivileged;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(readonly, nonatomic) long long PID; // @synthesize PID=_PID;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) unsigned long long adSpaceCount; // @synthesize adSpaceCount=_adSpaceCount;
@property(readonly, nonatomic) double connectTime; // @synthesize connectTime=_connectTime;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSData *clientAuditToken; // @synthesize clientAuditToken=_clientAuditToken;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy) NSString *description;
- (void)_test_closeUnassignedBannerControllers;
- (void)_test_clearCurrentAdSpaceControllerAds;
- (void)_remote_captureAnalytics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_segmentDataForSignedInUser:(CDUnknownBlockType)arg1;
- (void)_remote_addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2 privateSegment:(_Bool)arg3;
- (void)_remote_creativeControllerNavigationAttemptBlockedDueToAccidentalTapForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvokedForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_signatureForRequestData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_remote_reportPrivacyAdMarkWasTappedForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_reportPrivacyAdTransparencyDidLinkOutForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_reportPrivacyAdTransparencyDidRenderTransparencyForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_reportPrivacyAdTransparencyDidDisappearForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_reportPrivacyAdTransparencyDidAppearForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_reportContentImpressionForAdSpaceWithIdenfier:(id)arg1;
- (void)_remote_actionCompletedWithSystemEvent:(int)arg1 forAdSpaceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_remote_reportSystemEvent:(int)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_bannerBeginActionForAdSpaceWithIdentifier:(id)arg1 FromFrame:(id)arg2 tapLocation:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_remote_determineActionForAdSpaceWithIdentifier:(id)arg1 ForTapAtLocation:(id)arg2 inFrame:(id)arg3 withMRAIDAction:(id)arg4 completeHandler:(CDUnknownBlockType)arg5;
- (void)_remote_reportPreRollDidStopForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_reportPreRollDidStartForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_userDidSkipPrerollForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_playbackFailedForURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_playbackFinishedForContentHash:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_playbackResumedForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_playbackPausedForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_playbackStartedForImpressionSource:(int)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_priv_adSpaceDidDisappearForAdSpaceIdentifier:(id)arg1;
- (void)_priv_adSpaceDidAppearForAdSpaceIdentifier:(id)arg1;
- (void)_priv_setServerURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_reportNativeClickEventForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_bannerRefuseActionForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_bannerCancelActionForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_setSelectedAdFrame:(id)arg1 withContentFrame:(id)arg2 atScale:(float)arg3 forAdSpaceWithIdentifier:(id)arg4;
- (void)_remote_setAdSpaceType:(int)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_sendAdspaceStatusEventForAdSpaceWithIdentifier:(id)arg1 withAdSpaceInfo:(id)arg2;
- (void)_remote_setVisibility:(long long)arg1 forAdSpaceWithIdentifier:(id)arg2 withAdSpaceInfo:(id)arg3;
- (void)_remote_setAuthenticationUserName:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_setSection:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_closeAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_reportTotalCreativeRequestCount:(long long)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_requestAdSpaceWithConfiguration:(id)arg1;
- (void)_remote_reportPrerollRequest;
- (void)_reportSubscriptionEventWithType:(long long)arg1 withQToken:(id)arg2 sourceIdentifier:(id)arg3 eventTime:(double)arg4 info:(id)arg5;
- (void)_remote_disablePolicyEngine;
- (void)_remote_enablePolicyEngine;
- (void)remoteUpdateActionViewControllerOrientation:(unsigned long long)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)remoteDismissViewControllerForAdSpaceWithIdentifier:(id)arg1;
- (void)remoteDismissViewControllerForAdSpaceWithIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)remoteActionViewControllerReadyForPresentationForAdSpaceWithIdentifier:(id)arg1;
- (void)remoteRequestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 adSpaceWithIdentifier:(id)arg3;
- (void)remoteOpenURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)remoteSetRequiresFastVisibility:(_Bool)arg1 withIdentifier:(id)arg2;
- (void)remoteCloseAdSpaceWithIdentifier:(id)arg1;
- (void)adImpressionDidReportForAdSpaceWithIdentifier:(id)arg1;
- (void)creativeWithAdSpaceIdentifier:(id)arg1 didFailWithError:(id)arg2;
- (void)adImpressionDidLoadWithPublicAttributes:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
@property(readonly, nonatomic) _Bool productionClient;
@property(readonly, nonatomic) _Bool applicationStateAllowsAds;
@property(readonly, nonatomic) _Bool clientIsVisible;
- (_Bool)_canReceiveAdsInState:(unsigned int)arg1;
- (void)adSpaceControllerDidClose:(id)arg1;
- (id)requestProperties:(struct CGRect)arg1;
- (id)adSpaceWithIndentifier:(id)arg1;
- (void)registerAdSpace:(id)arg1;
- (void)_remote_setClientLinkedOnVersion:(id)arg1;
- (void)_remote_didBecomeActive;
- (void)_remote_willResignActive;
- (void)close;
- (void)closeAllAdSpaces;
- (void)considerClosing;
@property(readonly, nonatomic) _Bool shouldClose;
- (void)_didReceiveMemoryWarning;
- (void)willLoadAdForType:(int)arg1 section:(id)arg2 serverURL:(id)arg3;
- (id)adSpaceControllerDetailsMatchingServerURL:(id)arg1 section:(id)arg2 adType:(int)arg3;
- (_Bool)_adSpaceController:(id)arg1 matchesServerURL:(id)arg2 section:(id)arg3 adType:(int)arg4;
- (void)closeAdSpace:(id)arg1;
- (void)reassignAdSpaceControllersForCreativeType:(int)arg1;
- (id)_sortedAdSpacesForCreativeType:(int)arg1;
- (long long)_countOfControllersForCreativeType:(int)arg1;
- (id)_unassignedAdSpaceControllerForCreativeType:(int)arg1;
- (id)adSpaceForImpressionIdentifier:(id)arg1 forCreativetype:(int)arg2;
- (void)clientStateDidChange:(id)arg1;
- (void)_lookupMobileInstallationData;
- (void)_handleMobileInstallationDataVersion:(id)arg1 runState:(int)arg2;
- (void)_abortForStalledDetermineRoamingStatus;
- (void)_abortForStallediTunesStorefrontLookup;
- (void)_abortForStalledMobileInstallationLookup;
- (void)_handleRequestPropertiesAcquisitionTimeout;
- (id)initWithConnection:(id)arg1 bundleID:(id)arg2 version:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

