/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoAccessoryItemDisplayModeTransitioning.h>

@class NSMutableArray, UIViewPropertyAnimator, NSString;

@interface SXVideoAccessoryItemDisplayModeTransitionCoordinator : NSObject <SXVideoAccessoryItemDisplayModeTransitioning> {

	BOOL _animated;
	NSMutableArray* _alongsideBlocks;
	NSMutableArray* _completionBlocks;
	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,readonly) BOOL animated;                                  //@synthesize animated=_animated - In the implementation block
@property (nonatomic,readonly) NSMutableArray * alongsideBlocks;               //@synthesize alongsideBlocks=_alongsideBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animator;                //@synthesize animator=_animator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)completionBlocks;
-(BOOL)animated;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)cancelTransition;
-(UIViewPropertyAnimator *)animator;
-(void)animateAlongsideTransition:(/*^block*/id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)animateWithContext:(id)arg1 ;
-(NSMutableArray *)alongsideBlocks;
-(id)initWithAnimated:(BOOL)arg1 ;
@end
