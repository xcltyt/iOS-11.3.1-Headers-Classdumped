//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BFFFlowItem.h"

@class NSString;

@interface BuddyProximityApplyPasscodeController : UIViewController <BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;
}

+ (_Bool)controllerNeedsToRun;
+ (id)cloudConfigSkipKey;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
