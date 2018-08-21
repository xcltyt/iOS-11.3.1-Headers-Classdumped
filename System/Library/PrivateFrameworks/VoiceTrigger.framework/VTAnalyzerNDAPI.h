/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@interface VTAnalyzerNDAPI : NSObject {

	IntNovDetect* _novDetect;

}
-(void)dealloc;
-(void)reset;
-(double)getThresholdSAT;
-(int)getSATVectorCount;
-(void)updateSAT;
-(double)_getFloatValueFromConfigurationName:(id)arg1 defaultTo:(double)arg2 ;
-(BOOL)_getBooleanValueFromConfigurationName:(id)arg1 defaultTo:(BOOL)arg2 ;
-(int)_getIntValueFromConfigurationName:(id)arg1 defaultTo:(int)arg2 ;
-(id)_getStringValueFromConfigurationName:(id)arg1 defaultTo:(id)arg2 ;
-(const char*)_getOptionValueFromConfigurationName:(id)arg1 ;
-(void)analyzeWavData:(const short*)arg1 length:(int)arg2 ;
-(const ndresult*)getAnalyzedResult:(unsigned)arg1 ;
-(BOOL)initializeSAT:(id)arg1 ;
-(const ndsvscore*)analyzeSAT:(const float*)arg1 size:(unsigned)arg2 ;
-(const ndsvscore*)getScoreSuperVector:(const float*)arg1 size:(unsigned)arg2 ;
-(void)deleteVectorIndex:(int)arg1 ;
-(double)getTriggerThreshold;
-(double)getSecondChanceThreshold;
-(double)getLoggingThreshold;
-(double)getExtraSamplesAtStart;
-(double)getSecondPassTrailingTime;
-(BOOL)getDoSupervectorSecondaryTest;
-(double)getThresholdPresuperVector;
-(BOOL)getDoSAT;
-(int)getRetrainNumExplicitUtt;
-(int)getRetrainNumImplicitUtt;
-(id)getRetrainSamplingPolicy;
-(double)getRetrainThresholdTrigger;
-(double)getRetrainThresholdSAT;
-(int)getMaximumSpeakerVectors;
-(BOOL)getUseRecognizer;
-(id)getRecognizerConfig;
-(double)getRecognizerThresholdOffset;
-(double)getRecognizerWaitTime;
-(double)getRecognizerScoreScaleFactor;
-(id)getTriggerTokens;
-(BOOL)getUseFallbackThresholdUponTimeout;
-(BOOL)getUseKeywordSpotting;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)resetBest;
-(const ndresult*)getAnalyzedResult;
-(const ndsupervec*)getSuperVectorWithEndPoint:(unsigned)arg1 ;
@end
