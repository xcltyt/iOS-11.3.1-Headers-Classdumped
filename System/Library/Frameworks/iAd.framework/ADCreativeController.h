/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/ADWebProcessDelegate.h>
#import <libobjc.A.dylib/_WKInputDelegate.h>

@protocol ADWebProcessProxy, ADCreativeControllerDelegate;
@class ADWebView, NSString, ADAdImpressionPublicAttributes, _WKRemoteObjectInterface, ADWebViewGestureRecognizer;

@interface ADCreativeController : NSObject <WKNavigationDelegate, ADWebProcessDelegate, _WKInputDelegate> {

	id<ADWebProcessProxy> _webProcessProxy;
	id<ADCreativeControllerDelegate> _delegate;
	BOOL _contentVisible;
	BOOL _tapWasRecognized;
	BOOL _isVideoAd;
	BOOL _isExpandedCreativePresented;
	BOOL _browserContextControllerDidLoad;
	BOOL _shouldBlockNavigation;
	ADWebView* _creativeView;
	NSString* _creativeIdentifier;
	ADAdImpressionPublicAttributes* _publicAttributes;
	/*^block*/id _loadCompletion;
	_WKRemoteObjectInterface* _remoteObjectInterface;
	NSString* _adSpaceIdentifier;
	ADWebViewGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) ADAdImpressionPublicAttributes * publicAttributes;              //@synthesize publicAttributes=_publicAttributes - In the implementation block
@property (nonatomic,copy) id loadCompletion;                                                //@synthesize loadCompletion=_loadCompletion - In the implementation block
@property (nonatomic,retain) _WKRemoteObjectInterface * remoteObjectInterface;               //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (nonatomic,copy) NSString * creativeIdentifier;                                    //@synthesize creativeIdentifier=_creativeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * adSpaceIdentifier;                                     //@synthesize adSpaceIdentifier=_adSpaceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isExpandedCreativePresented;                               //@synthesize isExpandedCreativePresented=_isExpandedCreativePresented - In the implementation block
@property (assign,nonatomic) BOOL browserContextControllerDidLoad;                           //@synthesize browserContextControllerDidLoad=_browserContextControllerDidLoad - In the implementation block
@property (nonatomic,retain) ADWebViewGestureRecognizer * gestureRecognizer;                 //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL shouldBlockNavigation;                                     //@synthesize shouldBlockNavigation=_shouldBlockNavigation - In the implementation block
@property (nonatomic,readonly) ADWebView * creativeView;                                     //@synthesize creativeView=_creativeView - In the implementation block
@property (assign,getter=isContentVisible,nonatomic) BOOL contentVisible;                    //@synthesize contentVisible=_contentVisible - In the implementation block
@property (assign,nonatomic,__weak) id<ADCreativeControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL tapWasRecognized;                                          //@synthesize tapWasRecognized=_tapWasRecognized - In the implementation block
@property (assign,nonatomic) BOOL isVideoAd;                                                 //@synthesize isVideoAd=_isVideoAd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ADCreativeControllerDelegate>)delegate;
-(void)setDelegate:(id<ADCreativeControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)setGestureRecognizer:(ADWebViewGestureRecognizer *)arg1 ;
-(ADWebViewGestureRecognizer *)gestureRecognizer;
-(void)setRemoteObjectInterface:(_WKRemoteObjectInterface *)arg1 ;
-(void)setContentVisible:(BOOL)arg1 ;
-(_WKRemoteObjectInterface *)remoteObjectInterface;
-(void)_tapRecognized:(id)arg1 ;
-(BOOL)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)setLoadCompletion:(id)arg1 ;
-(id)loadCompletion;
-(NSString *)creativeIdentifier;
-(void)unregisterExportedObjectInterface;
-(ADWebView *)creativeView;
-(CGRect)frameForCreativeView;
-(void)resetVideoPlaytime;
-(void)adSpaceActionViewControllerWillDismiss:(id)arg1 ;
-(void)adSpaceActionViewControllerWillPresent:(id)arg1 ;
-(void)setIsVideoAd:(BOOL)arg1 ;
-(void)loadAdImpression:(id)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldBlockNavigation;
-(BOOL)isVideoAd;
-(void)webProcessPlugInDidCreateBrowserContextController;
-(void)webProcessPlugInWillDestroyBrowserContextController;
-(void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
-(void)webProcessMRAIDJSODidCallClose;
-(void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(id)arg2 ;
-(void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1 ;
-(void)webProcessMRAIDJSODidCallOpen:(id)arg1 ;
-(void)webProcessVideoAdJSOGetVideoInfo:(/*^block*/id)arg1 ;
-(void)webProcessVideoAdJSOCreativeViewLoaded;
-(void)webProcessVideoAdJSODidCallPlayStarted:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallPlayResumed:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallPlayPaused:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallPlayProgressed:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallPlayCompletedWithVolume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallViewabilityChanged:(BOOL)arg1 playTime:(float)arg2 volume:(float)arg3 ;
-(void)webProcessVideoAdJSODidCallVolumeChanged:(float)arg1 playTime:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallAudioMuted:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallAudioUnmuted:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallMoreInfoTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallVideoTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallSkipAdTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallFullScreenTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallExitFullScreenTapped:(float)arg1 volume:(float)arg2 ;
-(void)_updateWebProcessProxyVisibility;
-(BOOL)isExpandedCreativePresented;
-(void)setCreativeIdentifier:(NSString *)arg1 ;
-(ADAdImpressionPublicAttributes *)publicAttributes;
-(id)_incrementCreativeIdentifier;
-(id)_customUserAgentString;
-(void)setShouldBlockNavigation:(BOOL)arg1 ;
-(void)setTapWasRecognized:(BOOL)arg1 ;
-(BOOL)tapWasRecognized;
-(void)_resetGestureFlags;
-(void)setPublicAttributes:(ADAdImpressionPublicAttributes *)arg1 ;
-(void)setAdSpaceIdentifier:(NSString *)arg1 ;
-(id)_userAgentForUserAgentString:(id)arg1 ;
-(void)setIsExpandedCreativePresented:(BOOL)arg1 ;
-(BOOL)isContentVisible;
-(BOOL)browserContextControllerDidLoad;
-(void)_callLoadCompletionWithError:(id)arg1 ;
-(BOOL)_navigationIsBlocked;
-(void)_navigationAttemptBlockedDueToAccidentalTapForMRAIDActionType:(long long)arg1 ;
-(void)_tapGestureTimerDidExpireForRequestedActionType:(long long)arg1 ;
-(void)_requestOpenURL:(id)arg1 ;
-(NSString *)adSpaceIdentifier;
-(void)setBrowserContextControllerDidLoad:(BOOL)arg1 ;
-(BOOL)contentVisible;
@end
