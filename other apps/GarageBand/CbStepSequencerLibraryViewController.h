//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CbStepSequencerLibraryItemCellDelegate-Protocol.h"
#import "CbStepSequencerLibraryViewDelegate-Protocol.h"

@class CbStepSequencerLibraryModel, CbStepSequencerLibraryView, NSDictionary, NSString, UIBarButtonItem, UICollectionView, UITextField;
@protocol CbStepSequencerLibraryPlaybackDelegate;

@interface CbStepSequencerLibraryViewController : UIViewController <CbStepSequencerLibraryViewDelegate, CbStepSequencerLibraryItemCellDelegate>
{
    id <CbStepSequencerLibraryPlaybackDelegate> _playbackDelegate;
    CbStepSequencerLibraryModel *_model;
    CbStepSequencerLibraryView *_libraryView;
    UITextField *_editingNameTextField;
    UIBarButtonItem *_saveButton;
    _Bool _userDidSelectPattern;
    _Bool _editingItems;
}

@property(readonly, nonatomic) _Bool editingItems; // @synthesize editingItems=_editingItems;
- (void).cxx_destruct;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)shouldUpdateItems;
- (void)didSelectItemAtIndexPath:(id)arg1 addUndoStep:(_Bool)arg2;
- (void)selectItem:(id)arg1 addUndoStep:(_Bool)arg2;
- (void)reloadDataAndPageControl;
- (void)updateNavBarButtons;
- (void)toggleEditMode;
- (void)hideLibrary;
- (void)savePattern;
- (void)updateTrackPatternsHidden;
- (void)clearPreviewingUUID;
- (void)updateLibraryViewDisplayContext;
- (unsigned long long)playbackStateForItem:(id)arg1;
- (id)cellReuseIdentifier;
- (Class)cellClass;
- (void)updateNoteModels:(id)arg1;
- (_Bool)shouldShowActiveStepsForModel:(id)arg1;
- (void)didEditItemName:(id)arg1 forModel:(id)arg2 cell:(id)arg3;
- (void)willEditItemNameWithTextField:(id)arg1;
- (void)togglePreviewForModel:(id)arg1 cell:(id)arg2;
- (void)savePatternForModel:(id)arg1;
- (void)deletePatternForModel:(id)arg1;
- (void)authorPatternForModel:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)showTemplates;
- (void)showTrackPatterns;
- (void)didTapDismissKeyboard:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)revertSelectedItem;
- (_Bool)hasUserData;
- (void)selectItem:(id)arg1;
- (_Bool)shouldLoadDefaultPatternForKit;
@property(copy, nonatomic) NSDictionary *libraryData;
- (void)updateTrackItems;
- (void)setTemplateItems:(id)arg1;
- (struct CGPoint)libraryContentOffset;
- (void)scrollToSelectedPattern;
@property(readonly, nonatomic) NSDictionary *previewItemSequenceData;
- (id)selectedItemSequenceData;
@property(readonly, nonatomic) unsigned long long displayContext;
- (id)selectedItem;
@property(readonly, nonatomic) NSString *selectedUUID;
- (void)setSelectedItemSequenceData:(id)arg1;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
