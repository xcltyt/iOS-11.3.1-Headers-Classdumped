/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class NSString, NSNumber;

@interface CITextImageGenerator : CIFilter {

	NSString* inputText;
	NSString* inputFontName;
	NSNumber* inputFontSize;
	NSNumber* inputScaleFactor;

}

@property (nonatomic,retain) NSString * inputText; 
@property (nonatomic,retain) NSString * inputFontName; 
@property (nonatomic,retain) NSNumber * inputFontSize; 
@property (nonatomic,retain) NSNumber * inputScaleFactor; 
+(id)customAttributes;
-(NSString *)inputFontName;
-(void)setInputFontName:(NSString *)arg1 ;
-(NSNumber *)inputFontSize;
-(void)setInputFontSize:(NSNumber *)arg1 ;
-(NSNumber *)inputScaleFactor;
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(id)outputImage;
-(NSString *)inputText;
-(void)setInputText:(NSString *)arg1 ;
@end
