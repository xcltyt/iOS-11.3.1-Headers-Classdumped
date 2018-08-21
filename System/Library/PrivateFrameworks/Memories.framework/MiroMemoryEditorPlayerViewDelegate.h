/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroMemoryEditorPlayerViewDelegate <NSObject>
@property (assign,nonatomic) BOOL isSeparatingOrCollapsing; 
@required
-(BOOL)playerViewShouldShowInChildViewControllers;
-(BOOL)isSeparatingOrCollapsing;
-(void)setMovieDisplayControllerParent:(id)arg1 andSuperview:(id)arg2;
-(id)placeSnapshotOfPlayerViewInContainerView:(id)arg1;
-(void)setIsSeparatingOrCollapsing:(BOOL)arg1;
-(void)playerViewWillResize:(CGSize)arg1;

@end
