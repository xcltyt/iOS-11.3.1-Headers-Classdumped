/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBImage, NSString;

@interface BLTPBAppearance : PBCodable <NSCopying> {

	BLTPBImage* _image;
	NSString* _title;
	BOOL _destructive;
	SCD_Struct_BL1 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) BLTPBImage * image;               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL hasDestructive; 
@property (assign,nonatomic) BOOL destructive;                 //@synthesize destructive=_destructive - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setImage:(BLTPBImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)description;
-(NSString *)title;
-(BLTPBImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDestructive:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(BOOL)hasImage;
-(void)setHasDestructive:(BOOL)arg1 ;
-(BOOL)hasDestructive;
-(BOOL)destructive;
@end
