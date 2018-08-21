//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HSSetupStep.h"

@class HMAccessoryCategory, HSTitleAndDescriptionView, HUColoredButton, LSApplicationProxy, NAFuture, NSString, UIImageView;

@interface HSSetupNonTrustedSourceViewController : UIViewController <HSSetupStep>
{
    id <HSSetupStepDelegate> _delegate;
    LSApplicationProxy *_appProxy;
    NSString *_bundleID;
    HMAccessoryCategory *_category;
    HUColoredButton *_button;
    UIImageView *_sourceAppIcon;
    HSTitleAndDescriptionView *_promptView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) HSTitleAndDescriptionView *promptView; // @synthesize promptView=_promptView;
@property(retain, nonatomic) UIImageView *sourceAppIcon; // @synthesize sourceAppIcon=_sourceAppIcon;
@property(retain, nonatomic) HUColoredButton *button; // @synthesize button=_button;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) LSApplicationProxy *appProxy; // @synthesize appProxy=_appProxy;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long setupState;
- (int)_iconVariantForScale:(double)arg1;
- (id)_createSourceAppIconView;
- (void)_buttonTapped:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)viewDidLoad;
- (id)_sanitizedCategoryName;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithBundleID:(id)arg1 category:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly) Class superclass;

@end

