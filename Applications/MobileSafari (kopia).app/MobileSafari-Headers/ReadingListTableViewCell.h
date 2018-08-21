//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VibrantTableViewCell.h"

@class NSString, UILabel, VibrantLabelView, _SFSiteIconView;

@interface ReadingListTableViewCell : VibrantTableViewCell
{
    VibrantLabelView *_detailTextLabel;
    UILabel *_siteNameLabel;
    UILabel *_textLabel;
    _Bool _wantsSelectedAppearance;
    long long _dragState;
    _SFSiteIconView *_imageView;
    _Bool _hasImage;
    int _bookmarkID;
    NSString *_siteName;
    NSString *_previewText;
    NSString *_fetchingStatusText;
}

+ (double)minimumCellHeight;
@property(copy, nonatomic) NSString *fetchingStatusText; // @synthesize fetchingStatusText=_fetchingStatusText;
@property(nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(copy, nonatomic) NSString *previewText; // @synthesize previewText=_previewText;
@property(copy, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
@property(readonly, nonatomic) int bookmarkID; // @synthesize bookmarkID=_bookmarkID;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateSelectedAnimated:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dragStateDidChange:(long long)arg1;
- (void)_setOpaque:(_Bool)arg1 forSubview:(id)arg2;
- (void)_setFetchingStatusTextForBookmark:(id)arg1;
- (void)setBookmark:(id)arg1 isArchiving:(_Bool)arg2;
- (void)setBookmark:(id)arg1;
- (void)displayThumbnailIconForBookmark:(id)arg1 synchronously:(_Bool)arg2;
- (void)setReadingListIcon:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_createImageViewIfNeeded;
- (void)_initializeAutoLayoutConstraints;
- (id)_siteNameFont;
- (id)_detailLabelFont;
- (id)_titleLabelFont;
- (id)_scaledFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
- (void)dealloc;
- (void)_updateVibrantEffect;
- (void)setUsesVibrantEffect:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

