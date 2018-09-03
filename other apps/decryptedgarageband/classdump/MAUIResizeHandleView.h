//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class EcTimer, MAUIMultipleSelectionGestureRecognizer, MAUIScrollView, NSString, UIImage, UIPanGestureRecognizer;
@protocol MAUIResizeHandleDelegate;

@interface MAUIResizeHandleView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _ignore;
    _Bool _ourRecognizerBegan;
    _Bool _didSendAction;
    MAUIScrollView *_scrollView;
    struct CGPoint _startScrollContentOffset;
    UIPanGestureRecognizer *_panRecognizer;
    _Bool _isZoomMode;
    EcTimer *_longClickTimer;
    struct CGPoint _touchOffsetForCurrentSession;
    struct CGPoint _initialTouchLocationInWindow;
    _Bool _adjustFrameOnAction;
    _Bool _externalZoomAnimationRunning;
    _Bool _bodyHandleIsDefaultIfTooSmall;
    _Bool _lastPanActionOriginallyFellBelowMinSize;
    _Bool _verticalDirectionalLockActive;
    _Bool _horizontalDirectionalLockActive;
    id _representedObject;
    id <MAUIResizeHandleDelegate> _delegate;
    UIImage *_normalImage;
    UIImage *_activeImage;
    UIImage *_normalTooSmallImage;
    UIImage *_activeTooSmallImage;
    long long _state;
    double _extendHandleSizesAtScreenEdgesBy;
    double _extendHandleSizesAtScreenEdgesThreshold;
    long long _currentHandle;
    MAUIMultipleSelectionGestureRecognizer *_multipleSelectionRecognizer;
    struct CGPoint _targetViewCoordinateOffset;
    struct CGSize _handleMinSize;
    struct CGSize _directionalLockThresholds;
    struct CGRect _objectInset;
    struct CGRect _handleSizes;
}

+ (id)addHandleViewToView:(id)arg1 forObject:(id)arg2 withFrame:(struct CGRect)arg3 inView:(id)arg4 assetSetPath:(id)arg5;
+ (id)handleViewForObjectWithFrame:(struct CGRect)arg1 assetSetPath:(id)arg2;
@property(nonatomic) MAUIMultipleSelectionGestureRecognizer *multipleSelectionRecognizer; // @synthesize multipleSelectionRecognizer=_multipleSelectionRecognizer;
@property(readonly, nonatomic) _Bool horizontalDirectionalLockActive; // @synthesize horizontalDirectionalLockActive=_horizontalDirectionalLockActive;
@property(readonly, nonatomic) _Bool verticalDirectionalLockActive; // @synthesize verticalDirectionalLockActive=_verticalDirectionalLockActive;
@property(nonatomic) struct CGSize directionalLockThresholds; // @synthesize directionalLockThresholds=_directionalLockThresholds;
@property(readonly, nonatomic) long long currentHandle; // @synthesize currentHandle=_currentHandle;
@property(nonatomic) _Bool lastPanActionOriginallyFellBelowMinSize; // @synthesize lastPanActionOriginallyFellBelowMinSize=_lastPanActionOriginallyFellBelowMinSize;
@property(nonatomic) _Bool bodyHandleIsDefaultIfTooSmall; // @synthesize bodyHandleIsDefaultIfTooSmall=_bodyHandleIsDefaultIfTooSmall;
@property(nonatomic) _Bool externalZoomAnimationRunning; // @synthesize externalZoomAnimationRunning=_externalZoomAnimationRunning;
@property(nonatomic) double extendHandleSizesAtScreenEdgesThreshold; // @synthesize extendHandleSizesAtScreenEdgesThreshold=_extendHandleSizesAtScreenEdgesThreshold;
@property(nonatomic) double extendHandleSizesAtScreenEdgesBy; // @synthesize extendHandleSizesAtScreenEdgesBy=_extendHandleSizesAtScreenEdgesBy;
@property(nonatomic) struct CGSize handleMinSize; // @synthesize handleMinSize=_handleMinSize;
@property(nonatomic) struct CGRect handleSizes; // @synthesize handleSizes=_handleSizes;
@property(nonatomic) _Bool adjustFrameOnAction; // @synthesize adjustFrameOnAction=_adjustFrameOnAction;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIImage *activeTooSmallImage; // @synthesize activeTooSmallImage=_activeTooSmallImage;
@property(retain, nonatomic) UIImage *normalTooSmallImage; // @synthesize normalTooSmallImage=_normalTooSmallImage;
@property(retain, nonatomic) UIImage *activeImage; // @synthesize activeImage=_activeImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(nonatomic) struct CGPoint targetViewCoordinateOffset; // @synthesize targetViewCoordinateOffset=_targetViewCoordinateOffset;
@property(nonatomic) struct CGRect objectInset; // @synthesize objectInset=_objectInset;
@property(nonatomic) id <MAUIResizeHandleDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)setAssetSetPath:(id)arg1;
- (void)setAssetSet:(id)arg1;
- (void)_updateHandleContent;
- (void)_updateContentAlpha;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)checkBeginForNewlyCreatedHandleWithFingerStillDownAtPoint:(struct CGPoint)arg1 forceToBodyHandle:(_Bool)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_touchesBeganAtPoint:(struct CGPoint)arg1 forceToBodyHandle:(_Bool)arg2;
- (void)_handleScrollViewDidScrollNotification:(id)arg1;
- (void)externalPanRecognizerAction:(id)arg1;
- (void)_longPressAction:(id)arg1;
- (void)_panAction:(id)arg1;
- (void)cancelActionForExternalPanRecognizer:(id)arg1;
- (void)cancelAction;
- (void)_panAction:(id)arg1 isAutoScroll:(_Bool)arg2;
- (void)_tapAction:(id)arg1;
- (void)_doEnd:(_Bool)arg1 panRecognizer:(id)arg2;
- (_Bool)_checkBeginWithPoint:(struct CGPoint)arg1 forceToBodyHandle:(_Bool)arg2;
- (long long)_getEffectiveResizeHandleForLoc:(struct CGPoint)arg1 andEffectiveHandleSizes:(struct CGRect)arg2;
- (_Bool)isTooSmall;
- (_Bool)_hasDirectionalLock;
- (void)_sendActionForNewFrame:(struct CGRect)arg1 withHandle:(long long)arg2;
- (void)updateFrameAndTargetViewCoordinateOffsetForObjectView:(id)arg1;
- (void)updateFrameWithObjectFrame:(struct CGRect)arg1;
- (struct CGRect)getObjectMinFrameDueToHandleMinSizeForHandle:(long long)arg1;
@property(readonly, nonatomic) struct CGRect objectFrame;
- (struct CGRect)_objectFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)_getFrameForObjectFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
