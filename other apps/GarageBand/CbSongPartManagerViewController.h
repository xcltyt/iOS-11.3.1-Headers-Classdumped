//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIPopoverPresentationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CbArrangeSongPartsUIController, CbLineView, DfDocument, EcTimer, NSString, UIBarButtonItem, UIButton, UITableView, UIView;

@interface CbSongPartManagerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPopoverPresentationControllerDelegate>
{
    DfDocument *_document;
    CbArrangeSongPartsUIController *_songPartsUIController;
    int _activeSongPartIndex;
    _Bool _inEditingMode;
    long long _tableViewTapCount;
    long long _previousTappedRow;
    EcTimer *_tableViewTapTimer;
    _Bool _isSheet;
    UIView *_buttonsView;
    UITableView *_partsTableView;
    UIButton *_addButton;
    UIButton *_duplicateButton;
    CbLineView *_decoLine1;
    CbLineView *_decoLine2;
}

+ (void)updateTableView;
+ (void)closeSheetNormally;
+ (void)closeSheetOrPopoverImmediatelyWithoutArrangeAnimation;
+ (void)openForPresentingController:(id)arg1 withDocument:(id)arg2 andSongPartsUIController:(id)arg3 forRect:(struct CGRect)arg4 inView:(id)arg5;
@property(nonatomic) _Bool isSheet; // @synthesize isSheet=_isSheet;
@property(retain, nonatomic) CbLineView *decoLine2; // @synthesize decoLine2=_decoLine2;
@property(retain, nonatomic) CbLineView *decoLine1; // @synthesize decoLine1=_decoLine1;
@property(readonly, nonatomic) __weak CbArrangeSongPartsUIController *songPartsUIController; // @synthesize songPartsUIController=_songPartsUIController;
@property(retain, nonatomic) UIButton *duplicateButton; // @synthesize duplicateButton=_duplicateButton;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UITableView *partsTableView; // @synthesize partsTableView=_partsTableView;
@property(retain, nonatomic) UIView *buttonsView; // @synthesize buttonsView=_buttonsView;
- (void).cxx_destruct;
- (void)_closeImmediatelyHandler:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)closeAnimated:(_Bool)arg1;
- (void)willCloseImmediately:(_Bool)arg1;
- (void)modalSheetDoneButtonAction:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)_handleSingleTap:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)phoneGlobalSettingsDoneButtonAction:(id)arg1;
- (void)duplicateButtonAction:(id)arg1;
- (void)addButtonAction:(id)arg1;
- (void)enableEditMode:(id)arg1;
- (void)setEditModeEnabled:(_Bool)arg1;
- (_Bool)canControlSongArchitecture;
- (id)disabledCellTextColor;
- (void)updateTableViewEditing;
- (void)updatePopoverSize;
- (struct CGSize)sizeForPopover;
- (void)updateButtons;
- (void)openSongPartLengthControllerForSongPartIndex:(long long)arg1;
- (void)_setActiveSongPart:(int)arg1 reloadTable:(_Bool)arg2 changeCycleAndSPL:(_Bool)arg3;
- (_Bool)_updateCycleForSongPartIndex:(int)arg1;
- (void)updateCycle;
- (id)currentMarker;
- (id)markerAtIndex:(long long)arg1;
@property(nonatomic) UIBarButtonItem *navbarEditButtonItem;
- (void)dealloc;
- (void)viewDidUnload;
- (void)cleanup;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)synchronizeWithModel;
- (void)synchronizeWithSongPartsUIController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadTable;
- (void)reloadTable:(_Bool)arg1;
- (void)updateTableSelection:(_Bool)arg1;
- (void)_handleDocUIWillClose:(id)arg1;
- (id)localizedMarkerNameForModelName:(id)arg1;
- (id)nibName;
- (id)initWithDocument:(id)arg1 andSongPartsUIController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

