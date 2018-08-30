//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MAUIUniversalPopoverControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CbPopoverTableViewCell, MAUIUniversalPopoverController, NSString;
@protocol CbAddImportMenuViewControllerDelegate;

@interface CbAddImportMenuViewController : UIViewController <MAUIUniversalPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    CbPopoverTableViewCell *_addSongCell;
    CbPopoverTableViewCell *_cpyFromiTunesCell;
    CbPopoverTableViewCell *_importFromiCloudCell;
    id <CbAddImportMenuViewControllerDelegate> _addImportDelegate;
    MAUIUniversalPopoverController *_universalPopoverController;
}

+ (void)dismissAddImportMenuPopover;
+ (void)showAddImportMenuPopoverForRect:(struct CGRect)arg1 inView:(id)arg2 addImportDelegate:(id)arg3;
+ (_Bool)shouldShowImportMenu;
+ (_Bool)iCloudEnabled;
+ (_Bool)anyFilesToImport;
@property(retain, nonatomic) CbPopoverTableViewCell *importFromiCloudCell; // @synthesize importFromiCloudCell=_importFromiCloudCell;
@property(retain, nonatomic) CbPopoverTableViewCell *cpyFromiTunesCell; // @synthesize cpyFromiTunesCell=_cpyFromiTunesCell;
@property(retain, nonatomic) CbPopoverTableViewCell *addSongCell; // @synthesize addSongCell=_addSongCell;
@property __weak MAUIUniversalPopoverController *universalPopoverController; // @synthesize universalPopoverController=_universalPopoverController;
@property __weak id <CbAddImportMenuViewControllerDelegate> addImportDelegate; // @synthesize addImportDelegate=_addImportDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)cleanup;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)updateButtonsAndContentSizeForPopover;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

