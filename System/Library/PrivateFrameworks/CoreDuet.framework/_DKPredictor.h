/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying;
@interface _DKPredictor : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
+(int)startingSlotFromDate:(id)arg1 ;
+(int)endingSlotFromDate:(id)arg1 ;
+(id)roundDate:(id)arg1 toUpperQuarterHour:(BOOL)arg2 ;
+(id)predictorLog;
+(id)defaultPeriodAtDate:(id)arg1 ;
+(BOOL)databaseTooYoung:(id)arg1 atDate:(id)arg2 ;
+(id)normalizeDictionaryToCurrentDate:(id)arg1 atDate:(id)arg2 ;
+(id)dateRangeFromDictionary:(id)arg1 atDate:(id)arg2 ;
+(id)predictorWithKnowledgeStore:(id)arg1 ;
-(id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 asOfDate:(id)arg4 ;
-(id)launchLikelihoodForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3 ;
-(id)pluginLikelihood;
-(id)displayOnLikelihood;
-(id)deviceActivityLikelihood;
-(id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 ;
-(id)expectedInBedPeriod;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)launchLikelihoodPredictionForApp:(id)arg1 ;
-(id)initWithKnowledgeStore:(id)arg1 ;
@end
