//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray, NSMutableSet;
@protocol MAUIMultipleSelectionGestureRecognizerDelegate;

@interface MAUIMultipleSelectionGestureRecognizer : UIGestureRecognizer
{
    NSMutableSet *_currentTouches;
    NSMutableArray *_touchesForNextAction;
    struct CGPoint _firstTouchStartPoint;
    unsigned long long _totalTouchSum;
    _Bool _isSingleTouch;
    double _firstTouchTimeStamp;
    double _totalRecogitionTime;
    double _initialRecognitionDelayTime;
    struct CGPoint _translationSinceFirstTouch;
    id _tempUserInfo;
    _Bool _failsOnSingleFingerForceTouch;
}

@property(nonatomic) _Bool failsOnSingleFingerForceTouch; // @synthesize failsOnSingleFingerForceTouch=_failsOnSingleFingerForceTouch;
@property(readonly, nonatomic) struct CGPoint translationSinceFirstTouch; // @synthesize translationSinceFirstTouch=_translationSinceFirstTouch;
@property(nonatomic) double initialRecognitionDelayTime; // @synthesize initialRecognitionDelayTime=_initialRecognitionDelayTime;
@property(retain, nonatomic) id tempUserInfo; // @synthesize tempUserInfo=_tempUserInfo;
- (void).cxx_destruct;
- (void)startFailOnLongPressModeWithLongPressTimeInterval:(double)arg1;
- (void)_myLongClickFailTimerHandling;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_myDelayedBeginSelectionHandling;
- (void)_checkIfNeedsToFailDueToSingleForceTouch:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setState:(long long)arg1;
- (void)_endSingleTouchMode;
- (void)_cancelSingleTouchMode;
- (void)_beginSingleTouchMode:(id)arg1;
- (void)clearNewSelectionTouches;
- (id)getNewSelectionTouchAtIndex:(unsigned long long)arg1;
- (struct CGPoint)locationOfNewSelectionTouch:(unsigned long long)arg1 inView:(id)arg2;
- (long long)newNumberOfSelectionTouches;
- (long long)totalNumberOfSelectionTouches;
- (long long)totalTouchesSinceBeganRecognizing;
- (double)totalRecogitionTime;
- (double)firstTouchTimeStamp;
- (void)reset;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
@property(nonatomic) id <MAUIMultipleSelectionGestureRecognizerDelegate> delegate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

