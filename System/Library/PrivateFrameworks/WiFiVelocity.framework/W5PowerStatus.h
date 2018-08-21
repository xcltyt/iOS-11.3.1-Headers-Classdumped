/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface W5PowerStatus : NSObject <NSCopying, NSSecureCoding> {

	int _batteryWarningLevel;
	unsigned _powerStateCaps;
	long long _powerSourceType;
	double _internalBatteryLevel;

}

@property (assign,nonatomic) long long powerSourceType;                //@synthesize powerSourceType=_powerSourceType - In the implementation block
@property (assign,nonatomic) int batteryWarningLevel;                  //@synthesize batteryWarningLevel=_batteryWarningLevel - In the implementation block
@property (assign,nonatomic) double internalBatteryLevel;              //@synthesize internalBatteryLevel=_internalBatteryLevel - In the implementation block
@property (assign,nonatomic) unsigned powerStateCaps;                  //@synthesize powerStateCaps=_powerStateCaps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)powerSourceType;
-(int)batteryWarningLevel;
-(unsigned)powerStateCaps;
-(double)internalBatteryLevel;
-(BOOL)isEqualToPowerStatus:(id)arg1 ;
-(void)setPowerSourceType:(long long)arg1 ;
-(void)setBatteryWarningLevel:(int)arg1 ;
-(void)setPowerStateCaps:(unsigned)arg1 ;
-(void)setInternalBatteryLevel:(double)arg1 ;
@end
