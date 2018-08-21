/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface _INPBCallMetricsValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _callDuration;
	double _timeToEstablish;
	SCD_Struct_IN4 _has;

}

@property (assign,nonatomic) BOOL hasTimeToEstablish; 
@property (assign,nonatomic) double timeToEstablish;                         //@synthesize timeToEstablish=_timeToEstablish - In the implementation block
@property (assign,nonatomic) BOOL hasCallDuration; 
@property (assign,nonatomic) double callDuration;                            //@synthesize callDuration=_callDuration - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(void)setCallDuration:(double)arg1 ;
-(void)setHasCallDuration:(BOOL)arg1 ;
-(BOOL)hasCallDuration;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)callDuration;
-(void)setTimeToEstablish:(double)arg1 ;
-(void)setHasTimeToEstablish:(BOOL)arg1 ;
-(BOOL)hasTimeToEstablish;
-(double)timeToEstablish;
@end
