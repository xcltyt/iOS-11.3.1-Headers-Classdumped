/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
@class NSData;

@interface IMEmbeddedHardwareJPEGTranscoder : NSObject {

	IOSurfaceRef _ioSurfaceRef;
	NSData* _imageData;
	CFDictionaryRef _imageProperties;
	BOOL _canHardwareScaleImage;
	BOOL _stripImageMetadata;
	double _targetJPEGCompressionValue;

}

@property (assign,nonatomic) double targetJPEGCompressionValue;              //@synthesize targetJPEGCompressionValue=_targetJPEGCompressionValue - In the implementation block
@property (assign,nonatomic) BOOL stripImageMetadata;                        //@synthesize stripImageMetadata=_stripImageMetadata - In the implementation block
-(void)dealloc;
-(BOOL)_isJPEGImage:(CGImageSourceRef)arg1 ;
-(BOOL)_decodeImageToIOSurface;
-(id)initWithImageData:(id)arg1 imageSource:(CGImageSourceRef)arg2 ;
-(double)targetJPEGCompressionValue;
-(BOOL)stripImageMetadata;
-(BOOL)scaleImageToFitLargestDimension:(id)arg1 outputData:(id*)arg2 ;
-(void)setTargetJPEGCompressionValue:(double)arg1 ;
-(void)setStripImageMetadata:(BOOL)arg1 ;
@end
