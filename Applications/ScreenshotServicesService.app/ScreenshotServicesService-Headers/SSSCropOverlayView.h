//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface SSSCropOverlayView : UIView
{
    NSArray *_cornerViews;
    NSArray *_grabberViews;
    NSArray *_lineViews;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_viewsToHitTest;
- (struct SSSCropOverlayGrabPosition)grabPositionForLocation:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (struct CGRect)_frameForGrabberAtEdge:(unsigned long long)arg1 inSize:(struct CGSize)arg2 dimension:(double)arg3;
- (struct CGRect)_frameForLineAtEdge:(unsigned long long)arg1 inSize:(struct CGSize)arg2 dimension:(double)arg3;
- (struct CGRect)_frameForViewInCorner:(unsigned long long)arg1 inSize:(struct CGSize)arg2 cornerSize:(struct CGSize)arg3;
- (id)_orderedRectEdges;
- (id)_orderedRectCorners;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

