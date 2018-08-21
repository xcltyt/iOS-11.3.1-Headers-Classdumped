/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSFluidProgressControllerDelegate, WBSFluidProgressControllerWindowDelegate;
@interface WBSFluidProgressController : NSObject {

	id<WBSFluidProgressControllerDelegate> _delegate;
	id<WBSFluidProgressControllerWindowDelegate> _windowDelegate;

}

@property (__weak) id<WBSFluidProgressControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<WBSFluidProgressControllerWindowDelegate> windowDelegate;              //@synthesize windowDelegate=_windowDelegate - In the implementation block
-(id<WBSFluidProgressControllerDelegate>)delegate;
-(void)setDelegate:(id<WBSFluidProgressControllerDelegate>)arg1 ;
-(void)setWindowDelegate:(id<WBSFluidProgressControllerWindowDelegate>)arg1 ;
-(id<WBSFluidProgressControllerWindowDelegate>)windowDelegate;
-(void)_updateFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)startRocketEffectWithProgressStateSource:(id)arg1 ;
-(void)frontmostTabDidChange;
-(void)animationStepCompleted:(id)arg1 ;
-(void)startFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)updateFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)finishFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)cancelFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(BOOL)arg2 ;
@end
