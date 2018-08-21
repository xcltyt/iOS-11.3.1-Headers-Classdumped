/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPaywallDescription : PBCodable <NSCopying> {

	NSString* _channelPaywall;
	NSString* _hardPaywall;
	NSString* _leakyPaywall;
	NSString* _promotionalPaywall;

}

@property (nonatomic,readonly) BOOL hasChannelPaywall; 
@property (nonatomic,retain) NSString * channelPaywall;                  //@synthesize channelPaywall=_channelPaywall - In the implementation block
@property (nonatomic,readonly) BOOL hasLeakyPaywall; 
@property (nonatomic,retain) NSString * leakyPaywall;                    //@synthesize leakyPaywall=_leakyPaywall - In the implementation block
@property (nonatomic,readonly) BOOL hasPromotionalPaywall; 
@property (nonatomic,retain) NSString * promotionalPaywall;              //@synthesize promotionalPaywall=_promotionalPaywall - In the implementation block
@property (nonatomic,readonly) BOOL hasHardPaywall; 
@property (nonatomic,retain) NSString * hardPaywall;                     //@synthesize hardPaywall=_hardPaywall - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasChannelPaywall;
-(BOOL)hasLeakyPaywall;
-(BOOL)hasPromotionalPaywall;
-(BOOL)hasHardPaywall;
-(NSString *)channelPaywall;
-(NSString *)leakyPaywall;
-(NSString *)promotionalPaywall;
-(NSString *)hardPaywall;
-(void)setChannelPaywall:(NSString *)arg1 ;
-(void)setPromotionalPaywall:(NSString *)arg1 ;
-(void)setLeakyPaywall:(NSString *)arg1 ;
-(void)setHardPaywall:(NSString *)arg1 ;
@end
