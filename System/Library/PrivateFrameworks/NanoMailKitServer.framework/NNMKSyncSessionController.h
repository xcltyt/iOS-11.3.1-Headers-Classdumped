/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface NNMKSyncSessionController : NSObject {

	NSMutableSet* _messageIdsToIgnoreStatusUpdates;
	NSMutableDictionary* _notificationPayloadAcks;

}

@property (nonatomic,retain) NSMutableSet * messageIdsToIgnoreStatusUpdates;              //@synthesize messageIdsToIgnoreStatusUpdates=_messageIdsToIgnoreStatusUpdates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationPayloadAcks;               //@synthesize notificationPayloadAcks=_notificationPayloadAcks - In the implementation block
-(id)init;
-(NSMutableSet *)messageIdsToIgnoreStatusUpdates;
-(void)setMessageIdsToIgnoreStatusUpdates:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)notificationPayloadAcks;
-(void)setNotificationPayloadAcks:(NSMutableDictionary *)arg1 ;
@end
