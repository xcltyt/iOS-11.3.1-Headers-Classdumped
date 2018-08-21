//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BuddyRoundedRectImageView, NSString, UIButton, UIColor, UILabel;

@interface BuddyAppleIDTableHeaderView : UIView
{
    double _calculatedHeight;
    BuddyRoundedRectImageView *_iconView;
    _Bool _topIconHasRoundedCorners;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    double _linkButtonTopPadding;
    UIButton *_linkButton;
    NSString *_topIconName;
    UIColor *_topIconTintColor;
    struct CGSize _iconSize;
}

+ (id)defaultDetailTextAttributes;
+ (id)defaultTitleTextAttributes;
+ (void)initialize;
@property(retain, nonatomic) UIColor *topIconTintColor; // @synthesize topIconTintColor=_topIconTintColor;
@property(nonatomic) _Bool topIconHasRoundedCorners; // @synthesize topIconHasRoundedCorners=_topIconHasRoundedCorners;
@property(copy, nonatomic) NSString *topIconName; // @synthesize topIconName=_topIconName;
@property(readonly, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) double linkButtonTopPadding; // @synthesize linkButtonTopPadding=_linkButtonTopPadding;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_getHeight:(double *)arg1 forWidth:(double)arg2 shouldLayoutViews:(_Bool)arg3;
@property(copy, nonatomic) NSString *linkButtonTitle;
@property(nonatomic) double rightPadding;
@property(nonatomic) double leftPadding;
@property(nonatomic) double bottomPadding;
- (id)initWithFrame:(struct CGRect)arg1;

@end

