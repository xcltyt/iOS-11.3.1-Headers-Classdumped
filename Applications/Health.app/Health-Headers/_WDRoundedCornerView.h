//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface _WDRoundedCornerView : UIView
{
    UIColor *_backgroundColor;
    double _cornerRadius;
    struct NSDirectionalEdgeInsets _edgeInsets;
    UIView *_contentView;
}

@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
@property(nonatomic) struct NSDirectionalEdgeInsets edgeInsets;
- (void)layoutSubviews;
- (id)initWithContentView:(id)arg1;

@end

