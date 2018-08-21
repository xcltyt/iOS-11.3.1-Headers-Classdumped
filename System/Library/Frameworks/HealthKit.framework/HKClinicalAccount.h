/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HKClinicalBrandable.h>

@class NSDate, HKClinicalGateway, NSUUID, NSString, HKClinicalBrand;

@interface HKClinicalAccount : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable> {

	BOOL _userEnabled;
	BOOL _needsRelogin;
	NSUUID* _identifier;
	long long _state;
	NSDate* _lastFetchDate;
	NSDate* _lastFullFetchDate;
	HKClinicalGateway* _gateway;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long state;                                        //@synthesize state=_state - In the implementation block
@property (getter=isUserEnabled,nonatomic,readonly) BOOL userEnabled;                  //@synthesize userEnabled=_userEnabled - In the implementation block
@property (nonatomic,readonly) BOOL needsRelogin;                                      //@synthesize needsRelogin=_needsRelogin - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFetchDate;                            //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFullFetchDate;                        //@synthesize lastFullFetchDate=_lastFullFetchDate - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalGateway * gateway;                       //@synthesize gateway=_gateway - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) HKClinicalBrand * brand; 
@property (getter=hasMultipleLocations,nonatomic,readonly) BOOL multiple; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)state;
-(NSUUID *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(BOOL)isUserEnabled;
-(BOOL)needsRelogin;
-(HKClinicalGateway *)gateway;
-(id)initWithIdentifier:(NSUUID*)arg1 state:(long long)arg2 userEnabled:(BOOL)arg3 needsRelogin:(BOOL)arg4 lastFetchDate:(id)arg5 lastFullFetchDate:(id)arg6 gateway:(id)arg7 ;
-(BOOL)hasErrorState;
-(HKClinicalBrand *)brand;
-(NSDate *)lastFetchDate;
-(NSDate *)lastFullFetchDate;
@end
