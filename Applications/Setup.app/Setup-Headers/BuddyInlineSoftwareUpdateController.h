//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BuddySoftwareUpdateController.h"

#import "BuddySoftwareUpdateControllerDelegate.h"

@class NSString;

@interface BuddyInlineSoftwareUpdateController : BuddySoftwareUpdateController <BuddySoftwareUpdateControllerDelegate>
{
}

- (void)softwareUpdateController:(id)arg1 didFailToInstallUpdateWithError:(id)arg2;
- (void)softwareUpdateController:(id)arg1 didStartInstallForUpdate:(id)arg2;
- (void)softwareUpdateController:(id)arg1 prepareToInstallUpdate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)controllerAllowsNavigatingBack;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

