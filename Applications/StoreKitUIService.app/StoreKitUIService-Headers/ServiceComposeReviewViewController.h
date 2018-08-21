//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SKUIComposeReviewDelegate.h"
#import "SUClientInterfaceDelegate.h"
#import "ServiceAlertDelegate.h"

@class NSString, SKUIComposeReviewViewController, ServiceAlertController;

@interface ServiceComposeReviewViewController : UIViewController <ServiceAlertDelegate, SKUIComposeReviewDelegate, SUClientInterfaceDelegate>
{
    ServiceAlertController *_alertController;
    _Bool _dismissAfterDialog;
    SKUIComposeReviewViewController *_underlyingViewController;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void).cxx_destruct;
- (void)_presentAlertForDialog:(id)arg1;
- (void)_dismissWithError:(id)arg1;
- (id)_clientViewControllerProxy;
- (void)clientKeyboardFrameChanged:(struct CGRect)arg1;
- (void)loadReviewWithURL:(id)arg1;
- (void)finishStarRatingPromptWithRating:(id)arg1;
- (void)composeReviewViewControllerDidSubmit:(id)arg1;
- (void)composeReviewViewControllerDidCancel:(id)arg1;
- (_Bool)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;
- (void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2;
- (void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2;
- (void)alertController:(id)arg1 alertDidFinishWithButton:(id)arg2;
- (void)_willAppearInRemoteViewController;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

