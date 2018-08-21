/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface FCCKPConfigurationFieldValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _longValue;
	NSData* _bytesValue;
	NSMutableArray* _fieldValues;
	NSMutableArray* _listValues;
	NSString* _stringValue;
	int _type;
	BOOL _boolValue;
	SCD_Struct_FC5 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                       //@synthesize bytesValue=_bytesValue - In the implementation block
@property (assign,nonatomic) BOOL hasBoolValue; 
@property (assign,nonatomic) BOOL boolValue;                            //@synthesize boolValue=_boolValue - In the implementation block
@property (assign,nonatomic) BOOL hasLongValue; 
@property (assign,nonatomic) long long longValue;                       //@synthesize longValue=_longValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                        //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                    //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * fieldValues;              //@synthesize fieldValues=_fieldValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * listValues;               //@synthesize listValues=_listValues - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setHasBoolValue:(BOOL)arg1 ;
-(BOOL)hasBoolValue;
-(double)doubleValue;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)boolValue;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)stringValue;
-(id)dictionaryRepresentation;
-(long long)longValue;
-(void)setFieldValues:(NSMutableArray *)arg1 ;
-(void)setListValues:(NSMutableArray *)arg1 ;
-(void)addFieldValues:(id)arg1 ;
-(void)addListValues:(id)arg1 ;
-(unsigned long long)fieldValuesCount;
-(void)clearFieldValues;
-(id)fieldValuesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)listValuesCount;
-(void)clearListValues;
-(id)listValuesAtIndex:(unsigned long long)arg1 ;
-(void)setHasLongValue:(BOOL)arg1 ;
-(BOOL)hasLongValue;
-(NSMutableArray *)fieldValues;
-(NSMutableArray *)listValues;
-(void)setBytesValue:(NSData *)arg1 ;
-(BOOL)hasBytesValue;
-(NSData *)bytesValue;
-(void)setLongValue:(long long)arg1 ;
@end
