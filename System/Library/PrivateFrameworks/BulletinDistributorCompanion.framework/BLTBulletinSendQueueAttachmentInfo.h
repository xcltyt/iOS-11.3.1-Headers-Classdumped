/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface BLTBulletinSendQueueAttachmentInfo : NSObject {

	NSURL* _url;
	NSString* _key;

}

@property (nonatomic,retain) NSURL * url;               //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * key;              //@synthesize key=_key - In the implementation block
-(NSString *)key;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end
