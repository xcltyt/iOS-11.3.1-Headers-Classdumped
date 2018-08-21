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

@class CLLocation, NSError;

@interface W5SpeedTestResult : NSObject <NSCopying, NSSecureCoding> {

	long long _direction;
	long long _size;
	CLLocation* _location;
	NSError* _error;
	double _speed;

}

@property (assign,nonatomic) long long direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) long long size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) double speed;                     //@synthesize speed=_speed - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)speed;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end
