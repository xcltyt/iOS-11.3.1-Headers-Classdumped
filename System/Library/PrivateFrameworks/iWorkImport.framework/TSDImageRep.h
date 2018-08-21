/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaRep.h>
#import <libobjc.A.dylib/CALayerDelegate.h>
#import <iWorkImport/TSDImageDrawingDataSource.h>
#import <iWorkImport/TSDMagicMoveMatching.h>

@protocol OS_dispatch_semaphore;
@class TSDLayoutGeometry, TSDImageDrawingHelper, NSMutableArray, NSObject, TSPData, TSDImageInfo, TSDImageLayout, TSDMaskInfo, TSDMaskLayout, NSString;

@interface TSDImageRep : TSDMediaRep <CALayerDelegate, TSDImageDrawingDataSource, TSDMagicMoveMatching> {

	TSDLayoutGeometry* mLastImageGeometryInRoot;
	TSDLayoutGeometry* mLastMaskGeometryInRoot;
	CGAffineTransform mLastLayoutToImageTransform;
	CGRect mFrameInUnscaledCanvasRelativeToSuper;
	BOOL mFrameInUnscaledCanvasIsValid;
	TSDImageDrawingHelper* mDrawingHelper;
	NSMutableArray* mUpdateFromLayoutBlocks;
	NSObject*<OS_dispatch_semaphore> mUpdateFromLayoutBlocksLock;

}

@property (readonly) TSPData * imageDataForRendering; 
@property (nonatomic,readonly) TSDImageInfo * imageInfo; 
@property (nonatomic,readonly) TSDImageLayout * imageLayout; 
@property (nonatomic,readonly) TSDMaskInfo * maskInfo; 
@property (nonatomic,readonly) TSDMaskLayout * maskLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3 ;
-(void)setTextureAttributes:(id)arg1 textureBounds:(CGRect)arg2 ;
-(id)imageDrawingHelperImageData:(id)arg1 ;
-(id)imageDrawingHelperThumbnailImageData:(id)arg1 ;
-(CGRect)imageDrawingHelperImageRect:(id)arg1 ;
-(CGAffineTransform)imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)arg1 ;
-(BOOL)imageDrawingHelperImageHasAlpha:(id)arg1 ;
-(id)imageDrawingHelperAdjustedImageData:(id)arg1 ;
-(id)imageDrawingHelperThumbnailAdjustedImageData:(id)arg1 ;
-(id)textureForDescription:(id)arg1 ;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(BOOL)shouldShowCheckerboard;
-(void)p_drawInContext:(CGContextRef)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(double)arg4 withMask:(BOOL)arg5 withIAMask:(BOOL)arg6 forLayer:(BOOL)arg7 forShadow:(BOOL)arg8 forHitTest:(BOOL)arg9 ;
-(BOOL)p_shouldUseSourceImageForDescription:(id)arg1 clipBounds:(CGRect)arg2 transform:(CGAffineTransform)arg3 image:(CGImageRef)arg4 ;
-(TSPData *)imageDataForRendering;
-(BOOL)isDataCurrentlyDownloading;
-(id)downloadProgressPlaceholderImage;
-(void)dealloc;
-(void)willBeRemoved;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(CGRect)frameInUnscaledCanvas;
-(BOOL)canDrawInParallel;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(id)imageOfStroke:(CGRect*)arg1 ;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1 ;
-(TSDImageInfo *)imageInfo;
-(TSDMaskInfo *)maskInfo;
-(TSDImageLayout *)imageLayout;
-(TSDMaskLayout *)maskLayout;
-(id)p_validatedBitmapImageProvider;
-(id)p_validatedImageProvider;
-(BOOL)p_drawsInOneStep;
@end
