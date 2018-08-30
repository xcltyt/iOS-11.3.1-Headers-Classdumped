//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbSIIMFretboardView.h"

@class CbContinuousControllerStrip, CbPipaFretboardController, CbPipaStrumStrip, NSArray, UIImage, UIView;

@interface CbPipaFretboardView : CbSIIMFretboardView
{
    CbContinuousControllerStrip *_lunzhiStrip;
    CbPipaStrumStrip *_strumStrip;
    UIImage *_lightFretMarker;
    UIImage *_darkFretMarker;
    NSArray *_fretInfos;
    NSArray *_scaleTonicDimensions;
    UIView *_fretsView;
}

@property(retain, nonatomic) UIView *fretsView; // @synthesize fretsView=_fretsView;
@property(retain, nonatomic) NSArray *scaleTonicDimensions; // @synthesize scaleTonicDimensions=_scaleTonicDimensions;
@property(retain, nonatomic) NSArray *fretInfos; // @synthesize fretInfos=_fretInfos;
@property(retain, nonatomic) UIImage *darkFretMarker; // @synthesize darkFretMarker=_darkFretMarker;
@property(retain, nonatomic) UIImage *lightFretMarker; // @synthesize lightFretMarker=_lightFretMarker;
@property(readonly, nonatomic) CbPipaStrumStrip *strumStrip; // @synthesize strumStrip=_strumStrip;
@property(readonly, nonatomic) CbContinuousControllerStrip *lunzhiStrip; // @synthesize lunzhiStrip=_lunzhiStrip;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setStringsViewDimensions;
- (void)_handleLunzhi:(id)arg1;
- (void)_updateFretMarkers;
- (struct CGRect)_frameForFretImageAtIndex:(int)arg1 cumulativeFretDistance:(double)arg2;
- (double)_distanceForFretAtIndex:(int)arg1 stringWidth:(double)arg2 constantFretDistance:(double)arg3 cumulativeFretDistance:(double)arg4;
- (struct CGRect)_stringFrameAtIndex:(int)arg1 forActiveAreaSize:(struct CGSize)arg2;
- (long long)_contentModeForFretImageViews;
- (id)_fretImageAtIndex:(int)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) CbPipaFretboardController *controller; // @dynamic controller;

@end

