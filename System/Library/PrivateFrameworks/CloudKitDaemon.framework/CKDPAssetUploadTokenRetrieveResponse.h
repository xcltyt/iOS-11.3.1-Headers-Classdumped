/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying> {

	NSData* _authCopyResponse;
	NSData* _authPutResponse;
	NSMutableArray* _contentResponseHeaders;
	NSMutableArray* _uploadTokens;

}

@property (nonatomic,retain) NSMutableArray * uploadTokens;                        //@synthesize uploadTokens=_uploadTokens - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthPutResponse; 
@property (nonatomic,retain) NSData * authPutResponse;                             //@synthesize authPutResponse=_authPutResponse - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentResponseHeaders;              //@synthesize contentResponseHeaders=_contentResponseHeaders - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthCopyResponse; 
@property (nonatomic,retain) NSData * authCopyResponse;                            //@synthesize authCopyResponse=_authCopyResponse - In the implementation block
+(Class)uploadTokensType;
+(Class)contentResponseHeadersType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)authPutResponse;
-(void)setAuthPutResponse:(NSData *)arg1 ;
-(unsigned long long)contentResponseHeadersCount;
-(NSMutableArray *)contentResponseHeaders;
-(NSMutableArray *)uploadTokens;
-(void)addUploadTokens:(id)arg1 ;
-(void)addContentResponseHeaders:(id)arg1 ;
-(unsigned long long)uploadTokensCount;
-(void)clearUploadTokens;
-(id)uploadTokensAtIndex:(unsigned long long)arg1 ;
-(void)clearContentResponseHeaders;
-(id)contentResponseHeadersAtIndex:(unsigned long long)arg1 ;
-(void)setAuthCopyResponse:(NSData *)arg1 ;
-(BOOL)hasAuthPutResponse;
-(BOOL)hasAuthCopyResponse;
-(void)setUploadTokens:(NSMutableArray *)arg1 ;
-(void)setContentResponseHeaders:(NSMutableArray *)arg1 ;
-(NSData *)authCopyResponse;
@end
