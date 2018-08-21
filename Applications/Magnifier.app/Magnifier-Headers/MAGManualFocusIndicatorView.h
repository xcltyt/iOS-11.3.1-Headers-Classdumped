//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAGFocusIndicatorView.h"

@class MAGManualFocusIndicatorReticleView;

__attribute__((visibility("hidden")))
@interface MAGManualFocusIndicatorView : MAGFocusIndicatorView
{
    MAGManualFocusIndicatorReticleView *_reticle;
}

@property(retain, nonatomic) MAGManualFocusIndicatorReticleView *reticle; // @synthesize reticle=_reticle;
- (void).cxx_destruct;
- (void)animateToHidden;
- (void)animateToShown;
- (double)baseAnimationDuration;
- (void)willBeHidden;
- (void)willBeShown;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end
