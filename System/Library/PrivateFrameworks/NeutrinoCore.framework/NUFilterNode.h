/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@class NSString;

@interface NUFilterNode : NURenderNode {

	NSString* _filterName;

}

@property (readonly) NSString * filterName;              //@synthesize filterName=_filterName - In the implementation block
-(unsigned long long)hash;
-(id)initWithFilter:(id)arg1 settings:(id)arg2 inputs:(NSDictionary*)arg3 ;
-(id)resolvedNodeWithCachedInputs:(NSDictionary*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(void)nu_updateDigest:(id)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(BOOL)requiresVideoComposition;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithSettings:(id)arg1 inputs:(NSDictionary*)arg2 ;
-(id)initWithFilterName:(id)arg1 settings:(id)arg2 inputs:(NSDictionary*)arg3 ;
-(BOOL)isEqualToRenderNode:(id)arg1 ;
-(BOOL)isGeometryNode;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)descriptionSubClassHook;
-(NSString *)filterName;
@end
