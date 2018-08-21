/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathManipulation.h>

@class NSMutableDictionary, NSMutableArray;

@interface TSDBrushPathManipulation : TSDPathManipulation {

	CGPathRef mBrushStroke;
	double mRepeatLength;
	NSMutableDictionary* mSections;
	NSMutableArray* mMiddleSections;
	NSMutableArray* mSmallSections;
	double mSmallLimitWidth;
	BOOL mSplitAtSharpAngles;

}
@end
