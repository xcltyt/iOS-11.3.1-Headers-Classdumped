//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIRemoteAlertServiceViewController.h"

#import "AUStorePreviewWebViewDelegate.h"
#import "SKStoreProductViewControllerDelegatePrivate.h"

@class NSString, PRRequest, UINavigationController;

@interface AUStoreSheetRemoteAlertViewController : SBUIRemoteAlertServiceViewController <SKStoreProductViewControllerDelegatePrivate, AUStorePreviewWebViewDelegate>
{
    UINavigationController *_navController;
    PRRequest *_request;
    NSString *_requestString;
}

- (void).cxx_destruct;
- (void)userDidDeclineRequest:(id)arg1;
- (void)userDidApproveRequest:(id)arg1;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)_dismissViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

