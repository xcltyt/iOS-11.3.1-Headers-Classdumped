/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStyledLayout.h>

@class TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout {

	CGRect mCachedAlignmentFrame;
	struct {
		unsigned alignmentFrame : 1;
	}  mMediaInvalidFlags;
	TSDMutableStroke* mDynamicStroke;
	BOOL mShouldRenderFrameStroke;
	CGRect mBoundsForStandardKnobs;

}

@property (assign,nonatomic) CGRect boundsForStandardKnobs; 
@property (assign,nonatomic) BOOL shouldRenderFrameStroke; 
-(id)stroke;
-(void)setGeometry:(id)arg1 ;
-(CGRect)boundsForStandardKnobs;
-(id)initWithInfo:(id)arg1 ;
-(BOOL)supportsRotation;
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)alignmentFrame;
-(BOOL)isStrokeBeingManipulated;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthUpdateToValue:(double)arg1 ;
-(void)dynamicStrokeWidthChangeDidEnd;
-(CGRect)alignmentFrameInRoot;
-(void)invalidateAlignmentFrame;
-(BOOL)shouldRenderFrameStroke;
-(void)setShouldRenderFrameStroke:(BOOL)arg1 ;
-(void)setBoundsForStandardKnobs:(CGRect)arg1 ;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(id)mediaInfo;
@end
