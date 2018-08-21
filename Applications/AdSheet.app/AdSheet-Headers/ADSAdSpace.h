//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADSAdSpaceController, ADSSession, NSSet, NSString, NSURL;

@interface ADSAdSpace : NSObject
{
    ADSSession *_session;
    struct __IOSurface *_drawingSurface;
    _Bool _shouldNotCycle;
    _Bool _setupComplete;
    _Bool _hasSentVisibleWithoutContentError;
    _Bool _hasLoadedAdOrSentError;
    _Bool _didSendAdSpaceEvent;
    _Bool _closed;
    _Bool _didCloseFromRemoteEvent;
    int _creativeType;
    double _creationTimestamp;
    double _lastVisibleTimestamp;
    ADSAdSpaceController *_adSpaceController;
    NSURL *_serverURL;
    NSString *_section;
    NSString *_authenticationUserName;
    NSSet *_contextTags;
    NSString *_contextJSON;
    long long _visibility;
    long long _lastErrorCodeSent;
    unsigned long long _reUseCount;
    long long _options;
    NSString *_identifier;
    struct CGRect _frame;
}

@property(nonatomic) _Bool didCloseFromRemoteEvent; // @synthesize didCloseFromRemoteEvent=_didCloseFromRemoteEvent;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long reUseCount; // @synthesize reUseCount=_reUseCount;
@property(nonatomic) long long lastErrorCodeSent; // @synthesize lastErrorCodeSent=_lastErrorCodeSent;
@property(nonatomic) _Bool didSendAdSpaceEvent; // @synthesize didSendAdSpaceEvent=_didSendAdSpaceEvent;
@property(nonatomic) _Bool hasLoadedAdOrSentError; // @synthesize hasLoadedAdOrSentError=_hasLoadedAdOrSentError;
@property(nonatomic) _Bool hasSentVisibleWithoutContentError; // @synthesize hasSentVisibleWithoutContentError=_hasSentVisibleWithoutContentError;
@property(nonatomic) long long visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) NSString *contextJSON; // @synthesize contextJSON=_contextJSON;
@property(copy, nonatomic) NSSet *contextTags; // @synthesize contextTags=_contextTags;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) ADSAdSpaceController *adSpaceController; // @synthesize adSpaceController=_adSpaceController;
@property(nonatomic) double lastVisibleTimestamp; // @synthesize lastVisibleTimestamp=_lastVisibleTimestamp;
@property(readonly, nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(nonatomic) _Bool setupComplete; // @synthesize setupComplete=_setupComplete;
@property(nonatomic) _Bool shouldNotCycle; // @synthesize shouldNotCycle=_shouldNotCycle;
@property(readonly, nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
@property(readonly, nonatomic) _Bool requiresFastVisibilityTestOnly;
@property(readonly, nonatomic) _Bool allowsTransitionWithoutAnimation;
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)_remote_reportPrivacyAdTransparencyDidLinkOut;
- (void)_remote_reportPrivacyAdTransparencyDidDisappear;
- (void)_remote_reportPrivacyAdTransparencyDidRenderTransparency;
- (void)_remote_reportPrivacyAdTransparencyDidAppear;
- (void)_remote_reportPrivacyAdMarkWasTapped;
- (void)_priv_adSpaceDidDisappear;
- (void)_priv_adSpaceDidAppear;
- (void)_remote_playbackFailedForURL:(id)arg1;
- (void)_remote_playbackFinishedForContentHash:(id)arg1;
- (void)_remote_playbackResumed;
- (void)_remote_playbackPaused;
- (void)_remote_playbackStartedForImpressionSource:(int)arg1;
- (void)_remote_reportCreativeControllerNavigationAttemptBlockedDueToAccidentalTap;
- (void)_remote_reportCreativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvoked;
- (void)_remote_reportContentImpression;
- (void)_remote_actionCompletedWithSystemEvent:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_remote_reportSystemEvent:(int)arg1;
- (void)_remote_userDidSkipPreroll;
- (void)_remote_reportPreRollDidStop;
- (void)_remote_reportPreRollDidStart;
- (void)_remote_interstitialCreativeWasDismissed;
- (void)_remote_interstitialRemovedFromSuperview;
- (void)_remote_reportNativeClickEvent;
- (void)_remote_bannerCancelAction;
- (void)_remote_bannerRefuseAction;
- (void)_remote_bannerBeginActionFromFrame:(id)arg1 tapLocation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_remote_determineActionForTapAtLocation:(id)arg1 inFrame:(id)arg2 withMRAIDAction:(id)arg3 completeHandler:(CDUnknownBlockType)arg4;
- (void)_remote_setShouldNotCycle:(_Bool)arg1;
- (void)_remote_setAdSpaceType:(int)arg1;
- (void)_remote_setVisibility:(long long)arg1;
- (void)_remote_setAuthenticationUserName:(id)arg1;
- (void)_remote_setSection:(id)arg1;
- (void)_priv_cycleImpressionImmediately;
- (void)_priv_setServerURL:(id)arg1;
- (void)_remote_setIdentifier:(id)arg1;
- (void)_remote_close;
- (void)_remote_reportTotalRequestCount:(long long)arg1;
- (void)recordSelectedAdFrame:(struct CGRect)arg1 andContentFrame:(struct CGRect)arg2 atScale:(float)arg3;
@property(readonly, nonatomic) _Bool shouldSendAdSpaceEvent;
@property(readonly, nonatomic) _Bool shouldDismissWithoutTransition;
@property(readonly, nonatomic) _Bool shouldCycleAfterAction;
@property(readonly, nonatomic) _Bool policyEngineManagesLoading;
@property(readonly, nonatomic) _Bool excludedFromControllerPool;
@property(nonatomic) __weak ADSSession *session;
- (id)description;
- (void)close;
- (id)initWithConfiguration:(id)arg1 andSession:(id)arg2;
- (void)dealloc;

@end

