/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBRecordBase, NSString;

@interface NTPBArticleListRecord : PBCodable <NSCopying> {

	NSMutableArray* _articleIDs;
	NTPBRecordBase* _base;
	NSString* _metadata;
	int _type;
	SCD_Struct_NT6 _has;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                    //@synthesize base=_base - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIDs;              //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                      //@synthesize metadata=_metadata - In the implementation block
+(Class)articleIDsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setMetadata:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasMetadata;
-(id)dictionaryRepresentation;
-(NTPBRecordBase *)base;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NSString *)metadata;
-(BOOL)hasBase;
-(void)addArticleIDs:(id)arg1 ;
-(void)clearArticleIDs;
-(unsigned long long)articleIDsCount;
-(id)articleIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)articleIDs;
-(void)setArticleIDs:(NSMutableArray *)arg1 ;
@end
