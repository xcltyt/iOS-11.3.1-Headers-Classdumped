//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "APDCoachingTipManagerDelegate-Protocol.h"
#import "CbHelpOverlayPageProvider-Protocol.h"
#import "CbKeyboardOverlayViewDelegate-Protocol.h"
#import "CbMediaImportControllerNormalModalModeDelegate-Protocol.h"
#import "CbTronCellViewDelegate-Protocol.h"
#import "CbTronTrackHeaderTrackUpdateDelegate-Protocol.h"
#import "CbTronViewControllerCategoryImplementation-Protocol.h"
#import "DfClipObserver-Protocol.h"
#import "MAUIScrollViewDelegate-Protocol.h"
#import "UIDocumentPickerDelegate-Protocol.h"
#import "UIDropInteractionDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class APDCoachingTipsManager, CADisplayLink, CALayer, CbFileImportFileDragInfo, CbKeyboardOverlayViewController, CbMediaImportController, CbMediaImportHelper, CbObjectMatrix, CbSongMainViewController, CbTronCellMasterView, CbTronCellView, CbTronScrollView, CbTronToolsViewController, CbTronTrackHeaderViewController, DfClip, DfDocument, DfTrack, NSArray, NSLayoutConstraint, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, UIButton, UIColor, UIImageView, UIView;

@interface CbTronViewController : UIViewController <CbTronViewControllerCategoryImplementation, CbKeyboardOverlayViewDelegate, CbMediaImportControllerNormalModalModeDelegate, CbTronTrackHeaderTrackUpdateDelegate, UIDocumentPickerDelegate, CbHelpOverlayPageProvider, APDCoachingTipManagerDelegate, DfClipObserver, UIDropInteractionDelegate, CbTronCellViewDelegate, MAUIScrollViewDelegate, UIPopoverPresentationControllerDelegate>
{
    _Bool _dropSessionNeedsCleanup;
    CbSongMainViewController *_songMainViewController;
    DfDocument *_document;
    CbTronCellView *_currentMediaImportCell;
    CbTronCellView *_lastLoopImportCell;
    _Bool _importingFileToGridOrDuplicatingTrackAndRow;
    NSMutableDictionary *_cellsForClip;
    NSMutableDictionary *_playingCells;
    NSMutableOrderedSet *_stoppingCellsToArm;
    NSMutableOrderedSet *_selectedCells;
    NSMutableSet *_visibleCells;
    unsigned int _clipQuantization;
    _Bool _forceClipPlayQuantizationToBarForCountIn;
    CbFileImportFileDragInfo *_currentDropFileInfo;
    CbTronCellView *_currentDragGhostCell;
    DfTrack *_currentDropActionTargetTrack;
    double _currentHeaderWidth;
    long long _onlyCurrentTrackRealRowNumber;
    CbFileImportFileDragInfo *_dragFileInfo;
    unsigned long long _touchTime;
    unsigned long long _clipTime;
    _Bool _isImportingGrid;
    CbKeyboardOverlayViewController *_inputOverlayViewController;
    CbMediaImportHelper *_mediaImportHelper;
    _Bool _toolsViewVisible;
    _Bool _onlyShowRowForCurrentTrack;
    _Bool _allowUserZooming;
    _Bool _showSceneRow;
    _Bool _showDropRow;
    _Bool _longPressing;
    _Bool _menuIsClosing;
    _Bool _majesticMode;
    CbTronToolsViewController *_toolsViewController;
    CbTronCellMasterView *_cellContainerView;
    CbTronTrackHeaderViewController *_trackHeaderViewController;
    CbTronScrollView *_mainScrollView;
    CbTronCellView *_editingCell;
    APDCoachingTipsManager *_apdCoachingTipsManager;
    APDCoachingTipsManager *_apdCoachingTipsManagerInSuperview;
    CbMediaImportController *_mediaImportController;
    NSArray *_arrangeArrowConstraints;
    NSArray *_headerWidthConstraints;
    CbTronCellMasterView *_sceneContainerView;
    NSLayoutConstraint *_scenePositioningConstraint;
    NSLayoutConstraint *_editModeButtonLeftInsetConstraint;
    UIView *_columnOrRowBgView;
    CbTronCellView *_columnOrRowcolumnOrRowBgViewSourceCell;
    NSArray *_columnOrRowcolumnOrRowBgViewSourceCellConstraints;
    CbTronCellView *_editedCell;
    struct LgGridLocation _editedLocation;
    CbObjectMatrix *_cellsMatrix;
    UIImageView *_pointerToCurrentArrangeClipView;
    CADisplayLink *_displayLink;
    UIButton *_toggleToolsButton;
    CALayer *_toolsButtonTintLayer;
    CALayer *_toolsButtonTintLayerMask;
    UIColor *_toggleToolsButtonColor;
    UIView *_toggleToolsButtonBlurredFrame;
    unsigned long long _toolsPosition;
    CDUnknownBlockType _scrollViewDidAutoScrollUpdateBlock;
    long long _movesInAction;
    DfClip *_musicalRoundRobinTimerClip;
    DfTrack *_musicalRoundRobinTimerClipTrack;
    UIView *_majesticCellsSpacerView;
}

+ (_Bool)autoDeleteClipIfNecessaryWithoutUIVisible:(id)arg1;
+ (_Bool)shouldAutoDeleteCellForClip:(id)arg1;
+ (struct CGRect)defaultFrame;
+ (void)setDefaultFrame:(struct CGRect)arg1;
+ (double)cellInset;
+ (double)sceneHeight;
+ (double)sceneWidth;
+ (double)cellWidth;
+ (unsigned long long)currentCellTimingReference;
+ (double)defaultTrackHeight;
+ (double)verticalSpacing;
+ (double)horizontalSpacing;
+ (id)clipPointerImage;
@property(retain, nonatomic) UIView *majesticCellsSpacerView; // @synthesize majesticCellsSpacerView=_majesticCellsSpacerView;
@property(retain, nonatomic) DfTrack *musicalRoundRobinTimerClipTrack; // @synthesize musicalRoundRobinTimerClipTrack=_musicalRoundRobinTimerClipTrack;
@property(retain, nonatomic) DfClip *musicalRoundRobinTimerClip; // @synthesize musicalRoundRobinTimerClip=_musicalRoundRobinTimerClip;
@property(nonatomic) _Bool majesticMode; // @synthesize majesticMode=_majesticMode;
@property(nonatomic) _Bool menuIsClosing; // @synthesize menuIsClosing=_menuIsClosing;
@property(nonatomic) long long movesInAction; // @synthesize movesInAction=_movesInAction;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidAutoScrollUpdateBlock; // @synthesize scrollViewDidAutoScrollUpdateBlock=_scrollViewDidAutoScrollUpdateBlock;
@property(nonatomic) _Bool longPressing; // @synthesize longPressing=_longPressing;
@property(nonatomic) _Bool showDropRow; // @synthesize showDropRow=_showDropRow;
@property(nonatomic) _Bool showSceneRow; // @synthesize showSceneRow=_showSceneRow;
@property(nonatomic) unsigned long long toolsPosition; // @synthesize toolsPosition=_toolsPosition;
@property(retain) UIView *toggleToolsButtonBlurredFrame; // @synthesize toggleToolsButtonBlurredFrame=_toggleToolsButtonBlurredFrame;
@property(copy, nonatomic) UIColor *toggleToolsButtonColor; // @synthesize toggleToolsButtonColor=_toggleToolsButtonColor;
@property(retain, nonatomic) CALayer *toolsButtonTintLayerMask; // @synthesize toolsButtonTintLayerMask=_toolsButtonTintLayerMask;
@property(retain, nonatomic) CALayer *toolsButtonTintLayer; // @synthesize toolsButtonTintLayer=_toolsButtonTintLayer;
@property(retain) UIButton *toggleToolsButton; // @synthesize toggleToolsButton=_toggleToolsButton;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain) UIImageView *pointerToCurrentArrangeClipView; // @synthesize pointerToCurrentArrangeClipView=_pointerToCurrentArrangeClipView;
@property(retain) CbObjectMatrix *cellsMatrix; // @synthesize cellsMatrix=_cellsMatrix;
@property struct LgGridLocation editedLocation; // @synthesize editedLocation=_editedLocation;
@property __weak CbTronCellView *editedCell; // @synthesize editedCell=_editedCell;
@property(retain) NSArray *columnOrRowcolumnOrRowBgViewSourceCellConstraints; // @synthesize columnOrRowcolumnOrRowBgViewSourceCellConstraints=_columnOrRowcolumnOrRowBgViewSourceCellConstraints;
@property(retain) CbTronCellView *columnOrRowcolumnOrRowBgViewSourceCell; // @synthesize columnOrRowcolumnOrRowBgViewSourceCell=_columnOrRowcolumnOrRowBgViewSourceCell;
@property(retain) UIView *columnOrRowBgView; // @synthesize columnOrRowBgView=_columnOrRowBgView;
@property(retain) NSLayoutConstraint *editModeButtonLeftInsetConstraint; // @synthesize editModeButtonLeftInsetConstraint=_editModeButtonLeftInsetConstraint;
@property(retain) NSLayoutConstraint *scenePositioningConstraint; // @synthesize scenePositioningConstraint=_scenePositioningConstraint;
@property(retain) CbTronCellMasterView *sceneContainerView; // @synthesize sceneContainerView=_sceneContainerView;
@property(retain) NSArray *headerWidthConstraints; // @synthesize headerWidthConstraints=_headerWidthConstraints;
@property(retain) NSArray *arrangeArrowConstraints; // @synthesize arrangeArrowConstraints=_arrangeArrowConstraints;
@property(nonatomic) __weak CbMediaImportController *mediaImportController; // @synthesize mediaImportController=_mediaImportController;
@property(retain, nonatomic) APDCoachingTipsManager *apdCoachingTipsManagerInSuperview; // @synthesize apdCoachingTipsManagerInSuperview=_apdCoachingTipsManagerInSuperview;
@property(retain, nonatomic) APDCoachingTipsManager *apdCoachingTipsManager; // @synthesize apdCoachingTipsManager=_apdCoachingTipsManager;
@property(nonatomic) CbTronCellView *editingCell; // @synthesize editingCell=_editingCell;
@property(retain, nonatomic) CbTronScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) CbTronTrackHeaderViewController *trackHeaderViewController; // @synthesize trackHeaderViewController=_trackHeaderViewController;
@property(nonatomic) __weak CbTronCellMasterView *cellContainerView; // @synthesize cellContainerView=_cellContainerView;
@property(retain, nonatomic) CbTronToolsViewController *toolsViewController; // @synthesize toolsViewController=_toolsViewController;
@property(nonatomic) _Bool allowUserZooming; // @synthesize allowUserZooming=_allowUserZooming;
@property(nonatomic) _Bool onlyShowRowForCurrentTrack; // @synthesize onlyShowRowForCurrentTrack=_onlyShowRowForCurrentTrack;
@property(readonly, nonatomic) NSMutableOrderedSet *selectedCells; // @synthesize selectedCells=_selectedCells;
@property(nonatomic) _Bool toolsViewVisible; // @synthesize toolsViewVisible=_toolsViewVisible;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleMediaFileImporterLongPressedAction:(id)arg1;
- (_Bool)scrollViewShouldStartVerticalAutoScroll:(id)arg1;
- (_Bool)scrollViewShouldStartHorizontalAutoScroll:(id)arg1;
- (void)scrollViewDidAutoScroll:(id)arg1;
- (void)updateShowSceneNamesInSceneRow;
- (_Bool)_allColumnsVisible;
- (void)_updateZoomScale:(_Bool)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateVisibleCells:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollRowToVisible:(long long)arg1 animated:(_Bool)arg2;
- (void)_snapScrollViewToCell:(id)arg1;
- (void)_snapScrollViewToContents:(_Bool)arg1;
- (void)_snapScrollViewToContents;
- (void)_updateMinMaxZoomScaleFromScale:(double)arg1;
- (double)_maxScale;
- (double)_minScale;
- (void)makeSureActiveArrangeClipIsSelected;
- (void)inputMethodWillChangeHeightInFullGridModeAnimated:(_Bool)arg1 duration:(double)arg2 tronTargetFrameSize:(struct CGSize)arg3;
- (void)inputMethodWillOpenOrChangeForTrackInFullGridMode:(id)arg1 animated:(_Bool)arg2 duration:(double)arg3 tronTargetFrameSize:(struct CGSize)arg4;
- (void)inputMethodDidCloseInFullGridMode;
- (void)inputMethodDidOpenInFullGridMode;
- (void)updateLevelMeters;
- (void)setHeaderWidth:(double)arg1 updateConstraints:(_Bool)arg2;
- (void)setLeftSideTrackHeaderInsetIsVisible:(_Bool)arg1;
- (void)trackHeaderWidthOrXLocationDidChange:(id)arg1;
- (void)trackHeaderWidthOrXLocationWillChange:(id)arg1;
- (void)_setToolsButtonInset:(double)arg1;
- (double)_calcEditModeButtonLeftInset;
- (void)afterDuplicateOrAddTrack;
- (void)prepareForDuplicateOrAddTrack;
- (_Bool)isCurrentlyImportingGrid;
- (void)importGridFromBundleAtURL:(id)arg1;
- (void)_delayedImportGridFromBundleAtURL:(id)arg1;
- (void)_setSongTempo:(long long)arg1;
- (void)setViewFrame:(struct CGRect)arg1;
- (void)_enableContentDragMode:(_Bool)arg1;
- (void)tronCellViewAction:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)tronCellViewPanned:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)tronCellViewLongPressed:(id)arg1;
- (void)tronCellViewTapped:(id)arg1;
- (void)tronCellViewTouched:(id)arg1;
- (id)_targetCellsForActionFromCell:(id)arg1;
- (id)_targetCellsForActionFromCell:(id)arg1 includeSharedGapClips:(_Bool)arg2;
- (id)_targetCellsForActionFromCell:(id)arg1 includeSharedGapClips:(_Bool)arg2 onlyPlaying:(_Bool)arg3;
- (id)_targetCellsForActionFromCell:(id)arg1 includeSharedGapClips:(_Bool)arg2 onlyPlaying:(_Bool)arg3 checkPaused:(_Bool)arg4;
- (id)_sortedLocationCellArrayFromArray:(id)arg1;
- (id)_sortedCellArrayFromArray:(id)arg1;
- (void)_updateActiveArrangeCellProgressToSplAndResetOtherCells:(_Bool)arg1;
- (void)_mainFolderDidChangeHandler:(id)arg1;
- (void)_mainGridQuantizationChanged:(id)arg1;
- (void)_sequencerClockDidChangeHandler:(id)arg1;
- (void)_handlePausedClipsChanged:(id)arg1;
- (void)clipsRendered:(id)arg1;
- (void)undoRedoHandler:(id)arg1;
- (void)clipContentChanged:(id)arg1;
- (void)clipsAdvancedHandler:(id)arg1;
- (void)_reactivateTool;
- (struct CGSize)dynamicToolsSize;
- (struct CGSize)dynamicMenuSize;
- (void)changeToolsPosition:(id)arg1;
- (void)toolsTouchUpOrCancelled:(id)arg1;
- (void)toolsTouchUp:(id)arg1;
- (void)toolsTouchDown:(id)arg1;
- (void)setToolsForInspector;
- (void)setToolsForGrid;
- (void)setToolsForGridWithCellInspector:(_Bool)arg1;
- (CDUnknownBlockType)selectOrShowEditMenuOnBeginBlock;
- (CDUnknownBlockType)selectCellBlock;
- (CDUnknownBlockType)activateClipBlock;
- (struct LgGridLocation)_locationFromNSNumber:(id)arg1;
- (void)moveCell:(id)arg1 withToolInfo:(id)arg2;
- (void)cancelCellMovement;
- (void)stopPlayingCellsAt:(struct _LgClipTime)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerFirstColumn;
- (void)enableEditMode:(_Bool)arg1;
- (void)_makeSelectionPlayable;
- (void)_toggleCellSelection:(id)arg1;
- (void)_setCell:(id)arg1 selected:(_Bool)arg2;
- (void)deselectAllCells;
- (void)_deselectAllCells;
- (void)setInspectorSize:(struct LgGridSize)arg1 forCell:(id)arg2;
@property(readonly, nonatomic) CbTronCellView *focusCell;
- (long long)focusColumnAccordingToSelectionOrPlayStatusForRow:(long long)arg1;
@property(readonly, nonatomic) double toolsButtonHeight;
- (void)toggleTools;
- (void)showTools:(_Bool)arg1;
- (void)quantizationValueChanged:(id)arg1;
- (void)clearGrid:(id)arg1;
- (void)fillGridFromRegionsAction:(id)arg1;
- (void)clip:(id)arg1 event:(int)arg2 clock:(long long)arg3;
- (void)clipAddedToGrid:(id)arg1;
- (void)clipLocationDidChange:(id)arg1;
- (void)clipContentDidChange:(id)arg1;
- (void)clipsModelDidChange;
- (void)cellStopped:(id)arg1 clock:(long long)arg2;
- (void)cellLooped:(id)arg1 clock:(long long)arg2;
- (void)cellStarted:(id)arg1 clock:(long long)arg2;
- (void)cellArmed:(id)arg1 clock:(long long)arg2;
- (void)cellReloaded:(id)arg1 clock:(long long)arg2;
- (void)_updateColumnTriggerStateForCell:(id)arg1;
- (void)_recordWillStart:(id)arg1;
- (void)_handleRecordStartStop:(id)arg1;
- (_Bool)isCellReorderingActive;
- (void)_updateAutoScrollZones;
- (void)showMovingRowOrColumnForCell:(id)arg1;
- (void)flashColumnOrRowBgView:(id)arg1;
- (void)showSceneRow:(_Bool)arg1 animate:(_Bool)arg2;
- (_Bool)_removeExcessEmptyColumnsInGrid;
- (void)_displayLink:(id)arg1;
- (void)_updateProgressOfVisibleCells;
- (void)_stopProgressAnimation;
- (void)_startProgressAnimation;
- (void)stopClips:(id)arg1 at:(struct _LgClipTime)arg2;
- (void)retriggerClips:(id)arg1 stopClips:(id)arg2 at:(struct _LgClipTime)arg3 delayStart:(_Bool)arg4 delayStop:(_Bool)arg5;
- (void)retriggerClips:(id)arg1 stopClips:(id)arg2 at:(struct _LgClipTime)arg3;
- (void)playClips:(id)arg1 at:(struct _LgClipTime)arg2;
- (void)playClips:(id)arg1 stopClips:(id)arg2 at:(struct _LgClipTime)arg3;
- (void)_resetPhasesOfArmedCellsIfNeededBeforeCellsStart;
- (void)selectCellForClip:(id)arg1;
- (void)useTronEngineForActiveArrangeCellChanged;
- (_Bool)isTIAndFullGridMode;
- (_Bool)_isSpecialTIAndFullGridGestureMode;
- (_Bool)_isCombinedPlayAndEditHybridMode;
- (_Bool)_isSingleSelectionMode;
- (_Bool)_isCellActive:(id)arg1;
- (void)setAllColumnTriggerCellsPlayQuantization:(unsigned int)arg1;
- (void)setAllColumnTriggerCellsRetrigger:(_Bool)arg1 andToggle:(_Bool)arg2;
- (void)_updateAllColumnTriggerStates;
- (void)updateCells;
- (long long)fittingCellsOnScreen;
- (id)_refreshCell:(id)arg1 atLocation:(struct LgGridLocation)arg2 clip:(id)arg3;
- (id)_nonSceneCells;
- (id)_cells1D;
- (void)syncCells:(id)arg1;
- (void)syncCells:(id)arg1 animateChanges:(_Bool)arg2;
- (void)clearGrid;
- (void)clearCells:(id)arg1 makeUndo:(_Bool)arg2;
- (void)clearCells:(id)arg1;
- (_Bool)autoDeleteCellForClipIfNecessary:(id)arg1;
- (void)_enumerateSelectedCells:(CDUnknownBlockType)arg1;
- (void)_enumerateCells:(CDUnknownBlockType)arg1;
- (void)_enumerateInactiveCells:(CDUnknownBlockType)arg1;
- (void)updateArrangeArrow;
- (void)viewWillLayoutSubviews;
- (void)updateViewConstraints;
- (void)layoutUpdatedConstraintsAndAnimate:(_Bool)arg1;
- (struct LgGridSize)_gridSize;
- (id)_cellAtLocation:(struct LgGridLocation)arg1;
- (id)_cellsAtRow:(unsigned long long)arg1;
- (id)_findCellAtLocation:(struct LgGridLocation)arg1 inCellArray:(id)arg2;
- (void)resetZoomAndScrollPositionNonAnimated;
- (void)restoreScrollPositionFromModel;
- (void)restoreZoomFromModel;
- (void)_setZoomScale:(double)arg1 preserveScrollOffset:(_Bool)arg2;
- (double)_modelZoomScale;
- (double)rowHeightForZoomModelValue;
- (double)maxScrollYForRowHeight:(double)arg1 includeAddRowButtonIfNeeded:(_Bool)arg2;
- (_Bool)_scrollRowForTrackToVisible:(id)arg1 animated:(_Bool)arg2 overwriteTronViewSize:(struct CGSize)arg3;
- (_Bool)_getScrollOffsetForScrollRowForTrackToVisible:(id)arg1 overwriteTronViewSize:(struct CGSize)arg2 overwriteRowHeight:(double)arg3 pOutOffset:(struct CGPoint *)arg4;
- (double)getScrollYOffsetForScrollRowForTrackToVisible:(id)arg1 overwriteRowHeight:(double)arg2;
- (_Bool)scrollRowForTrackToVisible:(id)arg1 animated:(_Bool)arg2;
- (void)setCurrentScrollOffset:(struct CGPoint)arg1 constraintToContentSize:(_Bool)arg2;
- (struct CGPoint)currentScrollOffset;
- (double)rowHeight;
- (void)setRowHeight:(double)arg1 preserveScrollOffset:(_Bool)arg2;
- (void)synchronizeData;
- (void)controllerDidClose;
- (void)controllerWillClose;
- (void)songUIWillClose;
- (void)controllerDidResize;
- (void)controllerDidCloseAnimated:(_Bool)arg1;
- (void)controllerWillCloseAnimated:(_Bool)arg1 inputMethodWillOpen:(_Bool)arg2;
- (void)willMakeScreenShot:(id)arg1;
- (void)controllerDidOpenAnimated:(_Bool)arg1;
- (void)controllerWillOpenAnimated:(_Bool)arg1;
@property(nonatomic) unsigned int clipQuantization;
- (id)tracksForGridRows;
- (id)currentGridTrack;
- (long long)currentGridTrackRow;
@property(readonly) UIView *trackHeaderView;
@property(readonly) UIView *toolsView;
- (id)clipsModel;
- (id)arrangeModel;
- (id)document;
- (id)songMainViewController;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithSongMainViewController:(id)arg1;
@property(readonly) NSArray *playingClips;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)allowedDropTypes;
- (void)_moveMainViewBoundsYOffsetBy:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3 curve:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)moveTrackControllerToVisibleForOnscreenKeyboard:(id)arg1 animated:(_Bool)arg2 duration:(double)arg3 curve:(long long)arg4;
- (void)_handleKeyboardWillHide:(id)arg1;
- (void)_handleKeyboardWillShow:(id)arg1;
- (void)trackHeaderInstruments:(id)arg1;
- (void)trackHeaderLoops:(id)arg1;
- (void)trackHeaderAddRowButtonAction:(id)arg1;
- (void)_importMediaItemWithInfo:(id)arg1 playClip:(_Bool)arg2;
- (void)importMediaItemWithInfo:(id)arg1;
- (void)mediaImportController:(id)arg1 didFinishWithItemInfo:(id)arg2;
- (void)showMediaImportSheetForCell:(id)arg1;
- (_Bool)endFileImportDragAndDropSessionForLocation:(struct CGPoint)arg1 isCancelled:(_Bool)arg2;
- (_Bool)endFileImportDragAndDropSession:(id)arg1 isCancelled:(_Bool)arg2;
- (_Bool)updateFileImportDragAndDropSessionForLocation:(struct CGPoint)arg1;
- (_Bool)updateFileImportDragAndDropSession:(id)arg1;
- (void)_checkIfTINeedsToBeClosedAfterImportOrAddOrDuplicateTrack;
- (id)_dropCellForPoint:(struct CGPoint)arg1;
- (double)allTracksHeightWithoutGhostTrack;
- (void)setGhostCellVisible:(_Bool)arg1;
- (_Bool)beginFileImportDragAndDropSessionForLocation:(struct CGPoint)arg1 withOffset:(struct CGPoint)arg2 fileInfo:(id)arg3;
- (_Bool)beginFileImportDragAndDropSession:(id)arg1 withOffset:(struct CGPoint)arg2 fileInfo:(id)arg3;
- (void)createGhostTrackWithGhostCellForFileInfo:(id)arg1;
- (void)_handleMediaFileImporterLongPressedAction:(id)arg1;
- (_Bool)draggingInProgress;
- (void)_handleTrackSelectionChanged:(_Bool)arg1;
- (void)trackSelectionChanged:(id)arg1;
- (void)setupNonPlayTools;
- (void)hardAbortAllRenamings;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)inputOverlayViewController:(id)arg1 finishedWithText:(id)arg2;
- (_Bool)inputOverlayViewController:(id)arg1 shouldFinishWithText:(id)arg2;
- (void)inputOverlayViewControllerCancelled:(id)arg1;
- (void)removeClipRenamingViewController;
- (void)endClipRenaming;
- (void)setClipRenameModeVisible:(_Bool)arg1;
- (void)openCellPropertiesViewControllerForCellViews:(id)arg1 focusCell:(id)arg2;
- (void)closeCellPropertiesViewControllerAnimated:(_Bool)arg1;
- (_Bool)isCellPropertiesViewControllerVisible;
- (_Bool)isCellPropertiesViewControllerOpenForCells:(id)arg1;
- (void)dismissAllPopoversAnimated:(_Bool)arg1;
- (void)syncRulerToZoomAndVerticalScrollPosition;
- (void)_syncRulerToZoom;
- (void)_syncRulerToScrollVerticalPosition;
- (void)_cellSelectionChangedInSingleSelectionMode:(id)arg1 allowActiveArrangeClipCurrentlyNil:(_Bool)arg2 isAfterTrackDidChange:(_Bool)arg3;
- (_Bool)_switchActiveArrangeClipToClip:(id)arg1 allowActiveArrangeClipCurrentlyNil:(_Bool)arg2 isAfterTrackDidChange:(_Bool)arg3;
- (void)_cellSelectionChangedInSingleSelectionMode:(id)arg1;
- (void)_openMiniArrangeModeForCell:(id)arg1 pianoRollMode:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)openMiniArrangeModeNonAnimatedForFocusCell:(_Bool)arg1;
- (void)_openInputMethodForCell:(id)arg1;
- (void)activatePlayMode;
- (void)activateEditMode;
- (CDUnknownBlockType)_scrollViewTestBlockNeverScroll;
- (CDUnknownBlockType)_scrollViewTestBlockAlwaysScroll;
- (CDUnknownBlockType)_scrollViewTestBlockNoScrollOnValid;
- (void)editMenuArmTargetCells:(id)arg1;
- (void)editMenuShowPropertiesSheet:(id)arg1;
- (void)editMenuLoopToggle:(id)arg1;
- (void)editMenuDelete:(id)arg1;
- (void)editMenuClear:(id)arg1;
- (void)editMenuEdit:(id)arg1;
- (void)editMenuOpenInspector:(id)arg1;
- (void)editMenuRec:(id)arg1;
- (void)editMenuSelectColumn:(id)arg1;
- (void)editMenuSelectAll:(id)arg1;
- (void)editMenuRename:(id)arg1;
- (void)editMenuImport:(id)arg1;
- (void)editMenuInstruments:(id)arg1;
- (void)editMenuLoops:(id)arg1;
- (void)editMenuNewCol:(id)arg1;
- (void)editMenuDuplicate:(id)arg1;
- (void)editMenuPaste:(id)arg1;
- (void)editMenuCopy:(id)arg1;
- (void)editMenuCut:(id)arg1;
- (void)_copyFromCell:(id)arg1 doCut:(_Bool)arg2;
- (void)showEditMenuForCell:(id)arg1;
- (void)_menuControllerDidHide:(id)arg1;
- (void)_menuControllerWillHide:(id)arg1;
- (void)showEditMenuFromBackgroundTap:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)coachingTipManager:(id)arg1 coachingTipView:(id)arg2 viewToTrackForKey:(id)arg3;
- (id)coachingTipManager:(id)arg1 coachingTipView:(id)arg2 viewToAttachToForKey:(id)arg3;
- (struct CGRect)coachingTipManager:(id)arg1 coachingTipView:(id)arg2 subRectForKey:(id)arg3;
- (void)coachingTipManager:(id)arg1 coachingTipViewTapped:(id)arg2 APDID:(id)arg3;
- (void)updateHelpOverlay;
- (void)updateVisibleHelpSets;
- (id)visibleHelpIndices;
- (id)allHelpIndices;
- (id)helpOverlayPageID;
- (id)helpOverlayMainID;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)_debug_resetAudioClipNamesAndInnerRegionNamesToAudioFileNames;
- (void)_debug_WriteAuthoringGridInfoToSharingArea;
- (void)_debug_AddCellInfoForClip:(id)arg1 toStr:(id)arg2;
- (void)_handleDebugAuthoringLongTap:(id)arg1;
- (void)_debug_collectSpecialLocStrings;
- (void)_add_DebugAuthoring_LongTapMenu;
- (void)track:(id)arg1 didEndMoving:(double)arg2;
- (void)track:(id)arg1 didMove:(double)arg2 toRow:(long long)arg3;
- (void)track:(id)arg1 didStartMoving:(double)arg2;
- (void)_controllerDidOpenAnimated:(_Bool)arg1;
- (void)_viewDidLoad;
- (void)_viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

