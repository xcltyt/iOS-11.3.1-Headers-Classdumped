/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DVector;

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject {

	TSCH3DChartSceneAreaLayoutItemCacheValues mValues;
	TSCH3DVector* _containingViewportVector;

}

@property (nonatomic,readonly) tvec4<float> infoChartScale; 
@property (nonatomic,readonly) tvec2<int> containingViewport; 
@property (nonatomic,readonly) TSCH3DVector * containingViewportVector;                               //@synthesize containingViewportVector=_containingViewportVector - In the implementation block
@property (nonatomic,readonly) tvec2<float> chartBodyLayoutOffsetInChartAreaLayoutSpace; 
@property (nonatomic,readonly) CGSize layoutSize; 
@property (nonatomic,readonly) CGSize requestLayoutSize; 
@property (nonatomic,readonly) CGSize chartBodyLayoutSize; 
@property (nonatomic,readonly) CGSize requestChartBodyLayoutSize; 
@property (nonatomic,readonly) tvec2<int> modelSize; 
@property (nonatomic,readonly) SCD_Struct_TS514 layoutSettings; 
@property (nonatomic,readonly) BOOL forcedValid; 
+(id)cacheWithCacheValues:(const TSCH3DChartSceneAreaLayoutItemCacheValues*)arg1 ;
-(TSCH3DVector *)containingViewportVector;
-(tvec2<int>)containingViewport;
-(SCD_Struct_TS514)layoutSettings;
-(CGSize)chartBodyLayoutSize;
-(BOOL)forcedValid;
-(tvec4<float>)infoChartScale;
-(tvec2<float>)chartBodyLayoutOffsetInChartAreaLayoutSpace;
-(tvec2<int>)modelSize;
-(CGSize)requestLayoutSize;
-(CGSize)requestChartBodyLayoutSize;
-(id)initWithCacheValues:(const TSCH3DChartSceneAreaLayoutItemCacheValues*)arg1 ;
-(void)printDebug;
-(id)init;
-(const TSCH3DChartSceneAreaLayoutItemCacheValues*)values;
-(CGSize)layoutSize;
@end
