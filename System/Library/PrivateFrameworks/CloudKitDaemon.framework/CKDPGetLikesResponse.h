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

@class CKDPLikeInfo, NSMutableArray;

@interface CKDPGetLikesResponse : PBCodable <NSCopying> {

	CKDPLikeInfo* _likeInfo;
	NSMutableArray* _likes;

}

@property (nonatomic,readonly) BOOL hasLikeInfo; 
@property (nonatomic,retain) CKDPLikeInfo * likeInfo;              //@synthesize likeInfo=_likeInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * likes;               //@synthesize likes=_likes - In the implementation block
+(Class)likeType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLikeInfo:(CKDPLikeInfo *)arg1 ;
-(BOOL)hasLikeInfo;
-(CKDPLikeInfo *)likeInfo;
-(void)addLike:(id)arg1 ;
-(unsigned long long)likesCount;
-(void)clearLikes;
-(id)likeAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)likes;
-(void)setLikes:(NSMutableArray *)arg1 ;
@end
