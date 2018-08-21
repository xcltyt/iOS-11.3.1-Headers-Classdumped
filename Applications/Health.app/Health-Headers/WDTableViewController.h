//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTableViewController.h"

#import "WDTableViewSectionDelegate.h"

@class NSArray, NSString, UITableView, WDProfile;

@interface WDTableViewController : HKTableViewController <WDTableViewSectionDelegate>
{
    NSArray *_tableSections;
    WDProfile *_profile;
}

+ (id)tableViewSectionClasses;
@property(retain) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSArray *tableSections; // @synthesize tableSections=_tableSections;
- (void).cxx_destruct;
- (void)sectionAddedChildViewController:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)reloadSection:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)indexPathForCell:(id)arg1;
- (id)_sectionAtIndexPath:(id)arg1;
- (id)_section:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadTable;
- (void)viewDidLoad;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)_addObservers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) UITableView *tableView;

@end

