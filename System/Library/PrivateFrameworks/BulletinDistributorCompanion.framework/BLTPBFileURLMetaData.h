/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface BLTPBFileURLMetaData : NSObject {

	NSDictionary* _metadata;
	long long _sequenceNumberError;
	unsigned long long _sessionState;
	NSDictionary* _extraMetadata;

}

@property (nonatomic,readonly) NSDictionary * metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) long long sequenceNumberError;                //@synthesize sequenceNumberError=_sequenceNumberError - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionState;              //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,readonly) NSDictionary * extraMetadata;                 //@synthesize extraMetadata=_extraMetadata - In the implementation block
-(unsigned long long)sessionState;
-(NSDictionary *)metadata;
-(NSDictionary *)extraMetadata;
-(long long)sequenceNumberError;
-(id)initWithSequenceNumberManager:(id)arg1 extraMetadata:(id)arg2 ;
-(id)initWithMetadata:(id)arg1 sequenceNumberManager:(id)arg2 ;
@end
