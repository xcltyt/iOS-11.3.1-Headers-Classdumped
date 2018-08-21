//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SSSCropOverlayGrabberView;

@interface SSSCropOverlayCornerView : UIView
{
    unsigned long long _corner;
    SSSCropOverlayGrabberView *_topLineView;
    SSSCropOverlayGrabberView *_leftLineView;
}

+ (double)preferredDimension;
@property(readonly, nonatomic) unsigned long long corner; // @synthesize corner=_corner;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initForCorner:(unsigned long long)arg1;

@end
