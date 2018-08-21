/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSError;

@interface WFResponse : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _type;
	NSError* _error;
	double _executionTime;

}

@property (assign,nonatomic) double executionTime;              //@synthesize executionTime=_executionTime - In the implementation block
@property (readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (retain) NSError * error;                             //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithIdentifier:(id)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)type;
-(id)initWithIdentifier:(id)arg1 ;
-(double)executionTime;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setExecutionTime:(double)arg1 ;
@end
