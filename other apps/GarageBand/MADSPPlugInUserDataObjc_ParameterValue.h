//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MADSPPlugInUserDataObjc_Dictionary.h"

@class NSString;

@interface MADSPPlugInUserDataObjc_ParameterValue : MADSPPlugInUserDataObjc_Dictionary
{
}

+ (id)parameterValueWithPosition:(long long)arg1 floating:(float)arg2 string:(id)arg3 unit:(id)arg4;
+ (id)parameterValueWithUserData:(void *)arg1;
@property(retain, nonatomic) NSString *unit;
@property(retain, nonatomic) NSString *string;
@property(nonatomic) float floating;
@property(nonatomic) long long position;
- (id)initWithPosition:(long long)arg1 floating:(float)arg2 string:(id)arg3 unit:(id)arg4;

@end
