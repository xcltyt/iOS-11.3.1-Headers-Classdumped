/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBURL.h>
@class NSString, NSData;


@protocol _SFPBURL <NSObject>
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)hasAddress;
-(void)setAddress:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSString *)address;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBURL : PBCodable <_SFPBURL, NSSecureCoding> {

	NSString* _address;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * address;                      //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAddress;
-(void)setAddress:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)address;
-(id)initWithNSURL:(id)arg1 ;
-(NSData *)jsonData;
@end
