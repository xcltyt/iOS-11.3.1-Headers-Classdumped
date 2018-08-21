/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDeviceInfo, NSMutableArray, NSString;

@interface NTPBPushNotifySubscriptionRequest : PBRequest <NSCopying> {

	NTPBDeviceInfo* _deviceInfo;
	NSMutableArray* _notificationEntitys;
	NSString* _notificationUserId;
	NSString* _userStorefrontId;

}

@property (nonatomic,readonly) BOOL hasNotificationUserId; 
@property (nonatomic,retain) NSString * notificationUserId;                     //@synthesize notificationUserId=_notificationUserId - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfo; 
@property (nonatomic,retain) NTPBDeviceInfo * deviceInfo;                       //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationEntitys;              //@synthesize notificationEntitys=_notificationEntitys - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                       //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
+(Class)notificationEntityType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(BOOL)hasNotificationUserId;
-(NSString *)notificationUserId;
-(void)addNotificationEntity:(id)arg1 ;
-(BOOL)hasDeviceInfo;
-(void)clearNotificationEntitys;
-(unsigned long long)notificationEntitysCount;
-(id)notificationEntityAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)notificationEntitys;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(void)setNotificationUserId:(NSString *)arg1 ;
-(void)setDeviceInfo:(NTPBDeviceInfo *)arg1 ;
-(void)setNotificationEntitys:(NSMutableArray *)arg1 ;
-(NTPBDeviceInfo *)deviceInfo;
@end
