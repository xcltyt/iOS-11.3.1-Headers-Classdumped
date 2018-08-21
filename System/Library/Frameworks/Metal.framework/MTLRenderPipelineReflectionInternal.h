/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineReflection.h>

@class NSArray, MTLArgument, NSDictionary;

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {

	SCD_Struct_MT19 _flags;
	NSArray* _vertexBuiltInArguments;
	unsigned long long _postVertexDumpStride;
	NSArray* _postVertexDumpOutputs;
	NSArray* _inferredInputs;
	NSArray* _vertexArguments;
	NSArray* _fragmentArguments;
	NSArray* _tileArguments;
	NSArray* _tileBuiltInArguments;
	MTLArgument* _imageBlockDataReturn;
	NSDictionary* _performanceStatistics;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)performanceStatistics;
-(void)setPerformanceStatistics:(id)arg1 ;
-(id)initWithTileArguments:(id*)arg1 argumentCount:(unsigned)arg2 builtInArgumentCount:(unsigned)arg3 imageBlockDataReturn:(id)arg4 device:(id)arg5 flags:(SCD_Struct_MT19)arg6 ;
-(id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(SCD_Struct_MT19)arg6 ;
-(id)initWithTileData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(SCD_Struct_MT19)arg4 ;
-(id)initWithTileData:(id)arg1 functionType:(unsigned long long)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(SCD_Struct_MT19)arg5 ;
-(id)vertexBuiltInArguments;
-(unsigned long long)postVertexDumpStride;
-(id)postVertexDumpOutputs;
-(id)inferredInputs;
-(id)tileArguments;
-(id)imageBlockDataReturn;
-(SCD_Struct_MT19)usageFlags;
-(void)dealloc;
-(id)description;
-(id)vertexArguments;
-(id)fragmentArguments;
@end
