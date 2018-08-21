/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CITileFilter.h>

@class NSNumber;

@interface CITile2Filter : CITileFilter {

	NSNumber* inputAcuteAngle;

}

@property (nonatomic,retain) NSNumber * inputAcuteAngle; 
+(id)customAttributes;
-(NSNumber *)inputAcuteAngle;
-(double)_roiArea;
-(vec2)_roiCenter;
-(id)_singlePixelImage;
-(CGRect)_roiRect;
-(void)setInputAcuteAngle:(NSNumber *)arg1 ;
-(id)outputImage;
@end
