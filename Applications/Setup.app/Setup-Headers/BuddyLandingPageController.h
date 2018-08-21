//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BFFFlowItem.h"

@class NSString, UIActivityIndicatorView, UILabel, UIView;

@interface BuddyLandingPageController : UIViewController <BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;
    UIView *_containerView;
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
}

+ (id)cloudConfigSkipKey;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)loadActualView;
- (void)done;
- (void)setDelegate:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

