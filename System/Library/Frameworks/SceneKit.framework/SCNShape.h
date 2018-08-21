/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@class UIBezierPath;

@interface SCNShape : SCNGeometry {

	float _chamferRadius;
	float _extrusionDepth;
	float _discretizedStraightLineMaxLength;
	UIBezierPath* _chamferProfile;
	long long _primitiveType;
	long long _chamferMode;
	UIBezierPath* _path;

}

@property (nonatomic,copy) UIBezierPath * path; 
@property (assign,nonatomic) double extrusionDepth; 
@property (assign,nonatomic) long long chamferMode; 
@property (assign,nonatomic) double chamferRadius; 
@property (nonatomic,copy) UIBezierPath * chamferProfile; 
+(BOOL)supportsSecureCoding;
+(id)shapeWithPath:(id)arg1 extrusionDepth:(double)arg2 ;
-(id)init;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(UIBezierPath *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(UIBezierPath *)arg1 ;
-(SCD_Struct_SC143*)params;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DShapeGeometry*)arg1 ;
-(void)setChamferRadius:(double)arg1 ;
-(double)chamferRadius;
-(double)extrusionDepth;
-(void)setExtrusionDepth:(double)arg1 ;
-(long long)chamferMode;
-(void)setChamferMode:(long long)arg1 ;
-(UIBezierPath *)chamferProfile;
-(void)setChamferProfile:(UIBezierPath *)arg1 ;
-(void)setDiscretizedStraightLineMaxLength:(double)arg1 ;
-(double)discretizedStraightLineMaxLength;
-(id)initPresentationShapeGeometryWithShapeGeometryRef:(_C3DShapeGeometry*)arg1 ;
-(void)_customEncodingOfSCNShape:(id)arg1 ;
-(void)_customDecodingOfSCNShape:(id)arg1 ;
-(id)initWithShapeGeometryRef:(_C3DShapeGeometry*)arg1 ;
-(long long)primitiveType;
@end
