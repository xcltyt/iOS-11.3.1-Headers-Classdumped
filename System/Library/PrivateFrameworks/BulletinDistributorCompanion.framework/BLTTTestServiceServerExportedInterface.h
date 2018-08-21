/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTTTestServiceServerExportedInterface <NSObject>
@required
-(void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(BOOL)arg6 completion:(/*^block*/id)arg7;
-(void)sendSectionInfoWithSectionID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)sendAllSectionInfoWithSpool:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)spoolSectionInfoWithCompletion:(/*^block*/id)arg1;
-(void)clearSectionInfoSentCacheWithCompletion:(/*^block*/id)arg1;
-(void)getStandaloneTestModeEnabledWithCompletion:(/*^block*/id)arg1;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(/*^block*/id)arg5;
-(void)disableStandaloneTestModeWithCompletion:(/*^block*/id)arg1;
-(void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)settingOverridesWithCompletion:(/*^block*/id)arg1;
-(void)originalSettingsWithCompletion:(/*^block*/id)arg1;
-(void)overriddenSettingsWithCompletion:(/*^block*/id)arg1;
-(void)removeSectionID:(id)arg1 completion:(/*^block*/id)arg2;

@end
