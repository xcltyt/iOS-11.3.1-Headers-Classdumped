/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSArray;

@interface HAPMetadataCharacteristicValue : HMFObject {

	NSNumber* _minValue;
	NSNumber* _maxValue;
	NSNumber* _stepValue;
	NSNumber* _minLength;
	NSNumber* _maxLength;
	NSArray* _validValues;

}

@property (nonatomic,retain) NSNumber * minValue;                  //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,retain) NSNumber * maxValue;                  //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSNumber * minLength;                 //@synthesize minLength=_minLength - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,readonly) NSArray * validValues;              //@synthesize validValues=_validValues - In the implementation block
+(id)initWithDictionary:(id)arg1 ;
-(void)dump;
-(id)description;
-(NSNumber *)maxLength;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(NSNumber *)minLength;
-(void)setMinLength:(NSNumber *)arg1 ;
-(id)generateDictionary;
-(id)initWithMinLength:(id)arg1 maxLength:(id)arg2 ;
-(id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3 validValues:(id)arg4 ;
-(void)setMinValue:(NSNumber *)arg1 ;
-(NSArray *)validValues;
-(NSNumber *)minValue;
-(NSNumber *)maxValue;
-(void)setMaxValue:(NSNumber *)arg1 ;
@end
