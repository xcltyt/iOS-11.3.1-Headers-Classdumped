/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBArticleEngagement : PBCodable <NSCopying> {

	long long _articleOpenedAtTimestamp;
	long long _eventTimestamp;
	int _articleEngagementType;
	NSString* _articleId;
	NSString* _channelId;
	NSString* _countryCode;
	NSData* _sessionId;
	NSString* _userId;
	int _utcOffset;
	BOOL _isPaidSubscriber;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasArticleEngagementType; 
@property (assign,nonatomic) int articleEngagementType;                       //@synthesize articleEngagementType=_articleEngagementType - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSData * sessionId;                              //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                               //@synthesize userId=_userId - In the implementation block
@property (assign,nonatomic) BOOL hasEventTimestamp; 
@property (assign,nonatomic) long long eventTimestamp;                        //@synthesize eventTimestamp=_eventTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                            //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelId; 
@property (nonatomic,retain) NSString * channelId;                            //@synthesize channelId=_channelId - In the implementation block
@property (assign,nonatomic) BOOL hasUtcOffset; 
@property (assign,nonatomic) int utcOffset;                                   //@synthesize utcOffset=_utcOffset - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                          //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasArticleOpenedAtTimestamp; 
@property (assign,nonatomic) long long articleOpenedAtTimestamp;              //@synthesize articleOpenedAtTimestamp=_articleOpenedAtTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriber; 
@property (assign,nonatomic) BOOL isPaidSubscriber;                           //@synthesize isPaidSubscriber=_isPaidSubscriber - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)countryCode;
-(void)setSessionId:(NSData *)arg1 ;
-(BOOL)hasSessionId;
-(NSData *)sessionId;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(void)setEventTimestamp:(long long)arg1 ;
-(void)setHasEventTimestamp:(BOOL)arg1 ;
-(BOOL)hasEventTimestamp;
-(long long)eventTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)articleId;
-(BOOL)hasChannelId;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)hasUserId;
-(NSString *)userId;
-(void)setUtcOffset:(int)arg1 ;
-(void)setHasUtcOffset:(BOOL)arg1 ;
-(BOOL)hasUtcOffset;
-(void)setIsPaidSubscriber:(BOOL)arg1 ;
-(void)setHasIsPaidSubscriber:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriber;
-(int)utcOffset;
-(int)articleEngagementType;
-(void)setArticleEngagementType:(int)arg1 ;
-(void)setHasArticleEngagementType:(BOOL)arg1 ;
-(BOOL)hasArticleEngagementType;
-(void)setArticleOpenedAtTimestamp:(long long)arg1 ;
-(void)setHasArticleOpenedAtTimestamp:(BOOL)arg1 ;
-(BOOL)hasArticleOpenedAtTimestamp;
-(long long)articleOpenedAtTimestamp;
-(BOOL)isPaidSubscriber;
-(void)setChannelId:(NSString *)arg1 ;
-(NSString *)channelId;
@end
