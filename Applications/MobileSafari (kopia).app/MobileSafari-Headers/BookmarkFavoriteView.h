//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImage, UIView, VibrantLabelView, WebBookmark, _SFSiteIconView;

@interface BookmarkFavoriteView : UIButton
{
    _SFSiteIconView *_iconView;
    UIView *_iconTouchHighlightView;
    VibrantLabelView *_titleLabel;
    _Bool _grabbed;
    _Bool _usesVibrantEffect;
    id <BookmarkFavoriteViewCalloutDelegate> _calloutDelegate;
    WebBookmark *_bookmark;
    long long _iconSize;
    double _spaceBetweenIconAndLabelBaseline;
}

+ (id)defaultFontTextStyle;
+ (struct CGRect)iconRectForBounds:(struct CGRect)arg1 iconSize:(long long)arg2;
+ (double)lastBaselineOffsetForIconSize:(long long)arg1;
+ (double)firstBaselineOffsetForIconSize:(long long)arg1;
+ (id)_fontForTitleLabel;
+ (void)_getTitleLabelHeight:(double *)arg1 firstBaselineOffset:(double *)arg2 lastBaselineOffset:(double *)arg3 forIconSize:(long long)arg4;
+ (struct CGSize)sizeForBookmarkFavoritesIconSize:(long long)arg1;
@property(nonatomic) double spaceBetweenIconAndLabelBaseline; // @synthesize spaceBetweenIconAndLabelBaseline=_spaceBetweenIconAndLabelBaseline;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) _Bool usesVibrantEffect; // @synthesize usesVibrantEffect=_usesVibrantEffect;
@property(nonatomic, getter=isGrabbed) _Bool grabbed; // @synthesize grabbed=_grabbed;
@property(retain, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(nonatomic) __weak id <BookmarkFavoriteViewCalloutDelegate> calloutDelegate; // @synthesize calloutDelegate=_calloutDelegate;
- (void).cxx_destruct;
- (void)_deleteFavorite:(id)arg1;
- (void)_editFavorite:(id)arg1;
- (void)showCallout;
- (_Bool)canBecomeFirstResponder;
- (struct CGPoint)iconCenter;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setGrabbed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_unhighlight:(id)arg1;
- (void)_highlight:(id)arg1;
@property(readonly, nonatomic) UIImage *displayedBookmarkIcon;
- (void)layoutSubviews;
- (id)init;

@end
