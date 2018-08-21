/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@class NUColorSpace, NSDictionary;

@interface NUVideoPlaybackFrameRequest : NURenderRequest {

	NUColorSpace* _colorSpace;
	CVBufferRef _destinationBuffer;
	NSDictionary* _videoFrames;
	SCD_Struct_NU5 _renderScale;
	SCD_Struct_NU7 _evaluationTime;

}

@property (nonatomic,retain) NUColorSpace * colorSpace;                  //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,retain) CVBufferRef destinationBuffer;              //@synthesize destinationBuffer=_destinationBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU7 evaluationTime;              //@synthesize evaluationTime=_evaluationTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU5 renderScale;                 //@synthesize renderScale=_renderScale - In the implementation block
@property (nonatomic,copy) NSDictionary * videoFrames;                   //@synthesize videoFrames=_videoFrames - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NUColorSpace *)colorSpace;
-(id)initWithComposition:(id)arg1 ;
-(CVBufferRef)destinationBuffer;
-(void)setDestinationBuffer:(CVBufferRef)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(NSDictionary *)videoFrames;
-(void)setVideoFrames:(NSDictionary *)arg1 ;
-(void)setEvaluationTime:(SCD_Struct_NU7)arg1 ;
-(SCD_Struct_NU7)evaluationTime;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setRenderScale:(SCD_Struct_NU5)arg1 ;
-(SCD_Struct_NU5)renderScale;
@end
