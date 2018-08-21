/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCHChartInfo, TSCHChartAbstractAreaLayoutItem, TSCHLegendAreaLayoutItem, NSDictionary, TSCHChartModel;

@interface TSCHChartRootLayoutItem : TSCHChartLayoutItem <TSCHUnretainedParent> {

	TSCHChartInfo* mChartInfo;
	TSCHChartAbstractAreaLayoutItem* mChartArea;
	TSCHLegendAreaLayoutItem* mLegend;
	SCD_Struct_TS514 mLayoutSettings;
	CGRect mLegendInnerFrame;
	CGRect mChartInnerFrame;
	BOOL mInResize;
	CGSize mStartingSize;
	NSDictionary* mSeriesIndexedPieWedgeExplosions;
	TSCHChartModel* mChartModel;

}

@property (nonatomic,readonly) TSCHChartAbstractAreaLayoutItem * chartAreaLayoutItem; 
@property (nonatomic,readonly) TSCHLegendAreaLayoutItem * legendAreaLayoutItem; 
@property (nonatomic,copy) NSDictionary * seriesIndexedPieWedgeExplosions; 
@property (nonatomic,copy,readonly) NSDictionary * seriesIndexedPieNormalizedLabelDistancesFromWedgeTips; 
@property (assign,nonatomic) unsigned long long dataSetIndex; 
-(void)setLayoutSettings:(SCD_Struct_TS514)arg1 ;
-(void)clearParent;
-(id)chartInfo;
-(SCD_Struct_TS514)layoutSettings;
-(CGRect)calcDrawingRect;
-(BOOL)isInResize;
-(CGSize)startingSize;
-(void)p_layoutInward;
-(void)p_layoutOutward;
-(void)setLegendSize:(CGSize)arg1 ;
-(id)initWithChartInfo:(id)arg1 ;
-(TSCHChartAbstractAreaLayoutItem *)chartAreaLayoutItem;
-(void)setSeriesIndexedPieWedgeExplosions:(NSDictionary *)arg1 ;
-(id)renderersWithRep:(id)arg1 ;
-(unsigned long long)dataSetIndex;
-(void)setDataSetIndex:(unsigned long long)arg1 ;
-(TSCHLegendAreaLayoutItem *)legendAreaLayoutItem;
-(void)updateLayoutOffset;
-(void)setChartInnerFrame:(CGRect)arg1 legendInnerFrame:(CGRect)arg2 ;
-(void)setChartBodySize:(CGSize)arg1 ;
-(NSDictionary *)seriesIndexedPieWedgeExplosions;
-(NSDictionary *)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
-(CGRect)calcOverhangRect;
-(void)buildSubTree;
-(void)updateLayoutSize;
-(void)p_updatePieWedgeExplosionsFromModel;
-(void)beginResizeWithStartingSize:(CGSize)arg1 ;
-(void)updateSizeDuringResizeTo:(CGSize)arg1 ;
-(void)endResizeOperation;
-(void)invalidateSeriesIndexedPieWedgeExplosions;
-(void)invalidateTransientModel;
-(void)dealloc;
-(id)model;
-(id)root;
-(void)clearAll;
-(id)initWithParent:(id)arg1 ;
@end
