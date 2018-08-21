/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CVAPortraitResult <NSObject>
@property (readonly) id<CVAMattingResult> mattingResult; 
@property (readonly) CVBufferRef portraitPixelBuffer; 
@property (readonly) float portraitStability; 
@required
-(CVBufferRef)portraitPixelBuffer;
-(float)portraitStability;
-(id<CVAMattingResult>)mattingResult;

@end
