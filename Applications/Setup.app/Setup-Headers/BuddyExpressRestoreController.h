//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BuddyChoiceController.h"

@class BuddyChoice, MBManager, NSDateFormatter, NSString, RestorableBackupItem;

@interface BuddyExpressRestoreController : BuddyChoiceController
{
    BuddyChoice *_backupAndRestoreChoice;
    BuddyChoice *_restoreChoice;
    BuddyChoice *_manualChoice;
    NSDateFormatter *_longDateFormatter;
    NSDateFormatter *_shortDateFormatter;
    MBManager *_backupManager;
    NSString *_sourceDeviceName;
    RestorableBackupItem *_backupItem;
}

+ (_Bool)controllerNeedsToRun;
+ (id)cloudConfigSkipKey;
@property(retain, nonatomic) RestorableBackupItem *backupItem; // @synthesize backupItem=_backupItem;
@property(copy, nonatomic) NSString *sourceDeviceName; // @synthesize sourceDeviceName=_sourceDeviceName;
- (void).cxx_destruct;
- (void)queueRestoreWithBackup:(_Bool)arg1;
- (void)didSelectChoice:(id)arg1;
- (void)updateView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;
- (_Bool)shouldAttemptBackupPriorToRestore:(id)arg1;
- (void)setBackupItem:(id)arg1 deviceName:(id)arg2;
- (_Bool)isBackupFromProximityDevice:(id)arg1;
- (_Bool)validateBackupIsCompatible:(id)arg1;
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;
- (id)automaticallySelectedRestorableGetDeviceName:(id *)arg1;

@end
