//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIDropInteraction;

@interface DropHitTestingView : UIView
{
    UIDropInteraction *_dropInteraction;
    id <DropHitTestingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <DropHitTestingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

