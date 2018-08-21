//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAGFilterSelectionPreviewView.h"

#import "UIScrollViewDelegate.h"

@class CABackdropLayer, CALayer, MAGFilterSetChangeSubscription, MAGNamedFilterSet, NSArray, NSString, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface MAGStandardFilterSelectionPreviewView : MAGFilterSelectionPreviewView <UIScrollViewDelegate>
{
    _Bool _dragInProgress;
    MAGNamedFilterSet *_transitioningFilterSet;
    CABackdropLayer *_transitioningFilterLayer;
    CALayer *_imageLayer;
    UIScrollView *_scrollView;
    UIView *_filterContainer;
    UIView *_imageContainer;
    NSArray *_backdrops;
    MAGFilterSetChangeSubscription *_filterSetChangeSubscription;
    MAGNamedFilterSet *_currentBestSetForDrag;
}

@property(retain, nonatomic) MAGNamedFilterSet *currentBestSetForDrag; // @synthesize currentBestSetForDrag=_currentBestSetForDrag;
@property(nonatomic) _Bool dragInProgress; // @synthesize dragInProgress=_dragInProgress;
@property(retain, nonatomic) MAGFilterSetChangeSubscription *filterSetChangeSubscription; // @synthesize filterSetChangeSubscription=_filterSetChangeSubscription;
@property(retain, nonatomic) NSArray *backdrops; // @synthesize backdrops=_backdrops;
@property(retain, nonatomic) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(retain, nonatomic) UIView *filterContainer; // @synthesize filterContainer=_filterContainer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) CABackdropLayer *transitioningFilterLayer; // @synthesize transitioningFilterLayer=_transitioningFilterLayer;
@property(retain, nonatomic) MAGNamedFilterSet *transitioningFilterSet; // @synthesize transitioningFilterSet=_transitioningFilterSet;
- (void).cxx_destruct;
- (id)currentFilterSetForUnitTesting;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sizeTransitionDidEnd;
- (void)sizeTransitionWillBeginToSize:(struct CGSize)arg1;
- (void)informDelegateOfScrollWithEndingContentOffset:(struct CGPoint)arg1;
- (id)bestFilterSetForContentOffset:(struct CGPoint)arg1;
- (void)centerFilterSet:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)scrollViewContentSize;
- (void)positionBackdrops;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
