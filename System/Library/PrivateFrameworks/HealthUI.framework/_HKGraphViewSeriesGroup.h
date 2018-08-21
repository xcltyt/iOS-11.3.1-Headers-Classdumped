/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSMutableDictionary, NSMutableArray, _HKGraphViewSelectionContext, _HKGraphViewAxisAnnotationHandler, NSArray, HKLegendView;

@interface _HKGraphViewSeriesGroup : NSObject {

	NSMutableDictionary* _zoomToSeriesMapping;
	NSMutableArray* _currentSeries;
	_HKGraphViewSelectionContext* _selectionContext;
	_HKGraphViewAxisAnnotationHandler* _axisAnnotationHandler;
	NSArray* _axesToShowSimultaneously;
	HKLegendView* _legendView;
	CGSize _lastLegendSize;

}

@property (nonatomic,retain) NSMutableDictionary * zoomToSeriesMapping;                              //@synthesize zoomToSeriesMapping=_zoomToSeriesMapping - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSeries;                                         //@synthesize currentSeries=_currentSeries - In the implementation block
@property (nonatomic,retain) _HKGraphViewSelectionContext * selectionContext;                        //@synthesize selectionContext=_selectionContext - In the implementation block
@property (nonatomic,retain) _HKGraphViewAxisAnnotationHandler * axisAnnotationHandler;              //@synthesize axisAnnotationHandler=_axisAnnotationHandler - In the implementation block
@property (nonatomic,retain) NSArray * axesToShowSimultaneously;                                     //@synthesize axesToShowSimultaneously=_axesToShowSimultaneously - In the implementation block
@property (nonatomic,retain) HKLegendView * legendView;                                              //@synthesize legendView=_legendView - In the implementation block
@property (assign,nonatomic) CGSize lastLegendSize;                                                  //@synthesize lastLegendSize=_lastLegendSize - In the implementation block
-(id)init;
-(_HKGraphViewSelectionContext *)selectionContext;
-(HKLegendView *)legendView;
-(void)setLegendView:(HKLegendView *)arg1 ;
-(void)setLastLegendSize:(CGSize)arg1 ;
-(NSMutableDictionary *)zoomToSeriesMapping;
-(_HKGraphViewAxisAnnotationHandler *)axisAnnotationHandler;
-(NSArray *)axesToShowSimultaneously;
-(CGSize)lastLegendSize;
-(void)setSelectionContext:(_HKGraphViewSelectionContext *)arg1 ;
-(void)setAxesToShowSimultaneously:(NSArray *)arg1 ;
-(void)setZoomToSeriesMapping:(NSMutableDictionary *)arg1 ;
-(void)setAxisAnnotationHandler:(_HKGraphViewAxisAnnotationHandler *)arg1 ;
-(NSMutableArray *)currentSeries;
-(void)setCurrentSeries:(NSMutableArray *)arg1 ;
@end
