/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTransitIncidentItem : PBCodable <NSCopying> {

	NSString* _transitIncidentTitle;
	NSString* _transitLineMuid;

}

@property (nonatomic,readonly) BOOL hasTransitIncidentTitle; 
@property (nonatomic,retain) NSString * transitIncidentTitle;              //@synthesize transitIncidentTitle=_transitIncidentTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitLineMuid; 
@property (nonatomic,retain) NSString * transitLineMuid;                   //@synthesize transitLineMuid=_transitLineMuid - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTransitLineMuid:(NSString *)arg1 ;
-(BOOL)hasTransitLineMuid;
-(NSString *)transitLineMuid;
-(BOOL)hasTransitIncidentTitle;
-(NSString *)transitIncidentTitle;
-(void)setTransitIncidentTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
