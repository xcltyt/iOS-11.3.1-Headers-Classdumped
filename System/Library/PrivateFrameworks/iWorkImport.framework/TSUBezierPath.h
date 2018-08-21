/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface TSUBezierPath : NSObject <NSCopying> {

	long long sfr_elementCount;
	long long sfr_elementMax;
	PATHSEGMENT* sfr_head;
	double* sfr_elementLength;
	double sfr_totalLength;
	long long sfr_lastSubpathIndex;
	void* sfr_extraSegments;
	double sfr_lineWidth;
	CGRect sfr_controlPointBounds;
	double sfr_miterLimit;
	double sfr_flatness;
	double* sfr_dashedLinePattern;
	unsigned long long sfr_dashedLineCount;
	double sfr_dashedLinePhase;
	CGPathRef sfr_path;
	long long sfr_extraSegmentCount;
	long long sfr_extraSegmentMax;
	struct {
		unsigned sfr_flags : 8;
		unsigned sfr_pathState : 2;
		unsigned sfr_calculatedLengths : 1;
		unsigned sfr_unused : 21;
	}  sfr_bpFlags;

}

@property (nonatomic,readonly) BOOL isCompound; 
@property (nonatomic,readonly) BOOL isSelfIntersecting; 
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) BOOL isLineSegment; 
@property (nonatomic,readonly) BOOL isEffectivelyClosed; 
@property (nonatomic,readonly) BOOL containsClosePathElement; 
@property (nonatomic,readonly) BOOL containsElementsOtherThanMoveAndClose; 
@property (nonatomic,readonly) NSArray * visuallyDistinctSubregions; 
@property (nonatomic,readonly) BOOL hasAtLeastTwoVisuallyDistinctSubregions; 
+(SCD_Struct_TS208)lineEndPositioningOnPath:(id)arg1 atHead:(BOOL)arg2 headPoint:(CGPoint)arg3 tailPoint:(CGPoint)arg4 headLineEnd:(id)arg5 tailLineEnd:(id)arg6 stroke:(id)arg7 ;
+(id)createClippedPath:(id)arg1 headPositioning:(SCD_Struct_TS208)arg2 tailPositioning:(SCD_Struct_TS208)arg3 stroke:(id)arg4 ;
+(id)p_normalizeSubpaths:(id)arg1 ;
+(id)p_mergeIntersectingSubpaths:(id)arg1 stopAfterFoundTwo:(BOOL)arg2 ;
+(id)p_connectionPathsForFillableAreas:(id)arg1 withConnectionThreshold:(double)arg2 ;
+(id)unitePolygonalBezierPaths:(id)arg1 ;
+(CGPoint)p_findPointWithGreatestSlopeFromStartPoint:(CGPoint)arg1 toPointA:(CGPoint)arg2 orPointB:(CGPoint)arg3 ;
+(SCD_Struct_TS208)makeDefaultPositioning;
+(id)arrayOfFillablePathsFromPaths:(id)arg1 withConnectionThreshold:(double)arg2 ;
+(void)initialize;
+(id)bezierPath;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(double)lineWidth;
+(void)setLineWidth:(double)arg1 ;
+(unsigned long long)lineCapStyle;
+(void)setLineCapStyle:(unsigned long long)arg1 ;
+(unsigned long long)lineJoinStyle;
+(void)setLineJoinStyle:(unsigned long long)arg1 ;
+(double)miterLimit;
+(void)setMiterLimit:(double)arg1 ;
+(double)flatness;
+(void)setFlatness:(double)arg1 ;
+(void)fillRect:(CGRect)arg1 ;
+(void)strokeRect:(CGRect)arg1 ;
+(unsigned long long)windingRule;
+(void)setWindingRule:(unsigned long long)arg1 ;
+(id)bezierPathWithStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
+(id)outsideEdgeOfBezierPath:(id)arg1 ;
+(id)tracedPathForImage:(CGImageRef)arg1 alphaThreshold:(double)arg2 pointSpacing:(double)arg3 ;
+(void)clipRect:(CGRect)arg1 ;
+(void)strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(void)setDefaultMiterLimit:(double)arg1 ;
+(double)defaultMiterLimit;
+(void)setDefaultFlatness:(double)arg1 ;
+(double)defaultFlatness;
+(void)setDefaultWindingRule:(unsigned long long)arg1 ;
+(unsigned long long)defaultWindingRule;
+(void)setDefaultLineCapStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineCapStyle;
+(void)setDefaultLineJoinStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineJoinStyle;
+(void)setDefaultLineWidth:(double)arg1 ;
+(double)defaultLineWidth;
+(id)uniteBezierPaths:(id)arg1 ;
+(id)outlineBezierPath:(id)arg1 withThreshold:(double)arg2 ;
+(id)outlineBezierPath:(id)arg1 ;
+(id)subtractBezierPaths:(id)arg1 ;
+(id)intersectBezierPaths:(id)arg1 ;
+(id)bezierPathWithConvexHullOfPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
+(id)p_booleanWithBezierPaths:(id)arg1 operation:(int)arg2 ;
+(Path*)p_bezierToPath:(id)arg1 ;
+(id)p_pathToBezier:(Path*)arg1 ;
+(id)excludeBezierPaths:(id)arg1 ;
+(id)appendBezierPaths:(id)arg1 ;
+(id)exteriorOfBezierPath:(id)arg1 ;
+(id)smoothBezierPath:(id)arg1 withThreshold:(double)arg2 ;
+(CGRect)p_pathToBounds:(Path*)arg1 ;
+(id)tracedPathForInstantAlphaBinaryBitmap:(id)arg1 pointSpacing:(double)arg2 ;
-(id)p_bezierPathByRemovingRedundantElementAndSubregionsSmallerThanThreshold:(double)arg1 ;
-(void)_appendToPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2 ;
-(void)appendBezierPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2 ;
-(id)bezierPathByRemovingSmallSubpathsForInteriorWrapsForInset:(double)arg1 ;
-(void)iterateOverPathWithPointDistancePerIteration:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)p_pathBySplittingAtPointGuaranteedToBeOnPath:(CGPoint)arg1 controlPointDistanceEqual:(BOOL)arg2 elementIndex:(long long)arg3 parametricValue:(double)arg4 ;
-(id)p_copyWithPointsInRange:(NSRange)arg1 countingSubpaths:(unsigned long long*)arg2 ;
-(void)appendPointsInRange:(NSRange)arg1 fromBezierPath:(id)arg2 ;
-(CGPoint)pointAlongPathAtPercentage:(double)arg1 withFlattenedPath:(id)arg2 andLength:(double*)arg3 atStartIndex:(unsigned long long*)arg4 ;
-(BOOL)containsElementsOtherThanMoveAndClose;
-(id)arrayOfSubpathsWithEffectivelyEmptySubpathsRemoved:(BOOL)arg1 ;
-(NSArray *)visuallyDistinctSubregions;
-(id)pathBySplittingAtPointOnPath:(CGPoint)arg1 controlPointDistanceEqual:(BOOL)arg2 ;
-(id)pathByCreatingHoleInPathAtPoint:(CGPoint)arg1 withDiameter:(double)arg2 andThreshold:(double)arg3 updatingPatternOffsetsBySubpath:(id)arg4 ;
-(BOOL)hasAtLeastTwoVisuallyDistinctSubregions;
-(id)uniteWithPolygonalBezierPath:(id)arg1 ;
-(id)copyWithPointsInRange:(NSRange)arg1 ;
-(CGPoint)pointAt:(double)arg1 ;
-(id)init;
-(CGRect)bounds;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)length;
-(CGPathRef)CGPath;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(void)addClip;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAllPoints;
-(id)bezierPathByReversingPath;
-(BOOL)isEmpty;
-(CGPoint)currentPoint;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3 ;
-(void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3 ;
-(void)fill;
-(void)stroke;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)appendBezierPath:(id)arg1 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(unsigned long long)lineCapStyle;
-(void)setLineCapStyle:(unsigned long long)arg1 ;
-(unsigned long long)lineJoinStyle;
-(void)setLineJoinStyle:(unsigned long long)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(double)flatness;
-(void)setFlatness:(double)arg1 ;
-(void)saveToArchive:(Path*)arg1 ;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(BOOL)intersectsRect:(CGRect)arg1 hasFill:(BOOL)arg2 ;
-(CGRect)boundsIncludingTSDStroke:(id)arg1 ;
-(CGRect)boundsIncludingStroke;
-(id)outlineStroke;
-(id)chisel;
-(long long)elementAtIndex:(long long)arg1 associatedPoints:(CGPoint*)arg2 ;
-(long long)elementCount;
-(long long)elementAtIndex:(long long)arg1 allPoints:(CGPoint*)arg2 ;
-(void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 allIntersections:(BOOL)arg3 reversed:(BOOL)arg4 ;
-(void)curveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 t:(double)arg3 toSegment:(long long)arg4 t:(double)arg5 withoutMove:(BOOL)arg6 ;
-(unsigned long long)windingRule;
-(void)setWindingRule:(unsigned long long)arg1 ;
-(double)lengthOfElement:(long long)arg1 ;
-(CGPoint)rawGradientAt:(double)arg1 fromElement:(long long)arg2 ;
-(long long)elementPercentage:(double*)arg1 forOverallPercentage:(double)arg2 ;
-(CGPoint)gradientAt:(double)arg1 fromElement:(long long)arg2 ;
-(CGPoint)pointAt:(double)arg1 fromElement:(long long)arg2 ;
-(double)elementPercentageFromElement:(long long)arg1 forOverallPercentage:(double)arg2 ;
-(double)curvatureAt:(double)arg1 fromElement:(int)arg2 ;
-(CGPoint)transformedTotalCoordinate:(CGPoint)arg1 betweenElement:(long long)arg2 andElement:(long long)arg3 withPressure:(id)arg4 getElement:(long long*)arg5 getPercentage:(double*)arg6 ;
-(CGPoint)myGradientAt:(double)arg1 fromElement:(long long)arg2 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CGSize)arg2 inElementRange:(NSRange)arg3 into:(id)arg4 ;
-(double)lengthToElement:(long long)arg1 ;
-(void)getStartPoint:(CGPoint*)arg1 andEndPoint:(CGPoint*)arg2 ;
-(void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 ;
-(void)addIntersectionsWithLine:(CGPoint)arg1 to:(id)arg2 ;
-(void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 toSegment:(long long)arg3 ;
-(id)copyFromSegment:(int)arg1 t:(double)arg2 toSegment:(int)arg3 t:(double)arg4 ;
-(CGPoint)nearestPointOnPathToLine:(CGPoint)arg1 ;
-(CGPoint)nearestAngleOnPathToLine:(CGPoint)arg1 ;
-(id)pressure;
-(CGPoint)gradientAt:(double)arg1 ;
-(CGPoint)transformedCoordinate:(CGPoint)arg1 withPressure:(id)arg2 ;
-(CGPoint)transformedTotalCoordinate:(CGPoint)arg1 inElement:(long long)arg2 withPressure:(id)arg3 ;
-(CGPoint)myGradientAt:(double)arg1 ;
-(double)curvatureAt:(double)arg1 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 into:(id)arg2 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CGSize)arg2 into:(id)arg3 ;
-(BOOL)isRectangular;
-(BOOL)isCircular;
-(BOOL)isLineSegment;
-(id)aliasedPathWithViewScale:(float)arg1 effectiveStrokeWidth:(float)arg2 ;
-(id)bezierPathByOffsettingPath:(double)arg1 joinStyle:(unsigned long long)arg2 withThreshold:(double)arg3 ;
-(double)distanceToPoint:(CGPoint)arg1 elementIndex:(unsigned long long*)arg2 tValue:(double*)arg3 threshold:(double)arg4 ;
-(void)takeAttributesFromStroke:(id)arg1 ;
-(BOOL)isEffectivelyClosed;
-(id)uniteWithBezierPath:(id)arg1 ;
-(BOOL)isOpen;
-(CGRect)controlPointBounds;
-(id)aliasedPathInContext:(CGContextRef)arg1 effectiveStrokeWidth:(float)arg2 ;
-(id)intersectBezierPath:(id)arg1 ;
-(void)_deviceMoveToPoint:(CGPoint)arg1 ;
-(void)_deviceLineToPoint:(CGPoint)arg1 ;
-(void)_deviceCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)_deviceClosePath;
-(void)subdivideBezierWithFlatness:(double)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(void)flattenIntoPath:(id)arg1 ;
-(void)_doPath;
-(long long)elementAtIndex:(long long)arg1 ;
-(BOOL)isFlat;
-(id)bezierPathByRemovingRedundantElements;
-(double)calculateLengthOfElement:(long long)arg1 ;
-(void)calculateLengths;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 ;
-(void)_appendArcSegmentWithCenter:(CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4 ;
-(void)relativeMoveToPoint:(CGPoint)arg1 ;
-(void)relativeLineToPoint:(CGPoint)arg1 ;
-(void)relativeCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(id)bezierPathByFlatteningPath;
-(id)_copyFlattenedPath;
-(BOOL)isTriangular;
-(BOOL)isDiamond;
-(BOOL)isClockwise;
-(void)setAssociatedPoints:(CGPoint*)arg1 atIndex:(long long)arg2 ;
-(void)appendBezierPathWithPoints:(CGPoint*)arg1 count:(long long)arg2 ;
-(void)appendBezierPathWithArcFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 radius:(double)arg3 ;
-(const char*)cString;
-(id)initWithCString:(const char*)arg1 ;
-(void)_addPathSegment:(long long)arg1 point:(CGPoint)arg2 ;
-(double)yValueFromXValue:(double)arg1 elementIndex:(long long*)arg2 parametricValue:(double*)arg3 ;
-(CGRect)boundsIncludingStrokeWidth:(double)arg1 joinStyle:(unsigned long long)arg2 capStyle:(unsigned long long)arg3 miterLimit:(double)arg4 needsToExtendJoins:(BOOL)arg5 ;
-(BOOL)containsClosePathElement;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(BOOL)arg5 ;
-(id)subtractBezierPath:(id)arg1 ;
-(void)addPathToContext:(CGContextRef)arg1 ;
-(id)p_aliasedPathInContext:(CGContextRef)arg1 viewScale:(float)arg2 effectiveStrokeWidth:(float)arg3 ;
-(double)yValueFromXValue:(double)arg1 ;
-(void)alignBoundsToOrigin;
-(BOOL)isCompound;
-(BOOL)isSelfIntersecting;
-(BOOL)pointOnPath:(CGPoint)arg1 tolerance:(double)arg2 ;
-(CGPoint)pointAlongPathAtPercentage:(double)arg1 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startRadialVector:(CGPoint)arg2 endRadialVector:(CGPoint)arg3 angleSign:(int)arg4 startNewPath:(BOOL)arg5 ;
-(void)clearStroke:(CGContextRef)arg1 ;
-(id)pathByWobblingByUpTo:(double)arg1 subdivisions:(unsigned long long)arg2 ;
-(CGPoint)roundPoint:(CGPoint)arg1 inContext:(CGContextRef)arg2 strokeWidth:(int)arg3 ;
-(id)bezierPathByFittingCurve:(id)arg1 ;
-(id)bezierPathByFittingCurve;
-(void)copyPathAttributesTo:(id)arg1 ;
-(BOOL)_isValid:(double)arg1 ;
-(CGPoint)_checkPointForValidity:(CGPoint)arg1 ;
-(void)flattenIntoPath:(id)arg1 flatness:(double)arg2 ;
-(id)bezierPathByFlatteningPathWithFlatness:(double)arg1 ;
-(id)initWithArchive:(const Path*)arg1 ;
@end
