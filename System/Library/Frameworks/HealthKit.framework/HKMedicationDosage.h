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

@class NSString, HKMedicalDateInterval;

@interface HKMedicationDosage : NSObject <NSSecureCoding, NSCopying> {

	NSString* _instruction;
	HKMedicalDateInterval* _timingPeriod;

}

@property (nonatomic,copy,readonly) NSString * instruction;                            //@synthesize instruction=_instruction - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDateInterval * timingPeriod;              //@synthesize timingPeriod=_timingPeriod - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dosageWithInstruction:(id)arg1 timingPeriod:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithInstruction:(id)arg1 timingPeriod:(id)arg2 ;
-(NSString *)instruction;
-(HKMedicalDateInterval *)timingPeriod;
@end
