/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationServiceConnectionObserver.h>

@protocol UNRemoteNotificationRegistrarDelegate;
@class NSString;

@interface UNRemoteNotificationRegistrar : NSObject <UNUserNotificationServiceConnectionObserver> {

	NSString* _bundleIdentifier;
	id<UNRemoteNotificationRegistrarDelegate> _delegate;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<UNRemoteNotificationRegistrarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentRegistrar;
-(id)init;
-(id<UNRemoteNotificationRegistrarDelegate>)delegate;
-(void)setDelegate:(id<UNRemoteNotificationRegistrarDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)requestTokenForRemoteNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getAllowsRemoteNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)invalidateTokenForRemoteNotifications;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end
