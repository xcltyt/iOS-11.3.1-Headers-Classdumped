/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBNetworkSession : PBCodable <NSCopying> {

	unsigned long long _sessionID;
	int _cellularRadioAccessTechnology;
	BOOL _wifiReachable;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;                       //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasWifiReachable; 
@property (assign,nonatomic) BOOL wifiReachable;                                 //@synthesize wifiReachable=_wifiReachable - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                  //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionID:(unsigned long long)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(unsigned long long)sessionID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(void)setHasWifiReachable:(BOOL)arg1 ;
-(BOOL)hasWifiReachable;
-(void)setWifiReachable:(BOOL)arg1 ;
-(int)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(BOOL)wifiReachable;
@end
