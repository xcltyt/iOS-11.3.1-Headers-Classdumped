/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:07 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/AppStore.app/Frameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSMetricsImpressionableElementId, NSDictionary, NSMutableArray, NSArray;

@interface SSMetricsImpressionTimesTracker : NSObject {

	SSMetricsImpressionableElementId* _elementId;
	NSDictionary* _metricsBlob;
	NSMutableArray* _mutableTimes;

}

@property (nonatomic,readonly) NSMutableArray * mutableTimes;                                  //@synthesize mutableTimes=_mutableTimes - In the implementation block
@property (nonatomic,copy,readonly) SSMetricsImpressionableElementId * elementId;              //@synthesize elementId=_elementId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metricsBlob;                                //@synthesize metricsBlob=_metricsBlob - In the implementation block
@property (nonatomic,readonly) NSArray * times; 
@property (nonatomic,readonly) BOOL isAppeared; 
-(NSMutableArray *)mutableTimes;
-(NSDictionary *)metricsBlob;
-(BOOL)isAppeared;
-(id)initWithElementId:(id)arg1 metricsBlob:(id)arg2 ;
-(void)trackAppearanceOnDate:(id)arg1 ;
-(void)trackDisappearanceOnDate:(id)arg1 ;
-(id)eventRepresentationWithViewableThreshold:(double)arg1 onDate:(id)arg2 ;
-(id)eventRepresentationOnDate:(id)arg1 ;
-(id)_newTimeWithStart:(double)arg1 end:(double)arg2 ;
-(id)flattenedEventTimesOnDate:(id)arg1 ;
-(id)debugDescription;
-(SSMetricsImpressionableElementId *)elementId;
-(NSArray *)times;
@end
