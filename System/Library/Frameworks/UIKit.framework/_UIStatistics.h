/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface _UIStatistics : NSObject {

	NSString* _key;
	double _sampleValue;
	NSMutableSet* _children;
	double _sampleRate;

}

@property (assign,nonatomic) double sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
+(id)controlValueChangeEmittedCountWithCategory:(id)arg1 suffix:(id)arg2 ;
+(id)scrollViewVerticalVelocityInteractive;
+(id)scrollViewVerticalVelocityNoninteractive;
+(id)scrollBounceCount;
+(id)previewInteractionTapCount;
+(unsigned long long)currentTime;
+(id)previewInteractionPeekCount;
+(id)previewInteractionPeekDuration;
+(id)previewInteractionPopCount;
+(id)maxForce;
+(id)previewInteractionAlertPresentationCount;
+(id)coverSheetButtonInteractionCountWithActivation:(BOOL)arg1 category:(id)arg2 ;
+(id)coverSheetButtonInteractionDurationWithCategory:(id)arg1 ;
+(id)coverSheetButtonFirstActivationDurationWithCategory:(id)arg1 ;
+(id)coverSheetButtonMaximumForceWithActivation:(BOOL)arg1 category:(id)arg2 ;
+(id)_sharedStatisticWithDomain:(id)arg1 statisticsClass:(Class)arg2 identifierReporting:(long long)arg3 ;
+(id)controlTapCountWithCategory:(id)arg1 suffix:(id)arg2 ;
+(id)previewInteractionPeekForce;
+(id)previewInteractionPopForce;
+(id)scrubberUsageCount;
+(id)scrubberUsageTime;
+(id)controlInteractionDurationDistributionWithCategory:(id)arg1 suffix:(id)arg2 ;
+(id)alertButtonTapCount;
+(id)pinchGestureCount;
+(id)zoomGestureCount;
+(id)feedbackEngineActivationCountWithSuffix:(id)arg1 ;
+(id)feedbackEngineActivationDurationWithSuffix:(id)arg1 ;
+(id)feedbackEnginePrewarmCountWithSuffix:(id)arg1 ;
+(id)feedbackEnginePrewarmDurationWithSuffix:(id)arg1 ;
+(id)feedbackEngineOutOfChannelsCountWithSuffix:(id)arg1 ;
+(id)feedbackGeneratorActivationCountWithSuffix:(id)arg1 ;
+(id)feedbackGeneratorActivationDurationWithSuffix:(id)arg1 ;
+(id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)arg1 ;
+(id)feedbackGeneratorPreparationCountWithSuffix:(id)arg1 ;
+(id)feedbackGeneratorPlayCountWithSuffix:(id)arg1 ;
+(id)recentsInputViewPresentationCount;
+(id)recentsInputViewNumberOfItems;
+(id)recentsInputViewItemSelectedCount;
+(id)recentsInputViewNewEntryCount;
-(id)init;
-(id)description;
-(id)_key;
-(void)setSampleRate:(double)arg1 ;
-(id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2 ;
-(void)_resetDistribution;
-(BOOL)_shouldSample;
-(void)_resetDistributionToValue:(double)arg1 ;
-(void)_resetValue;
-(void)_recordDistributionValue:(double)arg1 ;
-(void)_recordDistributionTime:(unsigned long long)arg1 ;
-(void)_setValue:(long long)arg1 ;
-(void)_incrementValueBy:(long long)arg1 ;
-(id)initWithDomain:(id)arg1 ;
-(void)_addChildStatistic:(id)arg1 ;
-(void)_removeChildStatistic:(id)arg1 ;
-(void)randomizeSampleValue;
-(double)sampleRate;
@end
