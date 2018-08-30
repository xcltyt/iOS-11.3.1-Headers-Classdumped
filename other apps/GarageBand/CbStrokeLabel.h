//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor, UIImageView;

@interface CbStrokeLabel : UILabel
{
    UIColor *strokeColor;
    _Bool pressed;
    struct CGRect pressedFrame;
    struct CGRect normalFrame;
    double pressedAlpha;
    struct CGSize normalShadowOffset;
    struct CGSize pressedShadowOffset;
    UIImageView *backgroundImageView;
    _Bool wantsBackgroundImageView;
    _Bool _lowercase;
    _Bool _capitalize;
    UIColor *_pressedTextColor;
    struct CGSize _restrainSize;
}

@property(nonatomic) struct CGSize restrainSize; // @synthesize restrainSize=_restrainSize;
@property(nonatomic) _Bool capitalize; // @synthesize capitalize=_capitalize;
@property(nonatomic) _Bool lowercase; // @synthesize lowercase=_lowercase;
@property(retain, nonatomic) UIColor *pressedTextColor; // @synthesize pressedTextColor=_pressedTextColor;
@property(nonatomic) _Bool wantsBackgroundImageView; // @synthesize wantsBackgroundImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView;
@property(nonatomic) _Bool pressed; // @synthesize pressed;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor;
@property(nonatomic) struct CGRect pressedFrame; // @synthesize pressedFrame;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateLayerBoundsFromRestrainSize;
- (void)setAssetSet:(id)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;

@end

