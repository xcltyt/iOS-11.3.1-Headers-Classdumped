/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPTextWrapper : NSObject
+(unsigned)splitLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double*)arg5 ;
+(unsigned)p_wrappedSubrectsForRectOptimized:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double*)arg5 ;
+(unsigned)p_wrappedSubrectsForRectGPC:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double*)arg5 ;
+(double)unobstructedSpanForPath:(id)arg1 startingSpan:(CGRect)arg2 columnBounds:(CGRect)arg3 ;
@end
