//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface SVServerCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UILabel *_textLabel;
    NSLayoutConstraint *_imageViewWidthConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *imageViewWidthConstraint; // @synthesize imageViewWidthConstraint=_imageViewWidthConstraint;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateFonts;
- (void)awakeFromNib;
- (void)layoutSubviews;

@end

