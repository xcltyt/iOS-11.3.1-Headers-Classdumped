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

@class NSString;

@interface HKNanoSyncPairedDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sourceBundleIdentifier;
	NSString* _systemBuildVersion;
	NSString* _productType;
	unsigned long long _state;
	int _protocolVersion;

}

@property (copy,readonly) NSString * sourceBundleIdentifier; 
@property (copy,readonly) NSString * systemBuildVersion; 
@property (copy,readonly) NSString * productType; 
@property (getter=isActive,readonly) BOOL active; 
@property (getter=isRestoreComplete,readonly) BOOL restoreComplete; 
@property (readonly) int protocolVersion; 
+(BOOL)supportsSecureCoding;
-(int)protocolVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isActive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)systemBuildVersion;
-(NSString *)productType;
-(NSString *)sourceBundleIdentifier;
-(BOOL)isRestoreComplete;
-(id)initWithSourceBundleIdentifier:(id)arg1 systemBuildVersion:(id)arg2 productType:(id)arg3 active:(BOOL)arg4 restoreComplete:(BOOL)arg5 protocolVersion:(int)arg6 ;
@end
