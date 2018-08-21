/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsDiagnosticIncidentEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned long long _value;
	NSString* _detectedName;
	NSString* _effectiveName;
	NSString* _name;
	int _state;
	int _status;
	int _type;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned long long value;                  //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasDetectedName; 
@property (nonatomic,retain) NSString * detectedName;                   //@synthesize detectedName=_detectedName - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveName; 
@property (nonatomic,retain) NSString * effectiveName;                  //@synthesize effectiveName=_effectiveName - In the implementation block
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasName;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(BOOL)hasValue;
-(void)setHasValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(unsigned long long)arg1 ;
-(unsigned long long)value;
-(void)setStatus:(int)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
-(void)setDetectedName:(NSString *)arg1 ;
-(void)setEffectiveName:(NSString *)arg1 ;
-(BOOL)hasDetectedName;
-(BOOL)hasEffectiveName;
-(NSString *)detectedName;
-(NSString *)effectiveName;
@end
