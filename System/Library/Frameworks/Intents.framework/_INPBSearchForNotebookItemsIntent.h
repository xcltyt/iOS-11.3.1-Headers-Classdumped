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

@class PBUnknownFields, NSString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation, _INPBDataString;

@interface _INPBSearchForNotebookItemsIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _content;
	int _dateSearchType;
	_INPBDateTimeRange* _dateTime;
	_INPBIntentMetadata* _intentMetadata;
	int _itemType;
	_INPBLocation* _location;
	int _locationSearchType;
	NSString* _notebookItemIdentifier;
	int _status;
	_INPBDataString* _title;
	SCD_Struct_IN8 _has;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) _INPBDataString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) NSString * content;                                //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) BOOL hasItemType; 
@property (assign,nonatomic) int itemType;                                      //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) _INPBLocation * location;                          //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocationSearchType; 
@property (assign,nonatomic) int locationSearchType;                            //@synthesize locationSearchType=_locationSearchType - In the implementation block
@property (nonatomic,readonly) BOOL hasDateTime; 
@property (nonatomic,retain) _INPBDateTimeRange * dateTime;                     //@synthesize dateTime=_dateTime - In the implementation block
@property (assign,nonatomic) BOOL hasDateSearchType; 
@property (assign,nonatomic) int dateSearchType;                                //@synthesize dateSearchType=_dateSearchType - In the implementation block
@property (nonatomic,readonly) BOOL hasNotebookItemIdentifier; 
@property (nonatomic,retain) NSString * notebookItemIdentifier;                 //@synthesize notebookItemIdentifier=_notebookItemIdentifier - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLocation;
-(int)itemType;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setContent:(NSString *)arg1 ;
-(void)setTitle:(_INPBDataString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)content;
-(_INPBDataString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatus:(int)arg1 ;
-(int)status;
-(BOOL)hasContent;
-(id)dictionaryRepresentation;
-(_INPBLocation *)location;
-(BOOL)hasTitle;
-(void)setLocation:(_INPBLocation *)arg1 ;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setDateTime:(_INPBDateTimeRange *)arg1 ;
-(_INPBDateTimeRange *)dateTime;
-(void)setLocationSearchType:(int)arg1 ;
-(void)setDateSearchType:(int)arg1 ;
-(void)setNotebookItemIdentifier:(NSString *)arg1 ;
-(BOOL)hasLocationSearchType;
-(int)locationSearchType;
-(void)setHasLocationSearchType:(BOOL)arg1 ;
-(BOOL)hasDateSearchType;
-(int)dateSearchType;
-(void)setHasDateSearchType:(BOOL)arg1 ;
-(NSString *)notebookItemIdentifier;
-(id)locationSearchTypeAsString:(int)arg1 ;
-(int)StringAsLocationSearchType:(id)arg1 ;
-(id)dateSearchTypeAsString:(int)arg1 ;
-(int)StringAsDateSearchType:(id)arg1 ;
-(BOOL)hasNotebookItemIdentifier;
-(id)itemTypeAsString:(int)arg1 ;
-(int)StringAsItemType:(id)arg1 ;
-(void)setItemType:(int)arg1 ;
-(void)setHasItemType:(BOOL)arg1 ;
-(BOOL)hasItemType;
-(BOOL)hasDateTime;
@end
