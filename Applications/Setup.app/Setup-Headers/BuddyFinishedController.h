//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BuddyLandingPageController.h"

@class NSLayoutConstraint, UIButton, UILabel;

@interface BuddyFinishedController : BuddyLandingPageController
{
    UILabel *_titleLabel;
    UIButton *_actionButton;
    NSLayoutConstraint *_titleVerticalConstraint;
    NSLayoutConstraint *_buttonVerticalConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *buttonVerticalConstraint; // @synthesize buttonVerticalConstraint=_buttonVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleVerticalConstraint; // @synthesize titleVerticalConstraint=_titleVerticalConstraint;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)done;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setVerticalConstraintsConstantsForSize:(struct CGSize)arg1;
- (void)loadActualView;

@end
