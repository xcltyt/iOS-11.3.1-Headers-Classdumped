/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MCAggregateLogKey : NSObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long value; 
+(id)bucketSpecificKeys:(unsigned long long)arg1 ;
+(id)keysForAllBuckets;
+(id)debugKeys;
+(id)keys;
+(unsigned long long)bucket;
-(NSString *)name;
-(unsigned long long)value;
@end
