/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDSmartStroke.h>

@interface TSDCalligraphyStroke : TSDSmartStroke
+(Class)mutableClass;
+(id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3 ;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)angle;
-(id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6 ;
-(void)applyToContext:(CGContextRef)arg1 insideStroke:(BOOL)arg2 ;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(BOOL)arg4 ;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 useFastDrawing:(BOOL)arg6 ;
-(BOOL)canApplyToCAShapeLayer;
-(BOOL)drawsOutsideStrokeBounds;
-(CGRect)boundsForPath:(id)arg1 ;
-(CGRect)boundsForLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(CGAffineTransform)arg5 ;
-(BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
-(BOOL)drawsInOneStep;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7 ;
-(BOOL)chisel;
-(CGAffineTransform)transformInContext:(CGContextRef)arg1 ;
@end
