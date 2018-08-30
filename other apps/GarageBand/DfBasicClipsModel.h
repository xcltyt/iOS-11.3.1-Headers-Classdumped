//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LgGridObserver-Protocol.h"

@class DfClip, DfDocument, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString;
@protocol LgGridController;

@interface DfBasicClipsModel : NSObject <LgGridObserver>
{
    NSMutableDictionary *_clipsMap;
    NSMutableArray *_clips;
    NSMutableOrderedSet *_playingClips;
    NSMutableSet *_pausedClips;
    NSMutableArray *_clipsGrid;
    NSMutableArray *_clipsGridRowRootTracks;
    DfClip *_metronomeClip;
    int _mainGridID;
    CDUnknownBlockType _clipEventHandler;
    NSMutableArray *_deferredPauseActions;
    _Bool _clipWasRemovedFromLogicModel;
    int _temporarilyDisableAutoStopClips;
    int _temporarilyKeepActiveArrangeClipInRemoveUnusedClips;
    id <LgGridController> _gridController;
    NSHashTable *_clipObservers;
    _Bool _resetPlayClock;
    DfDocument *_document;
}

+ (id)sharedGapClip;
@property(nonatomic) _Bool resetPlayClock; // @synthesize resetPlayClock=_resetPlayClock;
@property(nonatomic) DfDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)createClipFullUndoStepWithString:(id)arg1 forClipWithID:(int)arg2;
- (void)createClipPropertyUndoStepWithString:(id)arg1 forClipWithID:(int)arg2;
- (void)createUndoStepForMainGridFullWithString:(id)arg1;
- (void)createUndoStepForMainGridWithString:(id)arg1;
- (void)updateClipGenInstGenreAndCharacterToRootTracks;
- (long long)maxAllowedClipLength;
- (void)flattenClip:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clipWasRemovedFromLogicModel;
- (void)_afterSongTempoDidChange;
- (void)setKeepActiveArrangeClipOnRemoveUnusedClips:(_Bool)arg1;
- (void)endGlobalIgnoringClipInitializationAndInitClips:(_Bool)arg1;
- (void)beginGlobalIgnoringClipInitialization;
- (void)deselectAllRegionsInAllClips:(_Bool)arg1;
- (void)_forceAllClipInstIDsToFollowTheirRowInstIDInMainGrid;
- (_Bool)clipsGridHasTracksMarkedToKeepOnSmartReplace;
- (id)clipsForInstWithRegionsContainingFaderEvents:(int)arg1;
- (void)setDefaultCellLengthInfoFromClipsCurrentConfiguration:(id)arg1;
- (void)resetDefaultCellLengthInfo;
- (CDStruct_254bb6c4)defaultCellLenghtInfo;
- (void)createGridClipsFromArrangeRegionsWithMode:(long long)arg1 selectedRegionsOnly:(_Bool)arg2;
- (void)createGridClipsFromArrangeRegions:(id)arg1 startingAtColumn:(long long)arg2 withMode:(long long)arg3 forceToTargetTrack:(id)arg4;
- (long long)removeMultipleRowsWithInstIDs:(id)arg1 makeUndo:(_Bool)arg2;
- (_Bool)removeRowWithInstID:(int)arg1 makeUndo:(_Bool)arg2;
- (void)removeAllGridsAndClips;
- (_Bool)canLoadGridFromGridBundleAtURL:(id)arg1 appendToCurrentGrid:(_Bool)arg2;
- (_Bool)loadGridFromGridBundleAtURL:(id)arg1 appendToCurrentGrid:(_Bool)arg2 localize:(_Bool)arg3 makeUndo:(_Bool)arg4 pSourceGridTempo:(long long *)arg5 pSourceGridSignature:(CDStruct_e28e794b *)arg6 pSourceGridKey:(int *)arg7 pSourceGridKeyIsMajor:(_Bool *)arg8;
- (unsigned long long)smartDeleteUnusedRowsAndAccordingArrangeTracksAndMakeUndo:(_Bool)arg1;
- (id)smartDeletableRootTracks;
- (_Bool)_appendGridWithIDIntoMainGrid:(int)arg1 callUpdateGrid:(_Bool)arg2;
- (void)_deleteAllClipObjectsAndDetatchFromModel;
- (void)_setDocument:(id)arg1;
- (void)observeClip:(int)arg1 event:(int)arg2 clock:(long long)arg3;
- (void)observeGrid:(int)arg1 event:(unsigned int)arg2 change:(id)arg3;
- (void)_collectedPausedClipsChanged;
- (void)setLockedByPassModeForGridTracksIfNecessary;
- (_Bool)setStartOffset:(long long)arg1 endOffset:(long long)arg2 ofClip:(id)arg3 at:(struct _LgClipTime)arg4;
- (_Bool)setMuted:(_Bool)arg1 ofClips:(id)arg2 at:(struct _LgClipTime)arg3;
- (_Bool)setSpeed:(const float *)arg1 ofClips:(id)arg2 at:(struct _LgClipTime)arg3;
- (_Bool)setReversed:(_Bool)arg1 ofClips:(id)arg2 at:(struct _LgClipTime)arg3;
- (_Bool)setTranspose:(const int *)arg1 ofClips:(id)arg2 at:(struct _LgClipTime)arg3;
- (_Bool)setRetrigger:(unsigned int)arg1 ofClips:(id)arg2 at:(struct _LgClipTime)arg3;
- (_Bool)repeatSlice:(unsigned int)arg1 count:(unsigned int)arg2 ofClip:(id)arg3 at:(struct _LgClipTime)arg4;
- (_Bool)setRepeat:(const unsigned int *)arg1 ofClips:(id)arg2 at:(struct _LgClipTime)arg3 fractions:(const float *)arg4;
- (_Bool)setRepeat:(const unsigned int *)arg1 ofClips:(id)arg2 at:(struct _LgClipTime)arg3;
@property(readonly, nonatomic) NSSet *pausedClips;
- (void)clearPausedClipsAndResetPhases;
- (void)clearPausedClips;
- (void)playPausedClipsAt:(struct _LgClipTime)arg1;
- (void)quantizeClipPositions:(id)arg1 withQuantizeValue:(unsigned int)arg2 toLeft:(_Bool)arg3;
- (void)removeClipsFromPausedClips:(id)arg1;
- (void)removeClipsWithInstIDFromPausedClips:(int)arg1;
- (void)addClipsToPausedClips:(id)arg1;
- (void)pausePlayingClips;
- (_Bool)stopClips:(id)arg1 at:(struct _LgClipTime)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)stopClips:(id)arg1 at:(struct _LgClipTime)arg2;
- (void)stopColumn:(unsigned long long)arg1;
- (void)playColumn:(unsigned long long)arg1;
- (_Bool)playClips:(id)arg1 stopClips:(id)arg2 at:(struct _LgClipTime)arg3;
- (_Bool)playClips:(id)arg1 at:(struct _LgClipTime)arg2;
- (_Bool)prerollTransportForClips:(id)arg1;
- (_Bool)advanceClips:(id)arg1 byClockDelta:(long long)arg2;
- (void)_adjustFeederClock;
- (void)_unfreezeTracksForPlayIfNecessary:(id)arg1;
- (void)_resetAllClipsTransposeLockedValuesToDefaultIfNotAccessibleInUI;
- (void)createEmptyDefaultGridIfNeeded;
- (unsigned long long)clipsGridColumnCount;
- (unsigned long long)clipsGridRowCount;
- (unsigned long long)clipsGridRowCountMidi;
- (unsigned long long)clipsGridRowCountAudio;
- (id)arrangeRootTrackForRow:(long long)arg1;
- (_Bool)pasteLogicObjectsFromPasteBoardToMainGridAtLocation:(struct LgGridLocation)arg1;
- (void)copySelectedClipsFromMainGridToPasteBoard;
- (void)deselectAllCellsInGrid;
- (_Bool)cellSelectedAtLocationInGrid:(struct LgGridLocation)arg1;
- (void)setCellSelected:(_Bool)arg1 atLocationInGrid:(struct LgGridLocation)arg2;
- (id)clipsGridSelectedClips;
- (struct LgGridLocation)findClipWithIDInMainGrid:(int)arg1;
- (void)moveGridRowAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 makeUndo:(_Bool)arg3;
- (void)addGridRowForArrangeRootTrack:(id)arg1 atIndex:(long long)arg2 setFocusRow:(_Bool)arg3 undoStepName:(id)arg4;
- (void)_setGridSizeToRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2;
- (void)setGridSizeToRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2;
- (void)collectPlayingClipsIntoGridColumn:(long long)arg1 copyClips:(_Bool)arg2 makeUndo:(_Bool)arg3;
- (void)duplicateGridColumnIncludingClips:(long long)arg1 makeUndo:(_Bool)arg2;
- (id)duplicateGridRow:(long long)arg1 alsoDuplicateClips:(_Bool)arg2 addNewRowAtEndOfList:(_Bool)arg3;
- (long long)removeExcessEmptyColumnsInGrid;
- (void)addEmptyGridColumns:(unsigned long long)arg1;
- (void)removeUnusedClips;
- (void)purgeRemovedClips;
- (void)removeClip:(id)arg1 purgeImmediately:(_Bool)arg2;
- (void)removeClip:(id)arg1;
- (_Bool)scheduleBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 at:(struct _LgClipTime)arg3;
@property(readonly) _Bool metronomePlaying;
- (_Bool)stopMetronome;
- (_Bool)startMetronome;
- (id)metronomeClip;
- (id)addNewClipFromClip:(id)arg1;
- (id)addNewClipWithRegions:(id)arg1;
- (_Bool)updateClip:(id)arg1 withMidiSequence:(id)arg2;
- (id)addNewClipWithMidiSequence:(id)arg1 withInstID:(int)arg2;
- (id)addNewClipWithRegion:(id)arg1;
- (id)addNewClipWithURL:(id)arg1 withInstID:(int)arg2 makeUndo:(_Bool)arg3;
- (id)addNewEmptyClipWithInstID:(int)arg1 makeUndo:(_Bool)arg2;
- (void)_initializeNewClip:(id)arg1;
- (void)setClip:(id)arg1 inGridAtRow:(long long)arg2 andColumn:(long long)arg3;
- (id)addEmptyClipToClipsGridFocusRowAndAddNewColumnIfNecessary:(_Bool)arg1 tryUsingFocusColumnFirst:(_Bool)arg2 makeUndo:(_Bool)arg3;
- (id)currentClipsGridFocusArrangeRootTrack;
- (id)currentClipsGridFocusClip;
- (void)setClipsGridFocusColumn:(long long)arg1;
- (void)setClipsGridFocusRow:(long long)arg1;
- (void)selectClipsGridFocusArrangeRootTrack;
- (void)setClipsGridFocusRow:(long long)arg1 andColumn:(long long)arg2;
- (long long)clipsGridFocusColumn;
- (long long)clipsGridFocusRow;
- (long long)_rawClipsGridFocusRow;
- (unsigned long long)clipsGridClipsCount;
- (_Bool)clipsGridHasClips;
- (void)clearGrid;
- (void)clearGridRow:(long long)arg1;
- (_Bool)clipsGridHasNonEmptyClipsForInst:(int)arg1;
- (_Bool)clipsGridHasClipsForInst:(int)arg1;
- (_Bool)disableMutualExclusionForInstID:(int)arg1;
- (_Bool)rowOfInstHasStereoAudioClips:(int)arg1;
- (id)clipsForInst:(int)arg1 includeUnused:(_Bool)arg2;
- (_Bool)isClipInGrid:(id)arg1;
- (id)clipForClipID:(int)arg1;
- (id)clipForClipFolderID:(int)arg1;
- (void)_synchronizeTrackAndRowOrdersWithArrangeIsMaster:(_Bool)arg1;
- (void)_synchronizeGridStructureToTracksArray:(id)arg1;
- (void)synchronizeWithArrangeModel;
- (void)_removeGridRow:(long long)arg1 resizeGrid:(_Bool)arg2;
- (void)_swapGridRow:(long long)arg1 withRow:(long long)arg2;
- (_Bool)_ensureClipsGridHasSizeForRow:(long long)arg1 andColumn:(long long)arg2;
- (_Bool)ensureClipsGridHasSizeForColumn:(long long)arg1;
- (long long)_findFreeRowWithAllowToFillGapRows:(_Bool)arg1 minAllowedRow:(long long)arg2;
- (long long)findFreeColumnInAllRowsAndAllowToFillGaps:(_Bool)arg1;
- (long long)findFreeColumnInRow:(long long)arg1 allowToFillGaps:(_Bool)arg2;
- (long long)findOccupiedColumnInRow:(long long)arg1;
- (long long)_rowOfInstIDUsedInGrid:(int)arg1;
- (long long)rowOfInstID:(int)arg1;
- (_Bool)hasRowForInstID:(int)arg1;
- (int)_instIDUsedInRow:(long long)arg1;
- (int)instIDOfRow:(long long)arg1;
- (id)clipsGridRowRootTracks;
- (id)clipsGridIDs;
- (id)clipsGrid;
@property(readonly, nonatomic) _Bool clipsArePlaying;
- (_Bool)hasPlayingClipsWithInstID:(int)arg1;
- (id)playingClipsWithInstID:(int)arg1 includeScheduledToPlayClips:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *playingClips;
@property(readonly, nonatomic) NSArray *clips;
- (void)_documentDidUndoRedo:(int)arg1 wasGridLoading:(_Bool)arg2;
- (void)_didRecordIntoClip:(id)arg1 wasCellRecordingEngineRecord:(_Bool)arg2;
- (void)_contentOfClipChanged:(id)arg1 postNotification:(_Bool)arg2;
- (void)contentsOfClipHaveBeenChangedExternally:(id)arg1;
- (void)_updateGrid;
- (void)_syncGridAndGridRowTracksWithGridIsMaster:(_Bool)arg1;
- (_Bool)_updateGridRowRootTracks;
- (void)_updateClips;
- (void)_update;
- (void)_clearAllCachedObjectsAndData;
- (int)_mainGridID;
- (void)cancelAllPlayingClipsSyncImmediately;
- (void)stopAllPlayingClipsSyncImmediately;
- (void)stopAllPlayingClips;
- (id)_playingAndArmedClips;
- (void)setClipsGridFocusRowToSelectedTrackIfPossible;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_regionsRendered:(id)arg1;
- (void)_transportStopped:(id)arg1;
- (void)_setTemporarilyDisableAutoStopClips:(_Bool)arg1;
- (void)_logicDidStopClips:(id)arg1;
- (void)_logicDidPauseClips:(id)arg1;
- (void)_handleWillUndoSpecialClipModification:(id)arg1;
@property(nonatomic) unsigned int mainGridQuantization;
- (unsigned int)_gridQuantizationForGridWithID:(int)arg1;
@property(nonatomic) _Bool mainGridVisible;
- (void)setMainGridValue:(id)arg1 forKey:(id)arg2;
- (id)mainGridValueForKey:(id)arg1;
- (id)_gridValueForKey:(id)arg1 gridID:(int)arg2;
- (int)_determineMainGridID;
- (_Bool)hasMainGrid;
- (void)_recoverActiveClipsIntoPausedClips;
- (void)songDidLoad;
- (void)removeClipObserver:(id)arg1;
- (void)addClipObserver:(id)arg1;
- (void)_autoCompensateFileRecKeyVsSongKeyDifferenceForOwnRecordingClips;
- (void)newDocumentCreated;
@property(readonly, nonatomic) struct LGDOCUMENT *logicDocument;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

