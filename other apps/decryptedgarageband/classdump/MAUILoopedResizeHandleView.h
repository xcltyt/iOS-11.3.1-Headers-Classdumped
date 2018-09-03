//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAUIResizeHandleView.h"

@class NSArray, NSMutableArray, UIImage;

@interface MAUILoopedResizeHandleView : MAUIResizeHandleView
{
    UIImage *_normalImages[4];
    UIImage *_activeImages[4];
    NSMutableArray *_partTypes;
    struct CGRect _imageContentStretch[4];
    long long _loopPartsCount;
    NSArray *_partWidths;
}

+ (id)addHandleViewToView:(id)arg1 forObject:(id)arg2 withFrame:(struct CGRect)arg3 inView:(id)arg4 assetSetPath:(id)arg5 loopPartsCount:(long long)arg6 partWidths:(id)arg7;
+ (id)handleViewForObjectWithFrame:(struct CGRect)arg1 assetSetPath:(id)arg2 loopPartsCount:(long long)arg3 partWidths:(id)arg4;
@property(retain, nonatomic) NSArray *partWidths; // @synthesize partWidths=_partWidths;
@property(nonatomic) long long loopPartsCount; // @synthesize loopPartsCount=_loopPartsCount;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateLoopSubviews:(_Bool)arg1;
- (void)_addSubviewWithType:(int)arg1;
- (void)_updateHandleContent;
- (void)_updateSubviewContent:(id)arg1 type:(int)arg2;
- (id)_getLoopFrames;
- (void)setAssetSet:(id)arg1;
- (void)_extractImageContentStretchFromAssetSet:(id)arg1 elementKey:(id)arg2 elementIndex:(long long)arg3;
- (void)_extractImagesFromAssetSet:(id)arg1 prefix:(id)arg2 pArray:(id *)arg3;
- (void)setActiveImage:(id)arg1;
- (void)setNormalImage:(id)arg1;
- (void)commonInit;

@end
