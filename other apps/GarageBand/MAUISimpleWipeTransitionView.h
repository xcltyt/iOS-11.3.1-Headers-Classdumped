//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAUITransitionView.h"

@class UIImage, UIImageView, UIView;

@interface MAUISimpleWipeTransitionView : MAUITransitionView
{
    unsigned long long _currentViewAutoresizingMask;
    unsigned long long _newViewAutoresizingMask;
    UIView *_newViewSuperview;
    struct CGRect _newViewFrame;
    UIView *_currentContainerView;
    UIView *_newContainerView;
    UIImageView *_edgeImageView;
    UIImage *_edgeImage;
}

@property(retain, nonatomic) UIImage *edgeImage; // @synthesize edgeImage=_edgeImage;
- (void).cxx_destruct;
- (void)_startAnimation;
- (void)replaceSubviewWithView:(id)arg1 direction:(int)arg2 duration:(double)arg3 dimmContent:(_Bool)arg4 animationID:(id)arg5 context:(void *)arg6;
- (void)wipeCurrentViewOutInDirection:(int)arg1 newView:(id)arg2 duration:(double)arg3 dimContent:(_Bool)arg4 animationID:(id)arg5 context:(void *)arg6 shouldRasterize:(_Bool)arg7;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)animationWillStart:(id)arg1 context:(void *)arg2;
- (_Bool)_deferNewViewAddingAfterAnimation;
- (_Bool)_deferOldViewRemovalAfterAnimation;
- (void)_destroyAnimationHelperViewsAndLayers;
- (id)_getContainerViewForView:(id)arg1;

@end

