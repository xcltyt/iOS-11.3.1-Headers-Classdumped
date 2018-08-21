//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class HSKeylineLabel, NAFuture, NAUILayoutConstraintSet, UIImageView, UILabel;

@interface HSCameraInstructionsView : UIScrollView
{
    NAFuture *_nfcStartFuture;
    UILabel *_scanCodeTitleLabel;
    UILabel *_scanCodeBodyLabel;
    UIImageView *_scanCodeIconView;
    UILabel *_nfcTitleLabel;
    UILabel *_nfcBodyLabel;
    UIImageView *_nfcIconView;
    HSKeylineLabel *_orKeyLineLabel;
    NAUILayoutConstraintSet *_constraintSet;
}

+ (id)largeContentSizeCategories;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NAUILayoutConstraintSet *constraintSet; // @synthesize constraintSet=_constraintSet;
@property(retain, nonatomic) HSKeylineLabel *orKeyLineLabel; // @synthesize orKeyLineLabel=_orKeyLineLabel;
@property(retain, nonatomic) UIImageView *nfcIconView; // @synthesize nfcIconView=_nfcIconView;
@property(retain, nonatomic) UILabel *nfcBodyLabel; // @synthesize nfcBodyLabel=_nfcBodyLabel;
@property(retain, nonatomic) UILabel *nfcTitleLabel; // @synthesize nfcTitleLabel=_nfcTitleLabel;
@property(retain, nonatomic) UIImageView *scanCodeIconView; // @synthesize scanCodeIconView=_scanCodeIconView;
@property(retain, nonatomic) UILabel *scanCodeBodyLabel; // @synthesize scanCodeBodyLabel=_scanCodeBodyLabel;
@property(retain, nonatomic) UILabel *scanCodeTitleLabel; // @synthesize scanCodeTitleLabel=_scanCodeTitleLabel;
@property(readonly, nonatomic) NAFuture *nfcStartFuture; // @synthesize nfcStartFuture=_nfcStartFuture;
- (void).cxx_destruct;
- (void)_setupFontsForCurrentTraitCollection;
- (_Bool)_isShowingNFCInstructions;
- (_Bool)_shouldStackIcons;
- (id)_nfcCodeImageAssetForCurrentTraitEnvironment;
- (id)_scanCodeImageAssetForCurrentTraitEnvironment;
- (void)_updateScanCodeIcon;
@property(readonly, nonatomic) _Bool requiresScrolling;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)initWithNFCStartFuture:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

