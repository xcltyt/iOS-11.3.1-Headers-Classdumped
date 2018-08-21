/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHChartPieWedgeElement, NSArray;

@interface TSCHChartPieWedgeLayoutInfo : NSObject <NSCopying> {

	TSCHChartPieWedgeElement* mWedgeElement;
	NSArray* mPieLabels;
	CGAffineTransform mCombinedLabelTransformIntoPieChartCoordinateSpace;

}

@property (nonatomic,retain) TSCHChartPieWedgeElement * wedgeElement; 
@property (nonatomic,copy) NSArray * pieLabels; 
@property (nonatomic,readonly) CGRect combinedLabelRect; 
@property (nonatomic,readonly) CGRect combinedLabelErasableFrame; 
@property (assign,nonatomic) CGAffineTransform combinedLabelTransformIntoPieChartCoordinateSpace; 
@property (nonatomic,readonly) CGRect combinedLabelRectInChartCoordinateSpace; 
@property (nonatomic,readonly) CGPoint combinedLabelRectMidpointInChartCoordinateSpace; 
@property (nonatomic,readonly) CGRect combinedLabelErasableFrameInChartCoordinateSpace; 
@property (nonatomic,readonly) int enableCalloutLineSetting; 
@property (nonatomic,readonly) BOOL stackLabels; 
-(CGPoint)combinedLabelRectMidpointInChartCoordinateSpace;
-(TSCHChartPieWedgeElement *)wedgeElement;
-(CGRect)combinedLabelRectInChartCoordinateSpace;
-(NSArray *)pieLabels;
-(CGAffineTransform)combinedLabelTransformIntoPieChartCoordinateSpace;
-(double)combinedLabelDistanceFromWedgeTip;
-(void)updateToUseChartCoordinateSpaceWithChartBodyCenterPoint:(CGPoint)arg1 ;
-(CGRect)combinedLabelErasableFrameInChartCoordinateSpace;
-(id)initWithPieWedgeElement:(id)arg1 pieLabels:(id)arg2 combinedLabelTransformIntoPieChartCoordinateSpace:(CGAffineTransform)arg3 ;
-(BOOL)combinedLabelOutsideWedge;
-(CGRect)combinedLabelErasableFrame;
-(int)enableCalloutLineSetting;
-(void)concatenateCombinedLabelTransformWithTransform:(CGAffineTransform)arg1 ;
-(BOOL)stackLabels;
-(BOOL)combinedLabelIsOnLeftSide;
-(void)realignPieLabels:(long long)arg1 ;
-(CGPoint)pointAtLabelInChartCoordinateSpaceOnCloseXSideMiddleY;
-(CGPoint)pointAtLabelInChartCoordinateSpace;
-(void)setWedgeElement:(TSCHChartPieWedgeElement *)arg1 ;
-(void)setPieLabels:(NSArray *)arg1 ;
-(void)setCombinedLabelTransformIntoPieChartCoordinateSpace:(CGAffineTransform)arg1 ;
-(CGRect)combinedLabelRect;
-(CGPoint)combinedLabelRectTopLeftCornerInChartCoordinateSpace;
-(BOOL)pointOutsidePieChart:(CGPoint)arg1 ;
-(CGPoint)combinedLabelRectTopRightCornerInChartCoordinateSpace;
-(CGPoint)combinedLabelRectBottomLeftCornerInChartCoordinateSpace;
-(CGPoint)combinedLabelRectBottomRightCornerInChartCoordinateSpace;
-(CGPoint)pointAtLabelInChartCoordinateSpaceOnFarXSideMiddleYWithStartPoint:(CGPoint)arg1 ;
-(CGPoint)pointAtLabelInChartCoordinateSpaceOnFarXSideTopYWithStartPoint:(CGPoint)arg1 ;
-(CGPoint)pointAtLabelInChartCoordinateSpaceOnFarXSideBottomYWithStartPoint:(CGPoint)arg1 ;
-(CGPoint)pointAtLabelInChartCoordinateSpaceOnCloseXSideMiddleYWithStartPoint:(CGPoint)arg1 ;
-(CGPoint)pointAtLabelInChartCoordinateSpaceOnCloseXSideTopYWithStartPoint:(CGPoint)arg1 ;
-(CGPoint)pointAtLabelInChartCoordinateSpaceOnCloseXSideBottomYWithStartPoint:(CGPoint)arg1 ;
-(CGPoint)vectorFromWedgeTipToCombinedLabelRect;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
