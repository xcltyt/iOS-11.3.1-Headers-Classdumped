/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class KNAnimatedSlideView, KNPlaybackSession;

@interface KNOffscreenController : NSObject {

	KNAnimatedSlideView* _animatedSlideView;
	KNPlaybackSession* _session;
	CGSize _outputSize;

}

@property (nonatomic,__weak,readonly) KNAnimatedSlideView * animatedSlideView;              //@synthesize animatedSlideView=_animatedSlideView - In the implementation block
@property (nonatomic,readonly) KNPlaybackSession * session;                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                                           //@synthesize outputSize=_outputSize - In the implementation block
-(KNAnimatedSlideView *)animatedSlideView;
-(id)initWithShow:(id)arg1 canvasDelegate:(id)arg2 outputSize:(CGSize)arg3 ;
-(CGImageRef)copyImageOfCurrentEventIgnoringBuildVisilibity:(BOOL)arg1 ;
-(id)initWithShow:(id)arg1 canvasDelegate:(id)arg2 ;
-(BOOL)gotoSlideNode:(id)arg1 andEvent:(unsigned long long)arg2 ;
-(void)generateImageOfCurrentEventWithCompletonHandler:(/*^block*/id)arg1 ;
-(void)drawCurrentEventIntoContext:(CGContextRef)arg1 intoRect:(CGRect)arg2 ignoreBuildVisibility:(BOOL)arg3 ;
-(void)dealloc;
-(KNPlaybackSession *)session;
-(CGSize)outputSize;
@end
