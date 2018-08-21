/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class PKPhysicsField, SKRegion, SKTexture;

@interface SKFieldNode : SKNode {

	PKPhysicsField* _field;
	SKRegion* _region;
	float _smoothness;
	float _animationSpeed;
	SKTexture* _texture;
	BOOL _exclusive;

}

@property (nonatomic,retain) SKRegion * region; 
@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloff; 
@property (assign,nonatomic) float minimumRadius; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isExclusive,nonatomic) BOOL exclusive;              //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic)  direction; 
@property (assign,nonatomic) float smoothness; 
@property (assign,nonatomic) float animationSpeed; 
@property (nonatomic,retain) SKTexture * texture; 
+(id)springField;
+(id)dragField;
+(id)vortexField;
+(id)linearGravityFieldWithVector:;
+(id)velocityFieldWithVector:;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)electricField;
+(id)magneticField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)radialGravityField;
+(id)velocityFieldWithTexture:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirection:;
-()direction;
-(void)setRegion:(SKRegion *)arg1 ;
-(SKRegion *)region;
-(BOOL)isExclusive;
-(float)strength;
-(void)setStrength:(float)arg1 ;
-(id)field;
-(void)setSmoothness:(float)arg1 ;
-(void)setAnimationSpeed:(float)arg1 ;
-(unsigned)categoryBitMask;
-(void)setFalloff:(float)arg1 ;
-(float)falloff;
-(void)setMinimumRadius:(float)arg1 ;
-(float)minimumRadius;
-(float)smoothness;
-(float)animationSpeed;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(void)setExclusive:(BOOL)arg1 ;
-(void)setPhysicsField:(id)arg1 ;
-(id)_descriptionClassName;
-(id)initWithCoder:(id)arg1 field:(id)arg2 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setTexture:(SKTexture *)arg1 ;
-(SKTexture *)texture;
@end
