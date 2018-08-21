/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKDateBounded.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDateInterval, NSString;

@interface _HKSleepQueryResult : NSObject <_HKDateBounded, NSSecureCoding> {

	NSDictionary* _resultsByCategoryValue;
	NSDictionary* _samplesBySource;
	NSDateInterval* _dateInterval;
	NSDateInterval* _resultInterval;

}

@property (nonatomic,readonly) NSDateInterval * resultInterval;              //@synthesize resultInterval=_resultInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)samplesForSamplesBySource:(id)arg1 ;
+(id)dateIntervalForSamples:(id)arg1 ;
+(id)_preferredSourceFromSources:(id)arg1 sourceOrder:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dateIntervalsForCategoryValue:(long long)arg1 ;
-(id)initWithResultInterval:(id)arg1 dateIntervalsByCategoryValue:(id)arg2 samplesBySource:(id)arg3 ;
-(id)preferredDateIntervals;
-(BOOL)_calculatePreferredDuration:(double*)arg1 categoryValue:(long long*)arg2 ;
-(NSDateInterval *)resultInterval;
-(id)startDate;
-(id)endDate;
-(id)dateInterval;
@end
