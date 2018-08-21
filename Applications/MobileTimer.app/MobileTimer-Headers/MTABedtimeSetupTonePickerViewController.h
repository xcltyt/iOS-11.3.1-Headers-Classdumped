//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MTABedtimeSetupStep.h"
#import "TKTonePickerViewControllerDelegate.h"
#import "TKVibrationPickerViewControllerDelegate.h"

@class MTSleepAlarm, NSLayoutConstraint, NSString, TKTonePickerViewController, UIImageView, UILabel, UIView;

@interface MTABedtimeSetupTonePickerViewController : UIViewController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate, MTABedtimeSetupStep>
{
    id <MTABedtimeSetupDelegate> setupDelegate;
    MTSleepAlarm *_sleepAlarm;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_tableHeaderView;
    TKTonePickerViewController *_tonePickerViewController;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_titleTrailingConstraint;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_iconTopConstraint;
    NSLayoutConstraint *_iconTitleConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *iconTitleConstraint; // @synthesize iconTitleConstraint=_iconTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconTopConstraint; // @synthesize iconTopConstraint=_iconTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint; // @synthesize titleBaselineConstraint=_titleBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleTrailingConstraint; // @synthesize titleTrailingConstraint=_titleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLeadingConstraint; // @synthesize titleLeadingConstraint=_titleLeadingConstraint;
@property(retain, nonatomic) TKTonePickerViewController *tonePickerViewController; // @synthesize tonePickerViewController=_tonePickerViewController;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MTSleepAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(nonatomic) __weak id <MTABedtimeSetupDelegate> setupDelegate; // @synthesize setupDelegate;
- (void).cxx_destruct;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2;
- (void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)next:(id)arg1;
- (void)handleContentSizeChange:(id)arg1;
- (void)resizeHeaderView;
- (void)setupConstraints;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillLayoutSubviews;
- (void)updateTitleBaselineConstraint;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

