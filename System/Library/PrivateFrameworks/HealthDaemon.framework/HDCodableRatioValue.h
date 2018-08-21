/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableCodedQuantity;

@interface HDCodableRatioValue : PBCodable <NSCopying> {

	HDCodableCodedQuantity* _denominator;
	HDCodableCodedQuantity* _numerator;

}

@property (nonatomic,readonly) BOOL hasNumerator; 
@property (nonatomic,retain) HDCodableCodedQuantity * numerator;                //@synthesize numerator=_numerator - In the implementation block
@property (nonatomic,readonly) BOOL hasDenominator; 
@property (nonatomic,retain) HDCodableCodedQuantity * denominator;              //@synthesize denominator=_denominator - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setNumerator:(HDCodableCodedQuantity *)arg1 ;
-(void)setDenominator:(HDCodableCodedQuantity *)arg1 ;
-(BOOL)hasNumerator;
-(BOOL)hasDenominator;
-(HDCodableCodedQuantity *)numerator;
-(HDCodableCodedQuantity *)denominator;
@end
