/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class NSMutableArray, UIView, NSString;

@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

	BOOL _transitionIsInFlight;
	NSMutableArray* _alongsideAnimations;
	NSMutableArray* _alongsideCompletions;
	UIView* _containerView;

}

@property (assign,nonatomic) UIView * containerView;                               //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL initiallyInteractive; 
@property (nonatomic,readonly) BOOL isInterruptible; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double completionVelocity; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
-(id)viewForKey:(id)arg1 ;
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(BOOL)isInteractive;
-(double)percentComplete;
-(void)_runAlongsideCompletionsAndClearAlongsideAnimations;
-(long long)presentationStyle;
-(BOOL)isRotating;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runAlongsideAnimations;
-(void)setContainerView:(UIView *)arg1 ;
-(void)_runAlongsideCompletionsAfterCommit;
-(BOOL)isInterruptible;
-(BOOL)_animateAlongsideTransitionInView:(id)arg1 systemCompletion:(BOOL)arg2 animation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isCancelled;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_mainContext;
-(double)transitionDuration;
-(long long)completionCurve;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(CGAffineTransform)targetTransform;
-(BOOL)isAnimated;
-(BOOL)initiallyInteractive;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(id)_alongsideAnimations:(BOOL)arg1 ;
-(id)_alongsideCompletions:(BOOL)arg1 ;
-(void)_applyBlocks:(id)arg1 releaseBlocks:(/*^block*/id)arg2 ;
-(void)_runAlongsideCompletions;
-(double)completionVelocity;
@end
