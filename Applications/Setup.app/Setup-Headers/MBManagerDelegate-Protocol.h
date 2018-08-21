//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MBManager, NSError, NSSet, NSString;

@protocol MBManagerDelegate

@optional
- (void)managerDidUpdateBackgroundRestoreProgress:(MBManager *)arg1;
- (void)managerDidLoseConnectionToService:(MBManager *)arg1;
- (void)manager:(MBManager *)arg1 didFailVerificationWithError:(NSError *)arg2;
- (void)manager:(MBManager *)arg1 didFailRestoreForPath:(NSString *)arg2 withError:(NSError *)arg3;
- (void)manager:(MBManager *)arg1 didFailRestoreWithError:(NSError *)arg2;
- (void)manager:(MBManager *)arg1 didFailScanWithError:(NSError *)arg2;
- (void)manager:(MBManager *)arg1 didFailBackupWithError:(NSError *)arg2;
- (void)managerDidFinishVerification:(MBManager *)arg1;
- (void)managerDidCancelRestore:(MBManager *)arg1;
- (void)manager:(MBManager *)arg1 didFinishRestoreForPath:(NSString *)arg2;
- (void)managerDidFinishRestore:(MBManager *)arg1;
- (void)manager:(MBManager *)arg1 didScanFiles:(NSSet *)arg2 forDomainWithName:(NSString *)arg3 bundleID:(NSString *)arg4;
- (void)manager:(MBManager *)arg1 didScanDomainWithName:(NSString *)arg2 forBundleID:(NSString *)arg3 bytesUsed:(unsigned long long)arg4;
- (void)manager:(MBManager *)arg1 didScanBundleWithID:(NSString *)arg2 bytesUsed:(unsigned long long)arg3;
- (void)managerDidFinishScan:(MBManager *)arg1;
- (void)managerDidFinishBackup:(MBManager *)arg1;
- (void)manager:(MBManager *)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3;
- (void)manager:(MBManager *)arg1 didSetBackupEnabled:(_Bool)arg2;
@end

