/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DMaterial.h>

@class TSCH3DVector, NSArray;

@interface TSCH3DTexturesMaterial : TSCH3DMaterial {

	TSCH3DVector* _color;
	NSArray* _textures;
	NSArray* _tilings;

}

@property (assign,nonatomic) tvec4<float> color; 
+(id)instanceWithArchive:(const Chart3DTexturesMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DTexturesMaterialArchive*)arg1 archiver:(id)arg2 ;
-(void)didInitFromSOS;
-(id)initWithArchive:(const Chart3DTexturesMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)hasCompleteData;
-(id)firstTiling;
-(unsigned long long)textureCount;
-(id)textureEnumerator;
-(id)firstTexture;
-(void)addTexture:(id)arg1 tiling:(id)arg2 ;
-(id)tilings;
-(id)textures;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(tvec4<float>)color;
-(void)setColor:(tvec4<float>)arg1 ;
@end
