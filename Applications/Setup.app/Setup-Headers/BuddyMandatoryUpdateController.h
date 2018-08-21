//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BFFSplashController.h"

#import "BFFFlowItem.h"
#import "SUManagerClientDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSTimer, SUDescriptor;

@interface BuddyMandatoryUpdateController : BFFSplashController <SUManagerClientDelegate, BFFFlowItem>
{
    _Bool _isUpdateMandatory;
    id <BFFFlowItemDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_updateScanQueue;
    SUDescriptor *_update;
    long long _autoInstallTimeRemaining;
    NSTimer *_autoInstallTimer;
}

+ (_Bool)hasCloudConfiguration;
+ (id)availableUpdate;
+ (_Bool)shouldOfferUpdate:(id)arg1;
+ (_Bool)controllerNeedsToRunForClass:(Class)arg1;
+ (id)cloudConfigSkipKey;
@property(retain) NSTimer *autoInstallTimer; // @synthesize autoInstallTimer=_autoInstallTimer;
@property long long autoInstallTimeRemaining; // @synthesize autoInstallTimeRemaining=_autoInstallTimeRemaining;
@property _Bool isUpdateMandatory; // @synthesize isUpdateMandatory=_isUpdateMandatory;
@property(retain) SUDescriptor *update; // @synthesize update=_update;
@property(retain) NSObject<OS_dispatch_queue> *updateScanQueue; // @synthesize updateScanQueue=_updateScanQueue;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)beginInstall;
- (id)autoInstallAlertMessageForTimeRemaining:(long long)arg1;
- (void)showAutoInstallAlert;
- (void)installNowTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

