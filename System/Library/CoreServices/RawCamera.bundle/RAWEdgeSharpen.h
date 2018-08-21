/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWEdgeSharpen : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputPreSharpenAmount;
	NSNumber* inputPreSharpenBlurAmount;
	NSNumber* inputVersion;

}
+(id)customAttributes;
-(id)outputImage;
-(id)customAttributes;
-(CGRect)regionOf:(int)arg1 rect:(CGRect)arg2 userInfo:(id)arg3 ;
@end
