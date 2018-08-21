//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView;

@interface DragOverlayViewController : UIViewController
{
    struct CGPoint _draggingViewCenterPoint;
    UIView *_sourceView;
    UIView *_draggingView;
}

@property(readonly, nonatomic) UIView *draggingView; // @synthesize draggingView=_draggingView;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)updateInteractionWithPoint:(struct CGPoint)arg1;
- (void)beginInteractionWithSourceView:(id)arg1 startPoint:(struct CGPoint)arg2;

@end
