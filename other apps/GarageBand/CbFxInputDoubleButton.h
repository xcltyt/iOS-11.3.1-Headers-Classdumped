//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "MAUIForwardTouchGestureRecognizerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MAUIColoredBackgroundButton, MAUIForwardTouchGestureRecognizer, NSString, UIColor, UISlider, UITouch, UIView;

@interface CbFxInputDoubleButton : UIButton <UIGestureRecognizerDelegate, MAUIForwardTouchGestureRecognizerDelegate>
{
    _Bool _alreadyAddedProxyObserver;
    float _leftValue;
    float _rightValue;
    UISlider *_xParamControlProxy;
    UIButton *_touchDownControlProxy;
    UIColor *_normalColor;
    UIColor *_selectedColor;
    UIColor *_highlightedColor;
    UIView *_seperatorView;
    UITouch *_latestTouch;
    MAUIColoredBackgroundButton *_leftButton;
    MAUIColoredBackgroundButton *_rightButton;
    unsigned long long _selectState;
    MAUIForwardTouchGestureRecognizer *_forwardTouchGestureRecogizer;
}

@property(retain, nonatomic) MAUIForwardTouchGestureRecognizer *forwardTouchGestureRecogizer; // @synthesize forwardTouchGestureRecogizer=_forwardTouchGestureRecogizer;
@property(nonatomic) _Bool alreadyAddedProxyObserver; // @synthesize alreadyAddedProxyObserver=_alreadyAddedProxyObserver;
@property(nonatomic) unsigned long long selectState; // @synthesize selectState=_selectState;
@property(readonly, nonatomic) MAUIColoredBackgroundButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) MAUIColoredBackgroundButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UITouch *latestTouch; // @synthesize latestTouch=_latestTouch;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(nonatomic) float rightValue; // @synthesize rightValue=_rightValue;
@property(nonatomic) float leftValue; // @synthesize leftValue=_leftValue;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(readonly, nonatomic) UIButton *touchDownControlProxy; // @synthesize touchDownControlProxy=_touchDownControlProxy;
@property(readonly, nonatomic) UISlider *xParamControlProxy; // @synthesize xParamControlProxy=_xParamControlProxy;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addRemoveInternalProxyObserver:(_Bool)arg1;
- (id)touchesInView:(id)arg1;
- (id)latestNotEndedTouchOfTouches:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mauiTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)mauiTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)mauiTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)mauiTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)selectButtonForPoint:(struct CGPoint)arg1;
- (void)highlightButtonsForState:(unsigned long long)arg1;
- (void)changeSelectState:(unsigned long long)arg1;
- (void)flashPadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelTouches;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

