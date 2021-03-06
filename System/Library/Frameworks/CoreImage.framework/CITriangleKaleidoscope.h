/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CITriangleKaleidoscope : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	NSNumber* inputSize;
	NSNumber* inputRotation;
	NSNumber* inputDecay;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputRotation; 
@property (nonatomic,retain) NSNumber * inputDecay; 
+(id)customAttributes;
-(NSNumber *)inputRotation;
-(CIVector *)inputPoint;
-(id)_geomKernel;
-(id)_colorKernel;
-(void)setInputRotation:(NSNumber *)arg1 ;
-(NSNumber *)inputDecay;
-(void)setInputDecay:(NSNumber *)arg1 ;
-(id)outputImage;
-(void)setInputPoint:(CIVector *)arg1 ;
-(void)setInputSize:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputSize;
-(CIImage *)inputImage;
@end

