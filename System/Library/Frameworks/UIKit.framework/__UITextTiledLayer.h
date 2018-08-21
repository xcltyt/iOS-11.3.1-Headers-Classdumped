/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSMutableArray, UIBezierPath, NSString;

@interface __UITextTiledLayer : CALayer <CALayerDelegate> {

	NSMutableArray* _visibleTiles;
	NSMutableArray* _unusedTiles;
	CGRect _gridBounds;
	CGSize _tileSize;
	UIBezierPath* _mask;
	struct {
		unsigned disableTiling : 1;
		unsigned ditchAllTiles : 1;
		unsigned suspendLayout : 4;
		unsigned delegateConstrainsTileableBounds : 1;
		unsigned delegateSupportsMaskedRects : 1;
		unsigned delegateImplementsWillDraw : 1;
	}  _tcTiledLayerFlags;
	double _maxTileHeight;

}

@property (assign,nonatomic) BOOL usesTiledLayers; 
@property (assign,nonatomic) double maxTileHeight;                  //@synthesize maxTileHeight=_maxTileHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentsFormat:(id)arg1 ;
-(void)layerWillDraw:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setContentsMultiplyColor:(CGColorRef)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)drawDirtyLayer:(id)arg1 intoContext:(CGContextRef)arg2 ;
-(void)_drawInContext:(CGContextRef)arg1 ;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
-(id)_preparedTileForFrame:(CGRect)arg1 mask:(id)arg2 opacity:(double)arg3 deferred:(BOOL)arg4 ;
-(double)maxTileHeight;
-(void)_prepareGridForBounds:(CGRect)arg1 ;
-(void)_prepareTilesForVisibleBounds:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(void)_prepareNonTiledGhostLayersForVisibleBounds:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(void)layoutSublayers;
-(void)setUsesTiledLayers:(BOOL)arg1 ;
-(BOOL)usesTiledLayers;
-(void)suspendTiling;
-(void)resumeTiling;
-(void)setMaxTileHeight:(double)arg1 ;
@end
