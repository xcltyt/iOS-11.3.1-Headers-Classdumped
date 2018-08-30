//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbExportToiTunes.h"

#import "CbCheckSongOpenAlertDelegate-Protocol.h"

@class NSString, NSURL, UIViewController;

@interface CbExportToiCloudDrive : CbExportToiTunes <CbCheckSongOpenAlertDelegate>
{
    UIViewController *_dummyViewController;
    NSString *_uniqueExportTempPath;
    NSURL *_iCloudDriveExportTempURL;
}

@property(copy, nonatomic) NSURL *iCloudDriveExportTempURL; // @synthesize iCloudDriveExportTempURL=_iCloudDriveExportTempURL;
@property(copy, nonatomic) NSString *uniqueExportTempPath; // @synthesize uniqueExportTempPath=_uniqueExportTempPath;
- (void).cxx_destruct;
- (void)cleanUpControllers;
- (void)startSharingFileAtPath:(id)arg1;
- (void)startSharingAsProjectBundle;
- (void)checkSongOpenAlertDidFinishWithButtonIndex:(long long)arg1 alertInfo:(id)arg2 alertTag:(long long)arg3;
- (void)songExportDidCancel:(id)arg1;
- (void)songExportDidFail:(id)arg1 error:(id)arg2;
- (void)songExportDidFinish:(id)arg1;
- (void)startPublish;
- (void)showWithExportDialogController:(id)arg1;
- (void)show;
- (id)progressString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
