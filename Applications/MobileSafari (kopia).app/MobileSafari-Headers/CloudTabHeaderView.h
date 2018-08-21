//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface CloudTabHeaderView : UIView
{
    UILabel *_label;
    UIImageView *_icon;
    UIView *_separatorView;
    long long _style;
    double _bottomPadding;
    double _paddingBetweenIconAndLabel;
    double _leftEdgeInset;
}

+ (double)defaultHeightForStyle:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)_iconSizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGRect labelFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1;

@end

