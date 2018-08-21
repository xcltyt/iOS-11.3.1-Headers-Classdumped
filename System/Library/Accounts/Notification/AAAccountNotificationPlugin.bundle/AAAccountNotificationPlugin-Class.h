/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:00:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Accounts/Notification/AAAccountNotificationPlugin.bundle/AAAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class AAFollowUpController, NSString;

@interface AAAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	AAFollowUpController* _followUpController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_secondaryAccountTypes;
-(void)addFMFChildAccountToAccount:(id)arg1 inStore:(id)arg2 ;
-(void)addFMIPChildAccountToAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_notifyIDSProxyOfAppleAccount:(id)arg1 store:(id)arg2 withCommand:(id)arg3 ;
-(id)_saveOptionsForProxiedDeviceAuth;
-(void)_showRedirectToBridgeAlertForAccount:(id)arg1 ;
-(id)init;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end
