/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface CAPortalLayer : CALayer

@property (__weak) CALayer * sourceLayer; 
@property (assign) unsigned long long sourceLayerRenderId; 
@property (assign) unsigned sourceContextId; 
@property (assign) BOOL hidesSourceLayer; 
@property (assign) BOOL matchesOpacity; 
@property (assign) BOOL matchesPosition; 
@property (assign) BOOL matchesTransform; 
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned long long)sourceLayerRenderId;
-(unsigned)sourceContextId;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setMatchesPosition:(BOOL)arg1 ;
-(void)setMatchesTransform:(BOOL)arg1 ;
-(void)setSourceLayerRenderId:(unsigned long long)arg1 ;
-(void)setSourceContextId:(unsigned)arg1 ;
-(void)setHidesSourceLayer:(BOOL)arg1 ;
-(void)setSourceLayer:(CALayer *)arg1 ;
-(BOOL)hidesSourceLayer;
-(BOOL)matchesOpacity;
-(void)setMatchesOpacity:(BOOL)arg1 ;
-(BOOL)matchesTransform;
-(BOOL)matchesPosition;
-(CALayer *)sourceLayer;
@end
