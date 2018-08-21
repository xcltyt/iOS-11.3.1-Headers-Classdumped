/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UMUserSwitchManagement <NSObject>
@required
-(void)switchToLoginUserWithCompletionHandler:(/*^block*/id)arg1;
-(void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)terminateSyncWithCompletionHandler:(/*^block*/id)arg1;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)registerUserSwitchStakeHolder:(id)arg1;
-(void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
-(void)switchToLoginUserWithError:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resumeSync;
-(void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;

@end
