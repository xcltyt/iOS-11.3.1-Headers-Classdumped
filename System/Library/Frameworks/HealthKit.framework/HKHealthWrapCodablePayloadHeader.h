/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface HKHealthWrapCodablePayloadHeader : PBCodable <NSCopying> {

	long long _endDate;
	long long _startDate;
	NSData* _applicationData;
	NSString* _channel;
	NSMutableArray* _keyValuePairs;
	NSString* _payloadIdentifier;
	NSString* _payloadType;
	NSData* _subjectUUID;
	SCD_Struct_HK14 _has;

}

@property (nonatomic,readonly) BOOL hasChannel; 
@property (nonatomic,retain) NSString * channel;                          //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) BOOL hasPayloadType; 
@property (nonatomic,retain) NSString * payloadType;                      //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,readonly) BOOL hasSubjectUUID; 
@property (nonatomic,retain) NSData * subjectUUID;                        //@synthesize subjectUUID=_subjectUUID - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL hasPayloadIdentifier; 
@property (nonatomic,retain) NSString * payloadIdentifier;                //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationData; 
@property (nonatomic,retain) NSData * applicationData;                    //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyValuePairs;              //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
+(Class)keyValuePairsType;
-(void)setPayloadType:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasChannel;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setChannel:(NSString *)arg1 ;
-(NSString *)channel;
-(id)dictionaryRepresentation;
-(NSData *)subjectUUID;
-(NSString *)payloadIdentifier;
-(void)setSubjectUUID:(NSData *)arg1 ;
-(BOOL)hasPayloadType;
-(BOOL)hasSubjectUUID;
-(BOOL)hasPayloadIdentifier;
-(void)setApplicationData:(NSData *)arg1 ;
-(BOOL)hasApplicationData;
-(long long)startDate;
-(long long)endDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setEndDate:(long long)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)addKeyValuePairs:(id)arg1 ;
-(unsigned long long)keyValuePairsCount;
-(NSMutableArray *)keyValuePairs;
-(void)clearKeyValuePairs;
-(id)keyValuePairsAtIndex:(unsigned long long)arg1 ;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(NSString *)payloadType;
-(NSData *)applicationData;
@end
