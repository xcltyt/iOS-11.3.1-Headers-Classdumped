/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NRPBCompressedData : PBCodable <NSCopying> {

	NSData* _possiblyCompressedData;
	BOOL _compressed;
	SCD_Struct_NR4 _has;

}

@property (assign,nonatomic) BOOL hasCompressed; 
@property (assign,nonatomic) BOOL compressed;                               //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) BOOL hasPossiblyCompressedData; 
@property (nonatomic,retain) NSData * possiblyCompressedData;               //@synthesize possiblyCompressedData=_possiblyCompressedData - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPossiblyCompressedData:(NSData *)arg1 ;
-(NSData *)possiblyCompressedData;
-(BOOL)hasPossiblyCompressedData;
-(void)setHasCompressed:(BOOL)arg1 ;
-(BOOL)hasCompressed;
-(BOOL)compressed;
-(void)setCompressed:(BOOL)arg1 ;
@end
