//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SFFormAutoFillControllerDelegate.h"
#import "UINavigationBarDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"
#import "_WKInputDelegate.h"
#import "_WebSheetDownloadDelegate.h"

@class NSDictionary, NSMutableArray, NSString, NSTimer, NSURL, UIAlertController, UIBarButtonItem, UIImageView, UILabel, UINavigationBar, UINavigationItem, WBUSheetController, WKWebView, WebSheetDownloadManager, WebSheetViewController, WebUIAuthenticationManager, _SFFormAutoFillController;

@interface WebSheetView : UIView <UINavigationBarDelegate, SFFormAutoFillControllerDelegate, _WebSheetDownloadDelegate, WKNavigationDelegate, _WKInputDelegate, WKUIDelegate>
{
    WKWebView *_webView;
    _SFFormAutoFillController *_autoFillController;
    UIView *_headerBackgroundView;
    UINavigationBar *_headerView;
    UINavigationItem *_navigationItem;
    UIBarButtonItem *_backButtonItem;
    UIBarButtonItem *_forwardButtonItem;
    UIBarButtonItem *_cancelDoneBarButtonItem;
    UIBarButtonItem *_backForwardButton;
    UIView *_addressView;
    UIImageView *_lockIconView;
    UILabel *_addressLabel;
    UILabel *_ssidLabel;
    double _statusBarHeight;
    NSMutableArray *_alerts;
    WBUSheetController *_sheetController;
    struct _ProbeContext _probeContext;
    long long _orientation;
    WebUIAuthenticationManager *_authenticationManager;
    WebSheetDownloadManager *_downloadManager;
    _Bool _inDoneState;
    int _springboardPID;
    UIAlertController *_stayConnectedAlertController;
    NSTimer *_captiveProbeDispatchTimer;
    _Bool _shouldShowStayConnectedOptions;
    _Bool _mediaPlaybackEnabled;
    _Bool _hasEVCert;
    _Bool _isCertTrustDone;
    WebSheetViewController *_webSheetViewController;
    NSURL *_currentURL;
    NSDictionary *_proxyConfiguration;
}

@property(nonatomic) _Bool isCertTrustDone; // @synthesize isCertTrustDone=_isCertTrustDone;
@property(nonatomic) _Bool hasEVCert; // @synthesize hasEVCert=_hasEVCert;
@property(copy, nonatomic) NSDictionary *proxyConfiguration; // @synthesize proxyConfiguration=_proxyConfiguration;
@property(nonatomic) _Bool mediaPlaybackEnabled; // @synthesize mediaPlaybackEnabled=_mediaPlaybackEnabled;
@property(nonatomic) _Bool shouldShowStayConnectedOptions; // @synthesize shouldShowStayConnectedOptions=_shouldShowStayConnectedOptions;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) WebSheetViewController *webSheetViewController; // @synthesize webSheetViewController=_webSheetViewController;
- (void)_startCaptiveProbeDispatchTimer;
- (void)_stopCaptiveProbeDispatchTimer;
- (void)_captiveProbeDispatchTimerDidFire:(id)arg1;
- (id)formAutoFillControllerURLForFormAutoFill:(id)arg1;
- (_Bool)formAutoFillControllerShouldDisableAutoFill:(id)arg1;
- (_Bool)formAutoFillControllerCanPrefillForm:(id)arg1;
- (void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;
- (void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
- (void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;
- (void)_webView:(id)arg1 didStartInputSession:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (id)sheetController:(id)arg1 viewControllerForAlert:(id)arg2;
- (void)sheetController:(id)arg1 performAction:(int)arg2 forAlert:(id)arg3;
- (void)_continueAfterCertificateAlertWithContext:(id)arg1;
- (void)_loadRequest:(id)arg1 inFrame:(id)arg2;
- (void)sheetControllerDidHideSheet:(id)arg1;
- (void)sheetControllerDidShowSheet:(id)arg1;
- (void)downloadDidFail:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)_showProfileInstallAlert;
- (id)containerViewForAuthenticationPanel;
- (void)cancelFromAuthenticationManager:(id)arg1 forChallenge:(id)arg2;
- (void)logInFromAuthenticationManager:(id)arg1 withCredential:(id)arg2 forChallenge:(id)arg3;
- (void)_showGenericDownloadAlert;
- (void)_showProfileDownloadAlert;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (id)_titleForError:(id)arg1;
- (id)_specializedMessageForError:(id)arg1;
- (_Bool)_handleCertificateError:(struct __SecTrust *)arg1 newhost:(id)arg2;
- (_Bool)isGreenTea;
- (void)addAlert:(id)arg1;
- (id)_sheetController;
- (void)_dismissWebSheetWithCaptiveWebSheetResult:(int)arg1;
- (void)doneTapped;
- (void)cancelTapped;
- (void)_forwardButtonPressed;
- (void)_backButtonPressed;
- (void)_updateBackForwardButtons;
- (double)_promptLabelFontLineHeight;
- (id)_promptLabelFont;
- (_Bool)_shouldShowPromptLabels;
- (_Bool)_isSecureAddress;
- (void)_updateAddress;
- (id)_evCertLockIconImage;
- (id)_evCertColor;
- (id)_lockIconImage;
- (id)_lockIconImageWithTintColor:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_updateTitle;
- (void)setSSID:(struct __CFString *)arg1;
- (void)setCaptiveNetworkCookie:(unsigned int)arg1;
- (void)setWebViewWithInterfaceName:(struct __CFString *)arg1;
- (void)updateToDoneButton;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
