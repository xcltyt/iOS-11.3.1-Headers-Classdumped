/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PBBProtoWarrantySentinel : PBCodable <NSCopying> {

	NSMutableArray* _appleLanguages;
	NSString* _appleLocale;
	NSString* _deviceName;
	BOOL _removeSentinel;
	BOOL _sentinelExists;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) BOOL hasSentinelExists; 
@property (assign,nonatomic) BOOL sentinelExists;                          //@synthesize sentinelExists=_sentinelExists - In the implementation block
@property (assign,nonatomic) BOOL hasRemoveSentinel; 
@property (assign,nonatomic) BOOL removeSentinel;                          //@synthesize removeSentinel=_removeSentinel - In the implementation block
@property (nonatomic,retain) NSMutableArray * appleLanguages;              //@synthesize appleLanguages=_appleLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasAppleLocale; 
@property (nonatomic,retain) NSString * appleLocale;                       //@synthesize appleLocale=_appleLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                        //@synthesize deviceName=_deviceName - In the implementation block
+(Class)appleLanguagesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)hasDeviceName;
-(void)addAppleLanguages:(id)arg1 ;
-(unsigned long long)appleLanguagesCount;
-(void)clearAppleLanguages;
-(id)appleLanguagesAtIndex:(unsigned long long)arg1 ;
-(void)setAppleLocale:(NSString *)arg1 ;
-(BOOL)hasAppleLocale;
-(NSMutableArray *)appleLanguages;
-(void)setAppleLanguages:(NSMutableArray *)arg1 ;
-(NSString *)appleLocale;
-(void)setSentinelExists:(BOOL)arg1 ;
-(void)setHasSentinelExists:(BOOL)arg1 ;
-(BOOL)hasSentinelExists;
-(void)setRemoveSentinel:(BOOL)arg1 ;
-(void)setHasRemoveSentinel:(BOOL)arg1 ;
-(BOOL)hasRemoveSentinel;
-(BOOL)sentinelExists;
-(BOOL)removeSentinel;
-(NSString *)deviceName;
@end
