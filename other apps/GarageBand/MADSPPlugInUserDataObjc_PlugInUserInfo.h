//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MADSPPlugInUserDataObjc_Dictionary.h"

@class NSArray, NSDictionary;

@interface MADSPPlugInUserDataObjc_PlugInUserInfo : MADSPPlugInUserDataObjc_Dictionary
{
}

+ (_Bool)plugInUserInfo:(void *)arg1 hasUsedProperty:(void *)arg2;
+ (_Bool)plugInUserInfo:(void *)arg1 hasUsedParameter:(long long)arg2;
+ (id)plugInUserInfoWithPlugInUserID:(long long)arg1 usedParameters:(id)arg2 properties:(id)arg3;
+ (id)plugInUserInfoWithUserData:(void *)arg1;
- (_Bool)isPropertyUsed:(void *)arg1;
- (_Bool)isParameterUsed:(long long)arg1;
- (void)appendUsedProperty:(void *)arg1;
- (void)appendUsedParameter:(long long)arg1 info:(id)arg2;
@property(copy, nonatomic) NSArray *usedProperties;
@property(copy, nonatomic) NSDictionary *usedParameters;
@property(nonatomic) long long plugInUserID;
- (id)initWithPlugInUserID:(long long)arg1 usedParameters:(id)arg2 properties:(id)arg3;

@end

