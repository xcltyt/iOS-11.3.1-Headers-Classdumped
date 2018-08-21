/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject {

	WebBookmarksXPCConnection* _connection;

}
-(id)init;
-(void)getSafariWebDataUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllSafariSecurityOriginsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteSafariWebsiteDataRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getSafariDataUsageByteCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearAllSafariHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)scheduleBookmarksDatabaseMaintenance;
-(void)scheduleBookmarksDatabaseMigrationTask;
-(void)scheduleHSTSSuperCookieCleanup;
@end
