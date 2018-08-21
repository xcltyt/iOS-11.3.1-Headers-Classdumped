/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PKControllerDelegate, OS_dispatch_semaphore;
#import <PencilKit/PencilKit-Structs.h>
@class NSObject, NSMutableArray, PKRendererController, NSArray, PKDrawing, PKStrokeGenerator;

@interface PKController : NSObject {

	NSObject*<OS_dispatch_queue> _previewQueue;
	BOOL _cachedImageValid;
	CGImageRef _cachedImage;
	BOOL _imageNeedsSave;
	BOOL _liveInteraction;
	BOOL _isSuspended;
	BOOL _previewsSuspended;
	BOOL _liveDrawing;
	NSObject*<PKControllerDelegate> _delegate;
	NSMutableArray* _renderedStrokes;
	PKRendererController* _rendererController;
	NSArray* _additionalStrokes;
	NSArray* _hideAdditionalStrokes;
	PKDrawing* _drawing;
	NSObject*<OS_dispatch_semaphore> _drawingSemaphore;
	NSObject*<OS_dispatch_semaphore> _interactSemaphore;
	NSObject*<OS_dispatch_queue> _interactQueue;
	NSObject*<OS_dispatch_queue> _suspendQueue;
	CGSize _pixelSize;
	CGSize _actualSize;

}

@property (nonatomic,retain) PKRendererController * rendererController;                       //@synthesize rendererController=_rendererController - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                             //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> drawingSemaphore;               //@synthesize drawingSemaphore=_drawingSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> interactSemaphore;              //@synthesize interactSemaphore=_interactSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> interactQueue;                      //@synthesize interactQueue=_interactQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * renderedStrokes;                                //@synthesize renderedStrokes=_renderedStrokes - In the implementation block
@property (assign,nonatomic) BOOL isSuspended;                                                //@synthesize isSuspended=_isSuspended - In the implementation block
@property (assign,nonatomic) BOOL previewsSuspended;                                          //@synthesize previewsSuspended=_previewsSuspended - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> suspendQueue;                       //@synthesize suspendQueue=_suspendQueue - In the implementation block
@property (assign) BOOL liveDrawing;                                                          //@synthesize liveDrawing=_liveDrawing - In the implementation block
@property (assign) BOOL liveInteraction;                                                      //@synthesize liveInteraction=_liveInteraction - In the implementation block
@property (nonatomic,retain) NSObject*<PKControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKStrokeGenerator * inputController; 
@property (assign,nonatomic) BOOL imageNeedsSave;                                             //@synthesize imageNeedsSave=_imageNeedsSave - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                                              //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) CGSize actualSize;                                             //@synthesize actualSize=_actualSize - In the implementation block
@property (nonatomic,retain) NSArray * additionalStrokes;                                     //@synthesize additionalStrokes=_additionalStrokes - In the implementation block
@property (nonatomic,retain) NSArray * hideAdditionalStrokes;                                 //@synthesize hideAdditionalStrokes=_hideAdditionalStrokes - In the implementation block
+(void)updatesFrom:(id)arg1 to:(id)arg2 newStrokesToRender:(id*)arg3 redrawAllInRect:(CGRect*)arg4 ;
-(id)init;
-(BOOL)isSuspended;
-(NSObject*<PKControllerDelegate>)delegate;
-(CGImageRef)_image;
-(void)setDelegate:(NSObject*<PKControllerDelegate>)arg1 ;
-(CGImageRef)image;
-(void)teardown;
-(CGSize)pixelSize;
-(PKStrokeGenerator *)inputController;
-(id)initWithPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 ;
-(void)suspendDrawing;
-(void)resumeDrawing;
-(void)suspendDrawingImmediately:(BOOL)arg1 ;
-(PKRendererController *)rendererController;
-(void)resumePreviews;
-(void)setIsSuspended:(BOOL)arg1 ;
-(void)_clearCachedImage;
-(BOOL)liveDrawing;
-(void)setLiveDrawing:(BOOL)arg1 ;
-(void)setLiveInteraction:(BOOL)arg1 ;
-(void)setImageNeedsSave:(BOOL)arg1 ;
-(void)_renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 ;
-(void)_setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(CGImageRef)arg3 andMask:(CGImageRef)arg4 setupComplete:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_loadInitialDrawing:(id)arg1 withImage:(CGImageRef)arg2 andMask:(CGImageRef)arg3 ;
-(BOOL)_updateFrom:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_renderAllInStrokeSpaceRect:(CGRect)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setCachedImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 ;
-(void)_drawingChanged;
-(void)_renderAllInStrokeSpaceRect:(CGRect)arg1 selectedStrokes:(id)arg2 hideSelected:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_renderStrokes:(id)arg1 renderIntermediateSteps:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_restoreValidStateCompletion:(/*^block*/id)arg1 ;
-(void)performAsyncInteractBlock:(/*^block*/id)arg1 ;
-(BOOL)_saveAndUpdateFrom:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saveImage;
-(void)_saveImageWithState:(long long)arg1 ;
-(void)setStrokes:(id)arg1 hidden:(BOOL)arg2 applyTransform:(CGAffineTransform)arg3 ;
-(void)_setStrokes:(id)arg1 hidden:(BOOL)arg2 applyTransform:(CGAffineTransform)arg3 completion:(/*^block*/id)arg4 ;
-(void)_applyCommand:(id)arg1 interactCompletion:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_didRenderStrokes:(id)arg1 ;
-(void)removeStrokesInRect:(CGRect)arg1 from:(id)arg2 ;
-(NSMutableArray *)renderedStrokes;
-(void)setRenderedStrokes:(NSMutableArray *)arg1 ;
-(void)_getImages;
-(NSObject*<OS_dispatch_queue>)interactQueue;
-(void)_saveImageIfNeeded;
-(void)claimLiveDrawingForDelegate:(id)arg1 ;
-(void)releaseLiveDrawingClaimForDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didStartLiveInteractionWith:(id)arg1 ;
-(void)didEndLiveInteraction;
-(void)renderPreviewDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(CGImageRef)arg3 andMask:(CGImageRef)arg4 completion:(/*^block*/id)arg5 ;
-(void)suspendPreviews;
-(void)setDrawing:(id)arg1 tiles:(id)arg2 setupComplete:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(CGImageRef)arg3 andMask:(CGImageRef)arg4 setupComplete:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)updateOrientation:(long long)arg1 ;
-(void)updateDrawingFrom:(id)arg1 ;
-(void)setStrokes:(id)arg1 hidden:(BOOL)arg2 ;
-(void)setStrokes:(id)arg1 hidden:(BOOL)arg2 applyTransform:(CGAffineTransform)arg3 completion:(/*^block*/id)arg4 ;
-(void)applyCommand:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 inStrokeSpaceClipRect:(CGRect)arg5 completion:(/*^block*/id)arg6 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)renderStrokes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renderTiles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renderTilesIntoTiles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renderStrokes:(id)arg1 intoTile:(id)arg2 ;
-(void)drawingChanged;
-(void)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveImageImmediatelyIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(id)addNewRenderedStroke:(id)arg1 preDrawingChangedBlock:(/*^block*/id)arg2 ;
-(void)setRendererController:(PKRendererController *)arg1 ;
-(BOOL)imageNeedsSave;
-(BOOL)liveInteraction;
-(CGSize)actualSize;
-(NSArray *)additionalStrokes;
-(void)setAdditionalStrokes:(NSArray *)arg1 ;
-(NSArray *)hideAdditionalStrokes;
-(void)setHideAdditionalStrokes:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)drawingSemaphore;
-(void)setDrawingSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)interactSemaphore;
-(void)setInteractSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setInteractQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)previewsSuspended;
-(void)setPreviewsSuspended:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)suspendQueue;
-(void)setSuspendQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)imageWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateDrawing;
-(void)setTransientOrientation:(long long)arg1 ;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(PKDrawing *)drawing;
@end
