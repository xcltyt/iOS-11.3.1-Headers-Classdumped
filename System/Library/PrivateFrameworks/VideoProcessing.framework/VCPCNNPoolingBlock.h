/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPCNNBlock.h>

@class MPSCNNPoolingMax;

@interface VCPCNNPoolingBlock : VCPCNNBlock {

	int _px;
	int _py;
	int _chunk;
	MPSCNNPoolingMax* _mpsPooling;

}
-(BOOL)useGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(BOOL)supportGPU;
-(id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3 ;
-(int)doMaxPoolingChunkFour;
-(int)doMaxPoolingChunkOne;
-(int)forward;
@end
