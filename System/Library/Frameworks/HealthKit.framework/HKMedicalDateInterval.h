/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKMedicalDate;

@interface HKMedicalDateInterval : NSObject <NSSecureCoding, NSCopying> {

	HKMedicalDate* _startDate;
	HKMedicalDate* _endDate;

}

@property (nonatomic,copy,readonly) HKMedicalDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)medicalDateIntervalWithStartDate:(id)arg1 ;
+(id)medicalDateIntervalWithEndDate:(id)arg1 ;
+(id)medicalDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2 error:(out id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(HKMedicalDate *)startDate;
-(HKMedicalDate *)endDate;
@end
