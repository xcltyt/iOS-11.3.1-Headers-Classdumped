/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDExternalActionFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE2* _componentTypes;

}

@property (nonatomic,readonly) unsigned long long componentTypesCount; 
@property (nonatomic,readonly) int* componentTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)componentTypesCount;
-(int*)componentTypes;
-(void)clearComponentTypes;
-(void)addComponentType:(int)arg1 ;
-(int)componentTypeAtIndex:(unsigned long long)arg1 ;
-(void)setComponentTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)componentTypesAsString:(int)arg1 ;
-(int)StringAsComponentTypes:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
