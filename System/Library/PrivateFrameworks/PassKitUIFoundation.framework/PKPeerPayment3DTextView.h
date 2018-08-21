/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PKMotionManagerClientProtocol.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>

@class SCNView, SCNMaterial, SCNPlane, SCNNode, NSMutableArray, NSString;

@interface PKPeerPayment3DTextView : UIView <PKMotionManagerClientProtocol, SCNSceneRendererDelegate> {

	SCNView* _sceneView;
	SCNMaterial* _textMaterial;
	SCNPlane* _wallGeometry;
	SCNNode* _lightNode;
	SCNNode* _textContainerNode;
	 _lastRollPitch;
	double _sceneWidthUnits;
	double _sceneHeightUnits;
	NSMutableArray* _performHandlers;
	long long _frameCount;
	double _dynamicRollPitchMix;
	double _startAnimationTime;
	double _animationDuration;
	double _lastRenderTime;
	BOOL _liveMotionEnabled;
	unsigned long long _renderStyle;
	NSString* _text;

}

@property (nonatomic,readonly) unsigned long long renderStyle;              //@synthesize renderStyle=_renderStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedCharacterSet;
+(id)_sharedMotionManager;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(NSString *)text;
-(BOOL)setText:(NSString *)arg1 ;
-(void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 renderStyle:(unsigned long long)arg2 ;
-(void)updateSceneUnits;
-(void)setRollPitch:;
-(unsigned long long)renderStyle;
-(void)setMotionEffectEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)generatedSnapshot;
-(void)performPostRender:(/*^block*/id)arg1 ;
@end
