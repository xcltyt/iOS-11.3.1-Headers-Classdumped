/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DLinkablePipeline.h>

@protocol TSCH3DPipelineLinkable;
@class TSCH3DGLFramebuffer;

@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline {

	id<TSCH3DPipelineLinkable> mSource;
	TSCH3DGLFramebuffer* mTarget;
	TSCH3DGLFramebuffer* mInput;

}

@property (nonatomic,retain) id<TSCH3DPipelineLinkable> source; 
@property (nonatomic,retain) TSCH3DGLFramebuffer * target; 
-(void)loadSource;
-(BOOL)prepareFramebuffer;
-(void)dealloc;
-(void)setSource:(id<TSCH3DPipelineLinkable>)arg1 ;
-(TSCH3DGLFramebuffer *)target;
-(void)setTarget:(TSCH3DGLFramebuffer *)arg1 ;
-(id<TSCH3DPipelineLinkable>)source;
-(BOOL)run;
@end
