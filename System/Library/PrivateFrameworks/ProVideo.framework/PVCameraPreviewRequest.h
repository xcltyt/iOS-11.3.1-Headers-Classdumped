/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSMutableArray, NSDictionary, NSArray;

@interface PVCameraPreviewRequest : NSObject {

	BOOL _mirrored;
	opaqueCMSampleBufferRef _sampleBuffer;
	NSMutableArray* _effects;
	NSDictionary* _effectProperties;
	NSArray* _metadataObjects;
	SCD_Struct_PV19 _time;

}

@property (assign,nonatomic) opaqueCMSampleBufferRef sampleBuffer;              //@synthesize sampleBuffer=_sampleBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_PV19 time;                              //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL mirrored;                                     //@synthesize mirrored=_mirrored - In the implementation block
@property (nonatomic,retain) NSMutableArray * effects;                          //@synthesize effects=_effects - In the implementation block
@property (nonatomic,copy) NSDictionary * effectProperties;                     //@synthesize effectProperties=_effectProperties - In the implementation block
@property (nonatomic,copy) NSArray * metadataObjects;                           //@synthesize metadataObjects=_metadataObjects - In the implementation block
-(NSArray *)metadataObjects;
-(void)setMirrored:(BOOL)arg1 ;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(SCD_Struct_PV19)time;
-(void)setTime:(SCD_Struct_PV19)arg1 ;
-(oneway void)dealloc;
-(void)setSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)mirrored;
-(NSDictionary *)effectProperties;
-(void)setEffectProperties:(NSDictionary *)arg1 ;
-(void)setMetadataObjects:(NSArray *)arg1 ;
-(NSMutableArray *)effects;
-(void)setEffects:(NSMutableArray *)arg1 ;
@end
