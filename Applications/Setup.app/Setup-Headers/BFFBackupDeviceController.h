//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError, NSObject<BFFBackupDeviceControllerDelegate>, NSString;

@interface BFFBackupDeviceController : NSObject
{
    _Bool _backingUp;
    _Bool _backupFinished;
    _Bool _backupStateUnknown;
    NSObject<BFFBackupDeviceControllerDelegate> *_delegate;
    NSError *_error;
    double _percentComplete;
    double _timeRemaining;
    NSDate *_completionDate;
    NSString *_backingUpDeviceName;
    NSString *_backingUpDeviceUUID;
}

@property(copy) NSString *backingUpDeviceUUID; // @synthesize backingUpDeviceUUID=_backingUpDeviceUUID;
@property(copy) NSString *backingUpDeviceName; // @synthesize backingUpDeviceName=_backingUpDeviceName;
@property _Bool backupStateUnknown; // @synthesize backupStateUnknown=_backupStateUnknown;
@property(retain) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(retain) NSError *error; // @synthesize error=_error;
@property _Bool backupFinished; // @synthesize backupFinished=_backupFinished;
@property(getter=isBackingUp) _Bool backingUp; // @synthesize backingUp=_backingUp;
@property __weak NSObject<BFFBackupDeviceControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)receivedBackupAction:(id)arg1;
- (void)reset;
- (void)retryBackup;
- (void)startBackupDevice:(id)arg1 UUID:(id)arg2;
- (void)dealloc;
- (id)init;

@end
