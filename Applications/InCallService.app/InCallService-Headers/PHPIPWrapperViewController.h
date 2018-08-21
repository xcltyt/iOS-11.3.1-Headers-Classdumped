//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PGPictureInPictureViewController.h"

@class NSString;

@interface PHPIPWrapperViewController : UIViewController <PGPictureInPictureViewController>
{
    _Bool _pipIsBeingResized;
    UIViewController *_wrappedViewController;
    id <PHPIPWrapperViewControllerDelegateProtocol> _delegate;
    CDUnknownBlockType _didAnimatePictureInPictureStopCompletionBlock;
}

@property _Bool pipIsBeingResized; // @synthesize pipIsBeingResized=_pipIsBeingResized;
@property(copy, nonatomic) CDUnknownBlockType didAnimatePictureInPictureStopCompletionBlock; // @synthesize didAnimatePictureInPictureStopCompletionBlock=_didAnimatePictureInPictureStopCompletionBlock;
@property __weak id <PHPIPWrapperViewControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain) UIViewController *wrappedViewController; // @synthesize wrappedViewController=_wrappedViewController;
- (void).cxx_destruct;
- (void)viewDidResize;
- (void)viewWillResize;
- (void)dealloc;
- (void)actionButtonTapped;
- (struct CGSize)preferredContentSize;
- (void)didAnimatePictureInPictureStop;
- (void)willAnimatePictureInPictureStop;
- (void)didAnimatePictureInPictureStart;
- (void)willAnimatePictureInPictureStart;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldShowAlternateActionButtonImage;
@property(readonly, nonatomic) _Bool shouldShowLoadingIndicator;
@property(readonly) Class superclass;

@end
