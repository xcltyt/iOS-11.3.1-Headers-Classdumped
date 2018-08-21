/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DMaterialPackage.h>

@class TSCH3DEmissiveMaterial, TSCH3DDiffuseMaterial, TSCH3DModulateMaterial, TSCH3DSpecularMaterial, TSCH3DShininessMaterial;

@interface TSCH3DPhongMaterialPackage : TSCH3DMaterialPackage {

	TSCH3DEmissiveMaterial* _emissive;
	TSCH3DDiffuseMaterial* _diffuse;
	TSCH3DModulateMaterial* _modulate;
	TSCH3DSpecularMaterial* _specular;
	TSCH3DShininessMaterial* _shininess;

}

@property (nonatomic,retain) TSCH3DEmissiveMaterial * emissive;                //@synthesize emissive=_emissive - In the implementation block
@property (nonatomic,retain) TSCH3DDiffuseMaterial * diffuse;                  //@synthesize diffuse=_diffuse - In the implementation block
@property (nonatomic,retain) TSCH3DModulateMaterial * modulate;                //@synthesize modulate=_modulate - In the implementation block
@property (nonatomic,retain) TSCH3DSpecularMaterial * specular;                //@synthesize specular=_specular - In the implementation block
@property (nonatomic,retain) TSCH3DShininessMaterial * shininess;              //@synthesize shininess=_shininess - In the implementation block
+(id)instanceWithArchive:(const Chart3DPhongMaterialPackageArchive*)arg1 unarchiver:(id)arg2 ;
+(id)package;
-(void)saveToArchive:(Chart3DPhongMaterialPackageArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DPhongMaterialPackageArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)hasCompleteData;
-(TSCH3DEmissiveMaterial *)emissive;
-(TSCH3DModulateMaterial *)modulate;
-(id)materialEnumerator;
-(void)setEmissive:(TSCH3DEmissiveMaterial *)arg1 ;
-(void)setModulate:(TSCH3DModulateMaterial *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCH3DDiffuseMaterial *)diffuse;
-(TSCH3DSpecularMaterial *)specular;
-(void)setShininess:(TSCH3DShininessMaterial *)arg1 ;
-(TSCH3DShininessMaterial *)shininess;
-(void)setDiffuse:(TSCH3DDiffuseMaterial *)arg1 ;
-(void)setSpecular:(TSCH3DSpecularMaterial *)arg1 ;
@end
