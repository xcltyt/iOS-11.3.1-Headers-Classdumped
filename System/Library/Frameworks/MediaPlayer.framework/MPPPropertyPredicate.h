/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MPPMediaPredicateValue;

@interface MPPPropertyPredicate : PBCodable <NSCopying> {

	int _comparisonType;
	NSString* _property;
	MPPMediaPredicateValue* _value;
	SCD_Struct_MP39 _has;

}

@property (nonatomic,readonly) BOOL hasProperty; 
@property (nonatomic,retain) NSString * property;                         //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) MPPMediaPredicateValue * value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasComparisonType; 
@property (assign,nonatomic) int comparisonType;                          //@synthesize comparisonType=_comparisonType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasValue;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(MPPMediaPredicateValue *)arg1 ;
-(MPPMediaPredicateValue *)value;
-(id)dictionaryRepresentation;
-(void)setProperty:(NSString *)arg1 ;
-(void)setComparisonType:(int)arg1 ;
-(BOOL)hasProperty;
-(BOOL)hasComparisonType;
-(void)setHasComparisonType:(BOOL)arg1 ;
-(NSString *)property;
-(int)comparisonType;
@end
