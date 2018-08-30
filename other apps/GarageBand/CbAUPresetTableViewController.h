//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "CbKeyboardOverlayViewDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class CbAUInstKeyboardViewController, CbKeyboardOverlayViewController, CbPluginContainerViewController, DfPlugIn, DfTrack, NSArray, NSMutableDictionary, NSString, UISegmentedControl, UIView;

@interface CbAUPresetTableViewController : UITableViewController <UIPopoverPresentationControllerDelegate, CbKeyboardOverlayViewDelegate>
{
    NSString *_cstFileToRename;
    CbKeyboardOverlayViewController *_inputOverlayViewController;
    UIView *_popoverBackgroundSnapshotView;
    NSMutableDictionary *_cstsToRename;
    UISegmentedControl *_segmentedControl;
    NSArray *_presetsArray;
    DfPlugIn *_plugin;
    CbAUInstKeyboardViewController *_inputMethodViewController;
    CbPluginContainerViewController *_pluginContainerViewController;
    DfTrack *_track;
}

@property(nonatomic) DfTrack *track; // @synthesize track=_track;
@property(nonatomic) CbPluginContainerViewController *pluginContainerViewController; // @synthesize pluginContainerViewController=_pluginContainerViewController;
@property(nonatomic) CbAUInstKeyboardViewController *inputMethodViewController; // @synthesize inputMethodViewController=_inputMethodViewController;
@property(nonatomic) DfPlugIn *plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) NSArray *presetsArray; // @synthesize presetsArray=_presetsArray;
@property(nonatomic) __weak UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)dynamicTypeChangedHandler:(id)arg1;
- (void)segmentedControlValueDidChange:(id)arg1;
- (void)editCSTsAction:(id)arg1;
- (void)saveCSTAction:(id)arg1;
- (void)closeSheetNormally:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)inputOverlayViewController:(id)arg1 finishedWithText:(id)arg2;
- (_Bool)inputOverlayViewController:(id)arg1 shouldFinishWithText:(id)arg2;
- (void)inputOverlayViewControllerCancelled:(id)arg1;
- (void)removePopoverBackgroundSnapshotView;
- (void)showKeyboardWithString:(id)arg1;
- (id)settingsFolderPath;
- (id)pstFolderPath;
- (id)cstFolderPath;
- (_Bool)showFactoryContent;
- (void)dealloc;
- (void)viewDidUnload;
- (void)cleanUp;
- (struct CGSize)sizeForPopover;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPlugin:(id)arg1 andPluginContainerViewController:(id)arg2;
- (id)initWithPlugin:(id)arg1 andInputMethodViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

