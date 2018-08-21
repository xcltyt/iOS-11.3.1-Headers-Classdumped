/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MBManagerDelegate.h>

@class MBManager;

@interface PCSMobileBackup : NSObject <MBManagerDelegate> {

	MBManager* _backupManager;

}

@property (retain) MBManager * backupManager;              //@synthesize backupManager=_backupManager - In the implementation block
+(id)defaultMobileBackup;
-(MBManager *)backupManager;
-(void)setBackupManager:(MBManager *)arg1 ;
-(id)init;
-(BOOL)isBackupEnabled;
@end
