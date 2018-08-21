//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BuddyChoiceController.h"

@class BuddyChoice;

@interface BuddyLocationServicesController : BuddyChoiceController
{
    BuddyChoice *_enableChoice;
    BuddyChoice *_disableChoice;
}

+ (void)setSettingEnabled:(_Bool)arg1 presented:(_Bool)arg2;
+ (void)skippedByCloudConfig;
+ (id)cloudConfigSkipKey;
+ (void)_setPersistentPresentedKey:(_Bool)arg1;
+ (_Bool)controllerNeedsToRun;
@property(retain, nonatomic) BuddyChoice *disableChoice; // @synthesize disableChoice=_disableChoice;
@property(retain, nonatomic) BuddyChoice *enableChoice; // @synthesize enableChoice=_enableChoice;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didSelectChoice:(id)arg1;
- (void)startOver;
- (id)init;

@end

