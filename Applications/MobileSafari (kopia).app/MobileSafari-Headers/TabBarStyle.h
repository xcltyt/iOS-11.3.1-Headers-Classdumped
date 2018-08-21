//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAFilter, UIColor, UIImage;

@interface TabBarStyle : NSObject
{
    long long _barStyle;
    UIColor *_mediaCaptureDeviceIconColor;
    CAFilter *_tintFilter;
    double _overlayAlpha;
    double _tintAlpha;
    UIColor *_backgroundColor;
    UIColor *_itemTitleColor;
    double _itemActiveTitleAlpha;
    double _itemActiveTitleOverlayAlpha;
    CAFilter *_itemActiveTitleCompositingFilter;
    double _itemInactiveTitleAlpha;
    double _itemInactiveTitleOverlayAlpha;
    CAFilter *_itemInactiveTitleCompositingFilter;
    double _itemBorderAlpha;
    double _itemBorderOverlayAlpha;
    double _itemCloseButtonAlpha;
    UIImage *_itemCloseButtonImage;
    UIImage *_itemCloseButtonOverlayImage;
    CAFilter *_itemCloseButtonOverlayCompositingFilter;
    CAFilter *_itemForegroundCompositingFilter;
    CAFilter *_itemOverlayCompositingFilter;
}

+ (id)_closeButtonWithColor:(id)arg1;
+ (id)styleForToolbarTintStyle:(unsigned long long)arg1;
+ (id)privateBrowsingStyle;
+ (id)normalStyle;
@property(readonly, nonatomic) CAFilter *itemOverlayCompositingFilter; // @synthesize itemOverlayCompositingFilter=_itemOverlayCompositingFilter;
@property(readonly, nonatomic) CAFilter *itemForegroundCompositingFilter; // @synthesize itemForegroundCompositingFilter=_itemForegroundCompositingFilter;
@property(readonly, nonatomic) CAFilter *itemCloseButtonOverlayCompositingFilter; // @synthesize itemCloseButtonOverlayCompositingFilter=_itemCloseButtonOverlayCompositingFilter;
@property(readonly, nonatomic) UIImage *itemCloseButtonOverlayImage; // @synthesize itemCloseButtonOverlayImage=_itemCloseButtonOverlayImage;
@property(readonly, nonatomic) UIImage *itemCloseButtonImage; // @synthesize itemCloseButtonImage=_itemCloseButtonImage;
@property(readonly, nonatomic) double itemCloseButtonAlpha; // @synthesize itemCloseButtonAlpha=_itemCloseButtonAlpha;
@property(readonly, nonatomic) double itemBorderOverlayAlpha; // @synthesize itemBorderOverlayAlpha=_itemBorderOverlayAlpha;
@property(readonly, nonatomic) double itemBorderAlpha; // @synthesize itemBorderAlpha=_itemBorderAlpha;
@property(readonly, nonatomic) CAFilter *itemInactiveTitleCompositingFilter; // @synthesize itemInactiveTitleCompositingFilter=_itemInactiveTitleCompositingFilter;
@property(readonly, nonatomic) double itemInactiveTitleOverlayAlpha; // @synthesize itemInactiveTitleOverlayAlpha=_itemInactiveTitleOverlayAlpha;
@property(readonly, nonatomic) double itemInactiveTitleAlpha; // @synthesize itemInactiveTitleAlpha=_itemInactiveTitleAlpha;
@property(readonly, nonatomic) CAFilter *itemActiveTitleCompositingFilter; // @synthesize itemActiveTitleCompositingFilter=_itemActiveTitleCompositingFilter;
@property(readonly, nonatomic) double itemActiveTitleOverlayAlpha; // @synthesize itemActiveTitleOverlayAlpha=_itemActiveTitleOverlayAlpha;
@property(readonly, nonatomic) double itemActiveTitleAlpha; // @synthesize itemActiveTitleAlpha=_itemActiveTitleAlpha;
@property(readonly, nonatomic) UIColor *itemTitleColor; // @synthesize itemTitleColor=_itemTitleColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double tintAlpha; // @synthesize tintAlpha=_tintAlpha;
@property(readonly, nonatomic) double overlayAlpha; // @synthesize overlayAlpha=_overlayAlpha;
@property(readonly, nonatomic) CAFilter *tintFilter; // @synthesize tintFilter=_tintFilter;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)imageForMediaCaptureDeviceIcon:(unsigned long long)arg1;
- (id)init;

@end

