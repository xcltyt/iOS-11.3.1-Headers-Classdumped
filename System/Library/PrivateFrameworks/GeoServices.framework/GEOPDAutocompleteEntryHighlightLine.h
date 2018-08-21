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

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDAutocompleteEntryHighlightLine : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _line;
	NSMutableArray* _spans;

}

@property (nonatomic,readonly) BOOL hasLine; 
@property (nonatomic,retain) NSString * line;                                //@synthesize line=_line - In the implementation block
@property (nonatomic,retain) NSMutableArray * spans;                         //@synthesize spans=_spans - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)spanType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)spans;
-(unsigned long long)spansCount;
-(BOOL)hasLine;
-(void)clearSpans;
-(void)addSpan:(id)arg1 ;
-(id)spanAtIndex:(unsigned long long)arg1 ;
-(void)setSpans:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)line;
-(void)setLine:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end
