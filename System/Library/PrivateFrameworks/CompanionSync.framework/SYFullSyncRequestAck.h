/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYErrorInfo, SYMessageHeader, NSString;

@interface SYFullSyncRequestAck : PBCodable <NSCopying> {

	SYErrorInfo* _error;
	SYMessageHeader* _header;
	NSString* _inProgressSyncID;
	NSString* _requestSyncID;
	BOOL _accepted;

}

@property (nonatomic,retain) SYMessageHeader * header;                 //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * requestSyncID;                 //@synthesize requestSyncID=_requestSyncID - In the implementation block
@property (assign,nonatomic) BOOL accepted;                            //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) SYErrorInfo * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasInProgressSyncID; 
@property (nonatomic,retain) NSString * inProgressSyncID;              //@synthesize inProgressSyncID=_inProgressSyncID - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasError;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(void)setError:(SYErrorInfo *)arg1 ;
-(SYErrorInfo *)error;
-(void)setRequestSyncID:(NSString *)arg1 ;
-(BOOL)accepted;
-(NSString *)inProgressSyncID;
-(BOOL)hasInProgressSyncID;
-(void)setInProgressSyncID:(NSString *)arg1 ;
-(NSString *)requestSyncID;
-(void)setAccepted:(BOOL)arg1 ;
@end
