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

@class _HKFactorization, _HKDimension, NSString;

@interface HKUnit : NSObject <NSSecureCoding, NSCopying> {

	_HKFactorization* _dimensionReduction;
	_HKFactorization* _baseUnitReduction;
	os_unfair_lock_s _dimensionReductionLock;
	double _reducedProportionalSize;
	double _scaleOffset;

}

@property (nonatomic,readonly) _HKFactorization * _baseUnits; 
@property (nonatomic,readonly) _HKDimension * dimension; 
@property (nonatomic,readonly) double scaleOffset;                         //@synthesize scaleOffset=_scaleOffset - In the implementation block
@property (readonly) NSString * unitString; 
+(BOOL)supportsSecureCoding;
+(id)_nullUnit;
+(id)_foundationBaseUnits;
+(id)_prefixStringForMetricPrefix:(long long)arg1 ;
+(id)moleUnitWithMolarMass:(double)arg1 ;
+(id)moles;
+(id)pascalUnit;
+(id)secondUnitWithMetricPrefix:(long long)arg1 ;
+(id)jouleUnit;
+(id)jouleUnitWithMetricPrefix:(long long)arg1 ;
+(id)siemenUnit;
+(id)_internationalUnitWithMassEquivalent;
+(id)_internationalUnitWithVolumeEquivalent;
+(id)equivalentsUnit;
+(id)ounceUnit;
+(id)poundUnit;
+(id)stoneUnit;
+(id)smallCalorieUnit;
+(id)kilojoulesUnit;
+(id)largeCalorieUnit;
+(id)moleUnitWithMetricPrefix:(long long)arg1 molarMass:(double)arg2 ;
+(id)fluidOunceUSUnit;
+(id)fluidOunceImperialUnit;
+(id)pintUSUnit;
+(id)pintImperialUnit;
+(id)cupUSUnit;
+(id)cupImperialUnit;
+(id)pascalUnitWithMetricPrefix:(long long)arg1 ;
+(id)centimeterOfWaterUnit;
+(id)atmosphereUnit;
+(id)milliseconds;
+(id)dayUnit;
+(id)calorieUnit;
+(id)kelvinUnit;
+(id)siemenUnitWithMetricPrefix:(long long)arg1 ;
+(id)perMilleUnit;
+(id)titerUnit;
+(id)_internationalUnitWithMetricPrefix:(long long)arg1 massEquivalent:(double)arg2 ;
+(id)_internationalUnitWithMassEquivalent:(double)arg1 ;
+(id)_internationalUnitWithMetricPrefix:(long long)arg1 volumeEquivalent:(double)arg2 ;
+(id)_internationalUnitWithVolumeEquivalent:(double)arg1 ;
+(id)equivalentsUnitWithMolarMass:(double)arg1 valence:(long long)arg2 ;
+(id)unitFromMassFormatterUnit:(long long)arg1 ;
+(long long)massFormatterUnitFromUnit:(id)arg1 ;
+(id)unitFromLengthFormatterUnit:(long long)arg1 ;
+(long long)lengthFormatterUnitFromUnit:(id)arg1 ;
+(id)unitFromEnergyFormatterUnit:(long long)arg1 ;
+(long long)energyFormatterUnitFromUnit:(id)arg1 ;
+(BOOL)_isValidUnitString:(id)arg1 ;
+(id)_heightUnitForLocale:(id)arg1 ;
+(id)_distanceUnitForLocale:(id)arg1 ;
+(id)_personMassUnitForLocale:(id)arg1 ;
+(id)_temperatureUnitForLocale:(id)arg1 ;
+(id)_foodEnergyUnitForLocale:(id)arg1 ;
+(id)minuteUnit;
+(id)unitFromString:(id)arg1 ;
+(id)literUnit;
+(id)internationalUnit;
+(id)degreeCelsiusUnit;
+(id)gramUnitWithMetricPrefix:(long long)arg1 ;
+(id)meterUnit;
+(id)kilocalorieUnit;
+(id)countUnit;
+(id)meterUnitWithMetricPrefix:(long long)arg1 ;
+(id)mileUnit;
+(id)yardUnit;
+(id)hourUnit;
+(id)_countPerMinuteUnit;
+(id)footUnit;
+(id)degreeFahrenheitUnit;
+(id)percentUnit;
+(id)inchUnit;
+(id)gramUnit;
+(id)literUnitWithMetricPrefix:(long long)arg1 ;
+(id)_countPerSecondUnit;
+(id)secondUnit;
+(id)millimeterOfMercuryUnit;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_HKDimension *)dimension;
-(BOOL)_isCompatibleWithUnit:(id)arg1 ;
-(id)_foundationUnit;
-(id)_dimensionReduction;
-(_HKFactorization *)_baseUnits;
-(id)unitDividedByUnit:(id)arg1 ;
-(double)_reducedProportionalSize;
-(double)scaleOffset;
-(void)_reduceIfNecessaryWithCycleSet:(id)arg1 ;
-(id)_computeBaseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2 ;
-(id)unitMultipliedByUnit:(id)arg1 ;
-(id)unitRaisedToPower:(long long)arg1 ;
-(id)reciprocalUnit;
-(BOOL)_isMetricDistance;
-(BOOL)_isCompatibleWithDimension:(id)arg1 ;
-(id)_baseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2 ;
-(id)_baseUnitReduction;
-(NSString *)unitString;
-(double)_valueByConvertingValue:(double)arg1 toUnit:(id)arg2 ;
-(BOOL)isNull;
@end
