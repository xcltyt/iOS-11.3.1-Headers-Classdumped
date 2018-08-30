//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAUITransitionView.h"

#import "CAAnimationDelegate-Protocol.h"

@class CALayer, NSString;

@interface MAUICubeTransitionView : MAUITransitionView <CAAnimationDelegate>
{
    CALayer *_transformedLayer;
}

- (void).cxx_destruct;
- (void)_startAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (_Bool)_deferNewViewAddingAfterAnimation;
- (_Bool)_deferOldViewRemovalAfterAnimation;
- (void)_moveFrom:(long long)arg1 duration:(float)arg2;
- (void)_destroyAnimationHelperViewsAndLayers;
- (void)_addRotationLayerForCurrentViewAndNewViewWithDirection:(long long)arg1 dimmContent:(_Bool)arg2;
- (id)_getSurfaceLayer:(struct CATransform3D)arg1 forView:(id)arg2 dimmContent:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

