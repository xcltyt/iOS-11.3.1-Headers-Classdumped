/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSDictionary, PHAsset;

@interface PHANotificationOptions : NSObject {

	NSString* _title;
	NSString* _subtitle;
	NSString* _bodyText;
	NSDate* _deliveryDate;
	NSDate* _expirationDate;
	NSDictionary* _userInfo;
	PHAsset* _keyAsset;
	NSString* _collectionUUID;

}

@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * bodyText;                    //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,retain) NSDate * deliveryDate;                  //@synthesize deliveryDate=_deliveryDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                     //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) NSString * collectionUUID;              //@synthesize collectionUUID=_collectionUUID - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(NSDate *)deliveryDate;
-(void)setDeliveryDate:(NSDate *)arg1 ;
-(NSString *)collectionUUID;
-(void)setCollectionUUID:(NSString *)arg1 ;
@end
