/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIView;

@interface TSKScrollView : UIScrollView {

	unsigned long long mAnimatingContentOffsetCount;
	BOOL _mayPassScrollEventsToNextResponder;
	BOOL _shouldDisableScrollingWhenCursorIsHidden;
	CGRect _scrollableAreaBounds;

}

@property (assign,nonatomic) id<UIScrollViewDelegate><TSKScrollViewDelegate> delegate; 
@property (nonatomic,readonly) UIView * contentView; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (assign,nonatomic) BOOL mayPassScrollEventsToNextResponder;                               //@synthesize mayPassScrollEventsToNextResponder=_mayPassScrollEventsToNextResponder - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableScrollingWhenCursorIsHidden;                         //@synthesize shouldDisableScrollingWhenCursorIsHidden=_shouldDisableScrollingWhenCursorIsHidden - In the implementation block
@property (nonatomic,readonly) CGRect scrollableAreaBounds;                                         //@synthesize scrollableAreaBounds=_scrollableAreaBounds - In the implementation block
@property (nonatomic,readonly) CGRect tsk_bounds; 
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGRect)visibleFrame;
-(BOOL)isScrolling;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CGSize)tsk_contentSize;
-(CGRect)tsk_bounds;
-(void)hideScrollIndicators;
-(BOOL)mayPassScrollEventsToNextResponder;
-(void)setMayPassScrollEventsToNextResponder:(BOOL)arg1 ;
-(BOOL)shouldDisableScrollingWhenCursorIsHidden;
-(void)setShouldDisableScrollingWhenCursorIsHidden:(BOOL)arg1 ;
-(CGRect)scrollableAreaBounds;
@end

