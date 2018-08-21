/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@interface AirPlayImage : NSObject {

	CGSize _unadjustedSize;
	CGImageRef _image;
	void* _ioSurface;
	int _imageOrientation;
	CGSize _scale;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) id layerContents; 
@property (nonatomic,readonly) void* ioSurface; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) int imageOrientation; 
@property (assign,nonatomic) CGSize scale; 
-(CGSize)scale;
-(CGSize)size;
-(void)dealloc;
-(void)setScale:(CGSize)arg1 ;
-(CGImageRef)CGImage;
-(int)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void*)ioSurface;
-(id)layerContents;
-(id)initWithContentsOfFile:(id)arg1 decode:(BOOL)arg2 ;
-(id)initWithData:(id)arg1 decode:(BOOL)arg2 ;
-(CGAffineTransform)contentsTransformForLayer:(id)arg1 ;
-(void)_setImageOrientation:(int)arg1 ;
-(void)_setIOSurface:(void*)arg1 ;
-(void)_setCGImage:(CGImageRef)arg1 ;
-(CGSize)_unadjustedContentSize;
@end
