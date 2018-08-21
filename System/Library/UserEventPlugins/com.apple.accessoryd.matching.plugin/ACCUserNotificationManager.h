/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/UserEventPlugins/com.apple.accessoryd.matching.plugin/com.apple.accessoryd.matching
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSRecursiveLock;

@interface ACCUserNotificationManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _userNotifications;
	NSMutableDictionary* _completionHandlers;
	NSRecursiveLock* _lock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * userNotifications;                      //@synthesize userNotifications=_userNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                //@synthesize lock=_lock - In the implementation block
+(id)sharedManager;
-(void)dismissNotificationWithIdentifier:(id)arg1 ;
-(NSMutableSet *)userNotifications;
-(void)dismissNotification:(id)arg1 ;
-(void)removeUserNotification:(id)arg1 ;
-(void)presentNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)userNotificationWithUUID:(id)arg1 ;
-(void)dismissNotificationsWithGroupIdentifier:(id)arg1 ;
-(void)dismisssAllNotifications;
-(void)setUserNotifications:(NSMutableSet *)arg1 ;
-(id)init;
-(NSRecursiveLock *)lock;
-(NSMutableDictionary *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
@end
