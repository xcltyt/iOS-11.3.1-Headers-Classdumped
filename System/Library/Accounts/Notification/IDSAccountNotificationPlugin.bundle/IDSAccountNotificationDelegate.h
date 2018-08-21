/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:00:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Accounts/Notification/IDSAccountNotificationPlugin.bundle/IDSAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface IDSAccountNotificationDelegate : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _setupRequestPending;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_findExistingIdentityServicesACAccountWithUserName:(id)arg1 inStore:(id)arg2 ;
-(id)_passwordEquivalentTokenOrPasswordFromAccount:(id)arg1 ;
-(void)_iCloudSignInBasedOnAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_iCloudSignOut;
-(void)_iCloudModifyBasedOnUsername:(id)arg1 ;
-(void)_iTunesSignInBasedOnAccount:(id)arg1 ;
-(void)_iTunesSignOut;
-(void)_notifyRemoteDeviceOfIDMSAccountForAccount:(id)arg1 store:(id)arg2 changeType:(int)arg3 ;
-(id)init;
-(void)dealloc;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end
