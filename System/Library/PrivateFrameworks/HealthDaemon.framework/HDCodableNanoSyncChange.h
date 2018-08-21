/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDSyncChange.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, HDCodableEntityIdentifier, NSMutableArray, NSString;

@interface HDCodableNanoSyncChange : PBCodable <HDSyncChange, HDNanoSyncDescription, NSCopying> {

	long long _endAnchor;
	long long _sequence;
	long long _startAnchor;
	HDCodableEntityIdentifier* _entityIdentifier;
	NSMutableArray* _objectDatas;
	int _objectType;
	NSMutableArray* _requiredAnchors;
	BOOL _complete;
	BOOL _speculative;
	SCD_Struct_HD60 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSpeculative,nonatomic,readonly) BOOL speculative; 
@property (nonatomic,readonly) HDSyncAnchorRange syncAnchorRange; 
@property (nonatomic,readonly) NSNumber * sequenceNumber; 
@property (nonatomic,readonly) BOOL done; 
@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) int objectType;                                            //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasStartAnchor; 
@property (assign,nonatomic) long long startAnchor;                                     //@synthesize startAnchor=_startAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasEndAnchor; 
@property (assign,nonatomic) long long endAnchor;                                       //@synthesize endAnchor=_endAnchor - In the implementation block
@property (nonatomic,retain) NSMutableArray * objectDatas;                              //@synthesize objectDatas=_objectDatas - In the implementation block
@property (nonatomic,retain) NSMutableArray * requiredAnchors;                          //@synthesize requiredAnchors=_requiredAnchors - In the implementation block
@property (assign,nonatomic) BOOL hasSpeculative; 
@property (assign,nonatomic) BOOL speculative;                                          //@synthesize speculative=_speculative - In the implementation block
@property (assign,nonatomic) BOOL hasSequence; 
@property (assign,nonatomic) long long sequence;                                        //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) BOOL hasComplete; 
@property (assign,nonatomic) BOOL complete;                                             //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityIdentifier; 
@property (nonatomic,retain) HDCodableEntityIdentifier * entityIdentifier;              //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
+(Class)objectDataType;
+(Class)requiredAnchorsType;
+(id)changeWithNanoSyncEntityClass:(Class)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSNumber *)sequenceNumber;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)done;
-(id)dictionaryRepresentation;
-(BOOL)complete;
-(void)setComplete:(BOOL)arg1 ;
-(id)syncEntityIdentifier;
-(void)addObjectData:(id)arg1 ;
-(unsigned long long)objectDatasCount;
-(void)clearObjectDatas;
-(id)objectDataAtIndex:(unsigned long long)arg1 ;
-(int)objectType;
-(void)setObjectType:(int)arg1 ;
-(void)setHasObjectType:(BOOL)arg1 ;
-(BOOL)hasObjectType;
-(id)objectTypeAsString:(int)arg1 ;
-(int)StringAsObjectType:(id)arg1 ;
-(NSMutableArray *)objectDatas;
-(void)setObjectDatas:(NSMutableArray *)arg1 ;
-(void)setEntityIdentifier:(HDCodableEntityIdentifier *)arg1 ;
-(BOOL)hasEntityIdentifier;
-(HDCodableEntityIdentifier *)entityIdentifier;
-(id)nanoSyncDescription;
-(Class)syncEntityClassForProfile:(id)arg1 ;
-(id)speculativeCopy;
-(void)addRequiredAnchors:(id)arg1 ;
-(unsigned long long)requiredAnchorsCount;
-(void)clearRequiredAnchors;
-(id)requiredAnchorsAtIndex:(unsigned long long)arg1 ;
-(void)setStartAnchor:(long long)arg1 ;
-(void)setHasStartAnchor:(BOOL)arg1 ;
-(BOOL)hasStartAnchor;
-(void)setEndAnchor:(long long)arg1 ;
-(void)setHasEndAnchor:(BOOL)arg1 ;
-(BOOL)hasEndAnchor;
-(void)setSpeculative:(BOOL)arg1 ;
-(void)setHasSpeculative:(BOOL)arg1 ;
-(BOOL)hasSpeculative;
-(void)setSequence:(long long)arg1 ;
-(void)setHasSequence:(BOOL)arg1 ;
-(BOOL)hasSequence;
-(void)setHasComplete:(BOOL)arg1 ;
-(BOOL)hasComplete;
-(long long)startAnchor;
-(long long)endAnchor;
-(NSMutableArray *)requiredAnchors;
-(void)setRequiredAnchors:(NSMutableArray *)arg1 ;
-(BOOL)speculative;
-(long long)sequence;
-(BOOL)isSpeculative;
-(HDSyncAnchorRange)syncAnchorRange;
-(void)setObjects:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 requiredAnchorMap:(id)arg3 ;
-(void)setSequenceNumber:(long long)arg1 done:(BOOL)arg2 ;
-(id)requiredAnchorMapWithProfile:(id)arg1 error:(id*)arg2 ;
-(id)decodedObjectsForProfile:(id)arg1 error:(id*)arg2 ;
@end
