/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBHomeAttributeValue;

@interface _INPBHomeAttribute : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _attributeType;
	_INPBHomeAttributeValue* _attributeValue;
	SCD_Struct_IN1 _has;

}

@property (assign,nonatomic) BOOL hasAttributeType; 
@property (assign,nonatomic) int attributeType;                                     //@synthesize attributeType=_attributeType - In the implementation block
@property (nonatomic,readonly) BOOL hasAttributeValue; 
@property (nonatomic,retain) _INPBHomeAttributeValue * attributeValue;              //@synthesize attributeValue=_attributeValue - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(void)setAttributeType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)attributeType;
-(_INPBHomeAttributeValue *)attributeValue;
-(void)setAttributeValue:(_INPBHomeAttributeValue *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasAttributeType;
-(BOOL)hasAttributeValue;
-(void)setHasAttributeType:(BOOL)arg1 ;
-(id)attributeTypeAsString:(int)arg1 ;
-(int)StringAsAttributeType:(id)arg1 ;
@end
