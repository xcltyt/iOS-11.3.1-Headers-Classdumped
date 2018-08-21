/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHMultiDataElementShapeLayer;
@class CALayer, TSCHMultiDataAnimatingFrameLayer;

@interface TSCHMultiDataChartRepElement : NSObject {

	CALayer*<TSCHMultiDataElementShapeLayer> mElementLayer;
	TSCHMultiDataAnimatingFrameLayer* mLabelLayer;
	BOOL mElementUndefined;

}

@property (nonatomic,readonly) CALayer*<TSCHMultiDataElementShapeLayer> elementLayer; 
@property (nonatomic,readonly) TSCHMultiDataAnimatingFrameLayer * labelLayer; 
@property (assign,nonatomic) BOOL elementUndefined; 
+(id)elementWithElementLayer:(id)arg1 ;
-(id)initWithElementLayer:(id)arg1 ;
-(void)addAnimationForKey:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 toAnimationInfo:(id)arg4 ;
-(CALayer*<TSCHMultiDataElementShapeLayer>)elementLayer;
-(TSCHMultiDataAnimatingFrameLayer *)labelLayer;
-(BOOL)elementUndefined;
-(void)setElementUndefined:(BOOL)arg1 ;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setOpacity:(double)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(id)initWithLayer:(id)arg1 ;
@end
