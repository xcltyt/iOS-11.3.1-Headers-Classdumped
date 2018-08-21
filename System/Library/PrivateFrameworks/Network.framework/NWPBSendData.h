/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NWPBSendData : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NSData* _messageData;
	unsigned _receiveWindow;
	SCD_Struct_NW24 _has;

}

@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;               //@synthesize clientUUID=_clientUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageData; 
@property (nonatomic,retain) NSData * messageData;                //@synthesize messageData=_messageData - In the implementation block
@property (assign,nonatomic) BOOL hasReceiveWindow; 
@property (assign,nonatomic) unsigned receiveWindow;              //@synthesize receiveWindow=_receiveWindow - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasClientUUID;
-(NSString *)clientUUID;
-(void)setClientUUID:(NSString *)arg1 ;
-(BOOL)hasMessageData;
-(void)setReceiveWindow:(unsigned)arg1 ;
-(void)setHasReceiveWindow:(BOOL)arg1 ;
-(BOOL)hasReceiveWindow;
-(unsigned)receiveWindow;
-(void)setMessageData:(NSData *)arg1 ;
-(NSData *)messageData;
@end
