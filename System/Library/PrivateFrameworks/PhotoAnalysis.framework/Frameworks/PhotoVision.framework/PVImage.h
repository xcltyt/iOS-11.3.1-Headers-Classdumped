/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoVision/PhotoVision-Structs.h>
@class CIImage, NSURL, NSData, NSString;

@interface PVImage : NSObject {

	CGImageRef _CGImage;
	CIImage* _CIImage;
	NSURL* _imageURL;
	NSData* _imageData;
	unsigned long long _assetWidth;
	unsigned long long _assetHeight;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _orientedWidth;
	unsigned long long _orientedHeight;
	unsigned long long _bytesPerRow;
	unsigned long long _orientation;
	long long _modelId;
	NSString* _adjustmentVersion;

}

@property (nonatomic,readonly) unsigned long long assetWidth;                  //@synthesize assetWidth=_assetWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long assetHeight;                 //@synthesize assetHeight=_assetHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                       //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                      //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long orientedWidth;               //@synthesize orientedWidth=_orientedWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long orientedHeight;              //@synthesize orientedHeight=_orientedHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesPerRow;                 //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (nonatomic,readonly) unsigned long long orientation;                 //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) long long modelId;                              //@synthesize modelId=_modelId - In the implementation block
@property (nonatomic,copy) NSString * adjustmentVersion;                       //@synthesize adjustmentVersion=_adjustmentVersion - In the implementation block
@property (nonatomic,retain,readonly) CIImage * CIImage;                       //@synthesize CIImage=_CIImage - In the implementation block
@property (nonatomic,readonly) CGImageRef CGImage;                             //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,retain,readonly) NSURL * imageURL;                        //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain,readonly) NSData * imageData;                      //@synthesize imageData=_imageData - In the implementation block
+(id)imageWithCGImage:(CGImageRef)arg1 orientation:(unsigned long long)arg2 modelId:(long long)arg3 adjustmentVersion:(id)arg4 ;
+(id)imageWithCGImage:(CGImageRef)arg1 orientation:(unsigned long long)arg2 ;
+(id)imageWithCIImage:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 orientation:(unsigned long long)arg4 ;
+(id)imageWithURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 imageCreationOptions:(id)arg4 ;
+(id)imageWithData:(id)arg1 imageCreationOptions:(id)arg2 assetWidth:(unsigned long long)arg3 assetHeight:(unsigned long long)arg4 ;
-(void)dealloc;
-(unsigned long long)orientation;
-(CGImageRef)CGImage;
-(CIImage *)CIImage;
-(unsigned long long)height;
-(unsigned long long)width;
-(unsigned long long)bytesPerRow;
-(void)setAdjustmentVersion:(NSString *)arg1 ;
-(NSString *)adjustmentVersion;
-(NSURL *)imageURL;
-(NSData *)imageData;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(unsigned long long)arg2 modelId:(long long)arg3 adjustmentVersion:(id)arg4 ;
-(id)initWithCIImage:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 orientation:(unsigned long long)arg4 ;
-(id)initWithURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 imageCreationOptions:(id)arg4 ;
-(id)initWithData:(id)arg1 imageCreationOptions:(id)arg2 assetWidth:(unsigned long long)arg3 assetHeight:(unsigned long long)arg4 ;
-(unsigned long long)orientedWidth;
-(unsigned long long)orientedHeight;
-(CGRect)imageRectForNormalizedRect:(CGRect)arg1 ;
-(unsigned long long)assetWidth;
-(unsigned long long)assetHeight;
-(long long)modelId;
@end
