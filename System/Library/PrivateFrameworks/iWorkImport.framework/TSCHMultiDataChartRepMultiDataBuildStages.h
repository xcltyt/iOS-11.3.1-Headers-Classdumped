/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCHMultiDataChartRep;

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject <TSCHUnretainedParent> {

	TSCHMultiDataChartRep* mRep;
	NSRange mStages;
	double mTotalDuration;
	double mDuration;
	unsigned long long mCurrentStage;

}

@property (nonatomic,readonly) unsigned long long currentStage; 
@property (nonatomic,readonly) double duration; 
+(unsigned long long)numberOfFadingBuildStages;
+(unsigned long long)dataSetIndexForRep:(id)arg1 buildStage:(unsigned long long)arg2 ;
+(id)buildStagesWithRep:(id)arg1 stages:(NSRange)arg2 totalDuration:(double)arg3 ;
-(void)clearParent;
-(id)chartLayout;
-(id)initWithRep:(id)arg1 stages:(NSRange)arg2 totalDuration:(double)arg3 ;
-(void)setupLayoutDataSetIndexForCurrentStage;
-(unsigned long long)dataSetIndexForStage:(unsigned long long)arg1 ;
-(BOOL)isBackgroundOnlyStage:(unsigned long long)arg1 ;
-(void)setupLayoutDataSetIndexForNextStage;
-(BOOL)isBackgroundOnly;
-(BOOL)isLastStageBackgroundOnly;
-(BOOL)isFadingInLayers;
-(void)advanceStage;
-(void)dealloc;
-(double)duration;
-(BOOL)hasStage;
-(unsigned long long)currentStage;
@end

