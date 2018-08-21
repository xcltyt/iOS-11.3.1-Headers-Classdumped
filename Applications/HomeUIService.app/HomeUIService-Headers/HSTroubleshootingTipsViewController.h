//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUItemTableViewController.h"

#import "HSDiscoveredAccessoryGridContentViewControllerDelegate.h"
#import "HSSetupStep.h"
#import "HSSetupTroubleshootingTipCellDelegate.h"

@class HFAccessoryBrowsingManager, HSDiscoveredAccessoryGridContentViewController, HSEntitlementContext, HSTroubleshootingTipsItemManager, NAFuture, NSString;

@interface HSTroubleshootingTipsViewController : HUItemTableViewController <HSSetupTroubleshootingTipCellDelegate, HSDiscoveredAccessoryGridContentViewControllerDelegate, HSSetupStep>
{
    id <HSSetupStepDelegate> _delegate;
    HSEntitlementContext *_entitlementContext;
    HSDiscoveredAccessoryGridContentViewController *_discoveredAccessoriesGridViewController;
}

@property(readonly, nonatomic) HSDiscoveredAccessoryGridContentViewController *discoveredAccessoriesGridViewController; // @synthesize discoveredAccessoriesGridViewController=_discoveredAccessoriesGridViewController;
@property(readonly, nonatomic) HSEntitlementContext *entitlementContext; // @synthesize entitlementContext=_entitlementContext;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_configureDiscoveredAccessoriesGridViewControllerWithAccessoryBrowsingManager:(id)arg1 entitlementContext:(id)arg2;
- (void)_presentAutomaticPairingViewController;
- (void)_presentManualEntryViewController;
@property(readonly, nonatomic) long long setupState;
- (void)discoveredAccessoryGrid:(id)arg1 didSelectDiscoveredAccessory:(id)arg2;
- (void)showManualCodeUIForToubleshootingTipCell:(id)arg1;
- (void)showBridgeSetupForToubleshootingTipCell:(id)arg1;
- (id)childViewControllersToPreload;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager;
@property(readonly, nonatomic) unsigned long long page;
- (id)initWithPage:(unsigned long long)arg1 accessoryBrowsingManager:(id)arg2 entitlementContext:(id)arg3;
- (id)init;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HSTroubleshootingTipsItemManager *itemManager; // @dynamic itemManager;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly) Class superclass;

@end

