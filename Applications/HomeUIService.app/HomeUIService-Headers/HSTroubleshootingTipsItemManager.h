//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItemManager.h"

#import "HFAccessoryBrowsingObserver.h"

@class HFAccessoryBrowsingManager, NSString;

@interface HSTroubleshootingTipsItemManager : HFItemManager <HFAccessoryBrowsingObserver>
{
    unsigned long long _page;
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;
}

@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
@property(readonly, nonatomic) unsigned long long page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)_updateItemsDependingOnSharingDevice:(id)arg1;
- (void)_updateItemsDependingOnAccessory:(id)arg1;
- (void)accessoryBrowsingManager:(id)arg1 didRemoveNewSharingDevice:(id)arg2;
- (void)accessoryBrowsingManager:(id)arg1 didFindNewSharingDevice:(id)arg2;
- (void)accessoryBrowsingManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)accessoryBrowsingManager:(id)arg1 didFindNewAccessory:(id)arg2;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (void)_unregisterForExternalUpdates;
- (void)_registerForExternalUpdates;
- (id)initWithDelegate:(id)arg1 page:(unsigned long long)arg2 accessoryBrowsingManager:(id)arg3;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

