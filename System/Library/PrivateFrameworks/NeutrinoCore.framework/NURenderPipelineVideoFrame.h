/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NURenderPipelineVideoFrame : NSObject {

	CVBufferRef _pixelBuffer;
	SCD_Struct_NU7 _frameTime;

}

@property (readonly) CVBufferRef pixelBuffer;               //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) SCD_Struct_NU7 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(id)initWithFrameTime:(SCD_Struct_NU7)arg1 pixelBuffer:(CVBufferRef)arg2 ;
-(SCD_Struct_NU7)frameTime;
@end
