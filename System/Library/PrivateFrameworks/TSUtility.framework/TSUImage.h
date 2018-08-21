/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class UIImage;

@interface TSUImage : NSObject {

	CGImageRef mCachedSliceableImage;
	CFDictionaryRef mImageSlices;
	long long mImageSliceCacheLock;
	id mCachedSystemImage;
	long long mCachedImageLock;

}

@property (nonatomic,readonly) UIImage * UIImage; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) double scale; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithSize:(CGSize)arg1 drawnUsingBlock:(/*^block*/id)arg2 ;
+(id)imageWithUIImage:(id)arg1 ;
+(id)noisePatternWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 factor:(double)arg3 ;
-(id)init;
-(double)scale;
-(CGSize)size;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)drawInRect:(CGRect)arg1 ;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)imagePartsWithLeftCapWidth:(double)arg1 rightCapWidth:(double)arg2 topCapHeight:(double)arg3 bottomCapHeight:(double)arg4 ;
-(UIImage *)UIImage;
-(CGImageRef)CGImageForContentsScale:(double)arg1 ;
-(id)PNGRepresentation;
-(id)initWithImageSourceRef:(CGImageSourceRef)arg1 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
-(id)TIFFRepresentation;
-(id)JPEGRepresentationWithCompressionQuality:(double)arg1 ;
-(id)stretchedImageOfSize:(CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5 ;
-(void)drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 stretchingCenterWidthBy:(double)arg3 ;
@end
