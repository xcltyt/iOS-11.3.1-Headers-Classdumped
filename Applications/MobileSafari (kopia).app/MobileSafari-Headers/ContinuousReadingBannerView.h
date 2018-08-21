//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ContinuousReadingItem, NSString, UIImage, UIImageView, UILabel;

@interface ContinuousReadingBannerView : UIView
{
    UIView *_topHairline;
    UIView *_bottomHairline;
    ContinuousReadingItem *_continuousReadingItem;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    struct UIEdgeInsets _topHairlineInsets;
}

+ (id)makeHairlineSeparator;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct UIEdgeInsets topHairlineInsets; // @synthesize topHairlineInsets=_topHairlineInsets;
@property(readonly, retain, nonatomic) ContinuousReadingItem *continuousReadingItem; // @synthesize continuousReadingItem=_continuousReadingItem;
- (void).cxx_destruct;
- (double)_textBaseline;
- (void)_updateImage;
- (struct CGSize)_scaledImageSize;
- (void)_updateLabels;
- (id)_bottomHairline;
- (id)_topHairline;
@property(readonly, nonatomic) struct CGRect titleRect;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithContinuousReadingItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

