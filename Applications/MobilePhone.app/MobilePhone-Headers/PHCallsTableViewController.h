//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, TUMetadataCache, TUSearchResults, UIBarButtonItem, UIViewController<PHCallsTableViewControllerDelegate>;

@interface PHCallsTableViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>
{
    TUSearchResults *_searchResults;
    id <PHFrecentCellDelegate> _cellDelegate;
    UIViewController<PHCallsTableViewControllerDelegate> *_controllerDelegate;
    TUMetadataCache *_metadataCache;
    CDUnknownBlockType _searchCompletionBlock;
    UIBarButtonItem *_clearButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *clearButtonItem; // @synthesize clearButtonItem=_clearButtonItem;
@property(copy) CDUnknownBlockType searchCompletionBlock; // @synthesize searchCompletionBlock=_searchCompletionBlock;
@property(retain, nonatomic) TUMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;
@property(nonatomic) __weak UIViewController<PHCallsTableViewControllerDelegate> *controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(nonatomic) __weak id <PHFrecentCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain) TUSearchResults *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (void)idsStatusChanged:(id)arg1;
- (void)metadataCacheDidFinishUpdating:(id)arg1;
- (void)recentCallsDidChange:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)removeRecentCallsAtIndexPaths:(id)arg1;
- (id)searchResultAtIndexPath:(id)arg1;
- (void)deleteRecentCalls:(id)arg1;
- (void)refreshView;
- (void)reloadTableDataWithResults:(id)arg1;
@property(readonly) CDUnknownBlockType searchCompletion;
- (void)fetchCalls;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

