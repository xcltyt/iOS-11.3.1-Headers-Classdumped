//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DfBasicArrangeModel.h"

@class DfTrack, EcTimer, NSMutableDictionary, NSMutableSet, NSString;

@interface CbArrangeModel : DfBasicArrangeModel
{
    EcTimer *_cpuSamplingTimer;
    long long _ignoreNextCPUValues;
    NSMutableDictionary *_persistentData;
    _Bool _continueCPUSamplingAfterFreeze;
    _Bool _gridOverloadBannerShown;
    NSMutableSet *_currentCrashedAUIdentifiers;
    _Bool _chooseTrackAreaVisible;
    _Bool _trackRenameModeEnabled;
    _Bool _regionRenameModeEnabled;
    DfTrack *_pasteBoardSourceTrackRef;
    _Bool _preventNewSongDeletion;
    _Bool _automaticFadeOutDisabledDuringRecording;
    _Bool _inputMethodVisible;
    int _inputMethodMode;
    _Bool _miniArrangeVisible;
    _Bool _mixerVisible;
    _Bool _inputMethodEditModeEnabled;
    _Bool _pianoRollEditorEnabled;
    _Bool _pianoRollEditorAddNoteModeEnabled;
    _Bool _pianoRollEditorDoneButtonClosesMiniArrange;
    _Bool _takeRecordingEnabled;
    _Bool _visualCountInEnabled;
    _Bool _automationEditorEnabled;
    _Bool _automationEditorAddEventsModeEnabled;
    NSString *_sessionUUID;
    _Bool _masterTrackVisible;
    _Bool _masterTrackWasVisibleBeforeRecording;
    int _inpMonRecoveryInstID;
    _Bool _masterTrackFXIMVisible;
    _Bool _miniArrangeClientIsGrid;
    _Bool _trackPanelVisible;
    _Bool _pluginViewVisible;
    _Bool _pluginViewIsFullScreenMode;
    _Bool _songNewlyCreatedForImportFromLogic;
    _Bool _songNewlyCreatedWithUserChosenCST;
    long long _pluginViewActiveSlotNumber;
}

+ (int)isFileSupportedForAudioImport:(id)arg1 allowAppleLoops:(_Bool)arg2 outFileInfo:(struct _CbAudioFileInfo *)arg3;
+ (int)_isFileSupportedForAudioImport:(id)arg1 allowAppleLoops:(_Bool)arg2 outFileInfo:(struct _CbAudioFileInfo *)arg3;
+ (id)libraryChannelStripFullPathForInputMethodKey:(id)arg1 andChannelStripFileName:(id)arg2;
+ (void)resetLogicObjectsPasteboardFlags;
+ (id)getInstalledPackageIDsForLogicObjectsPasteboard;
+ (_Bool)checkInstalledPackageIDsForLogicObjectsPasteboard:(id)arg1;
+ (id)getLogicObjectsPasteboardFlagsDictionary;
+ (void)setLogicObjectsPasteboardFlagsFromDictionary:(id)arg1 audioFilesPath:(id)arg2 samplerFilesRootPath:(id)arg3;
+ (int)mapLegacyStringBasedChannelBrowserIconID:(id)arg1 inputMethodKey:(id)arg2;
+ (_Bool)shouldForceChannelToNoTransposeMode:(id)arg1;
+ (long long)newDocumentBarCount;
+ (_Bool)useSongParts;
@property(nonatomic) _Bool songNewlyCreatedWithUserChosenCST; // @synthesize songNewlyCreatedWithUserChosenCST=_songNewlyCreatedWithUserChosenCST;
@property(nonatomic) _Bool songNewlyCreatedForImportFromLogic; // @synthesize songNewlyCreatedForImportFromLogic=_songNewlyCreatedForImportFromLogic;
@property(nonatomic) _Bool visualCountInEnabled; // @synthesize visualCountInEnabled=_visualCountInEnabled;
@property(nonatomic) _Bool takeRecordingEnabled; // @synthesize takeRecordingEnabled=_takeRecordingEnabled;
@property(nonatomic) int inputMethodMode; // @synthesize inputMethodMode=_inputMethodMode;
@property(nonatomic, getter=isInputMethodVisible) _Bool inputMethodVisible; // @synthesize inputMethodVisible=_inputMethodVisible;
@property(nonatomic) long long pluginViewActiveSlotNumber; // @synthesize pluginViewActiveSlotNumber=_pluginViewActiveSlotNumber;
@property(nonatomic) _Bool pluginViewIsFullScreenMode; // @synthesize pluginViewIsFullScreenMode=_pluginViewIsFullScreenMode;
@property(nonatomic, getter=isPluginViewVisible) _Bool pluginViewVisible; // @synthesize pluginViewVisible=_pluginViewVisible;
@property(nonatomic, getter=isTrackPanelVisible) _Bool trackPanelVisible; // @synthesize trackPanelVisible=_trackPanelVisible;
@property(nonatomic) _Bool miniArrangeClientIsGrid; // @synthesize miniArrangeClientIsGrid=_miniArrangeClientIsGrid;
@property(nonatomic, getter=isMixerVisible) _Bool mixerVisible; // @synthesize mixerVisible=_mixerVisible;
@property(nonatomic) _Bool pianoRollEditorDoneButtonClosesMiniArrange; // @synthesize pianoRollEditorDoneButtonClosesMiniArrange=_pianoRollEditorDoneButtonClosesMiniArrange;
@property(nonatomic, getter=isPianoRollEditorAddNoteModeEnabled) _Bool pianoRollEditorAddNoteModeEnabled; // @synthesize pianoRollEditorAddNoteModeEnabled=_pianoRollEditorAddNoteModeEnabled;
@property(nonatomic, getter=isPianoRollEditorEnabled) _Bool pianoRollEditorEnabled; // @synthesize pianoRollEditorEnabled=_pianoRollEditorEnabled;
@property(nonatomic) _Bool preventNewSongDeletion; // @synthesize preventNewSongDeletion=_preventNewSongDeletion;
@property(nonatomic, getter=isMasterTrackFXIMVisible) _Bool masterTrackFXIMVisible; // @synthesize masterTrackFXIMVisible=_masterTrackFXIMVisible;
@property(nonatomic, getter=isRegionRenameModeEnabled) _Bool regionRenameModeEnabled; // @synthesize regionRenameModeEnabled=_regionRenameModeEnabled;
@property(nonatomic, getter=isTrackRenameModeEnabled) _Bool trackRenameModeEnabled; // @synthesize trackRenameModeEnabled=_trackRenameModeEnabled;
@property(getter=isChooseTrackAreaVisible) _Bool chooseTrackAreaVisible; // @synthesize chooseTrackAreaVisible=_chooseTrackAreaVisible;
- (void).cxx_destruct;
- (void)sendSustainOffToAllKeyboardStyledTracks;
- (void)localizeRootTrackNamesAndAffectedGridRowsWithInstIDs:(id)arg1;
- (void)removeNotSupportedRootTracksAndGridRowsForGridImportedRowsWithInstIDs:(id)arg1;
- (_Bool)_tryToGridLocalizeString:(id)arg1 pResultStr:(id *)arg2 tableOrdering:(id)arg3;
- (_Bool)_tryToGridLocalizeStringHelper:(id)arg1 pResultStr:(id *)arg2 tableOrdering:(id)arg3;
- (_Bool)shouldUseCellRecordingEngine;
- (id)defaultTrackNameForInputMethodKey:(id)arg1;
- (void)setTrackInspectorInternalState:(id)arg1;
- (id)trackInspectorInternalState;
- (void)enableMetronomeForCellRecordingIfFirstTime;
- (void)disableMetronomeAutoEnableForCellRecording;
- (_Bool)multiTrackRecordingActive;
- (void)autoEnableTrackRecordEnableIsVisibleIfNeeded;
- (void)setLengthOfSongPartWithMarkerIndex:(long long)arg1 toBarCount:(int)arg2 makeUndo:(_Bool)arg3;
- (void)deleteSongPartWithMarkerIndex:(long long)arg1 makeUndo:(_Bool)arg2 updateActiveSongPartsIfNecessary:(_Bool)arg3;
- (void)moveSongPartWithMarkerIndex:(long long)arg1 toNewIndex:(long long)arg2 makeUndo:(_Bool)arg3;
- (void)duplicateSongPartWithMarkerIndex:(long long)arg1 makeUndo:(_Bool)arg2;
- (void)addNewSongPartWithLength:(long long)arg1 makeUndo:(_Bool)arg2;
- (_Bool)shouldCreateGenInstRegionsForNewSongPartOrSongPartLengthChange;
- (_Bool)setSongSettingsWithDictionary:(id)arg1 clearUndoHistroyIfNeeded:(_Bool)arg2;
- (id)songSettings:(int)arg1;
- (id)songBasedIMSettingObjectForKey:(id)arg1;
- (void)setSongBasedIMSettingObject:(id)arg1 forKey:(id)arg2;
- (int)pasteObjectsFromPasteBoardToMainGridAtLocation:(struct LgGridLocation)arg1;
- (int)_pasteAudioClipboardToTargetTrack:(id)arg1 targetIsGrid:(_Bool)arg2 gridLocation:(struct LgGridLocation)arg3;
- (int)pasteObjectsFromPasteBoard:(id)arg1;
- (id)_getUniqueAudioFileBaseNameInSongWithPrefix:(id)arg1;
- (_Bool)canTrackHandleCurrentPasteBoardData:(id)arg1 allowedTypes:(long long)arg2 targetIsGrid:(_Bool)arg3;
- (_Bool)canTrackHandleCurrentPasteBoardData:(id)arg1 allowedTypes:(long long)arg2;
- (id)_supportedExternalAudioPasteboardTypes;
- (id)lastCopyToPasteboardSourceTrackInputMethodKey;
- (void)setDefaultTrackEqFreqsIfNecessaryForTrack:(id)arg1;
- (_Bool)stopSequencerIfNeededAndSendToJamSyncPeersIfNeeded;
- (id)sessionUUID;
- (void)setSessionUUID:(id)arg1;
- (void)createSessionUUID;
- (void)renameAllSamplerTracksWithName:(id)arg1 newName:(id)arg2;
- (id)currentSettingsSheetPage;
- (void)setCurrentSettingsSheetPage:(id)arg1;
- (id)currentMediaImporterPage;
- (void)setCurrentMediaImporterPage:(id)arg1;
- (void)_deleteMasterTrackVolumeAutomationAndAddFadeoutAtLastSongPart;
- (void)deleteMasterTrackVolumeAutomationAndAddFadoutWithEndClock:(long long)arg1 lengthInMilliSeconds:(double)arg2;
@property(nonatomic) _Bool automaticFadeOutEnabled;
- (void)automaticMasterTrackFadeOutNeedsUpdateIfAvailable;
- (void)setGlobalKeyAndTransposeRegionsIfEnabled:(int)arg1 makeUndo:(_Bool)arg2;
- (_Bool)isRegionJoinAllowed;
- (id)_makeSureTrackInputMethodKeyIsValid:(id)arg1;
- (id)setTrackInputMethodStandardKeyIfNotSet:(id)arg1;
- (_Bool)canCreateAlchemyTrack;
- (_Bool)canCreateDrummerTrack;
- (_Bool)canTrackBeQuantized:(id)arg1;
- (int)canTrackHandleFile:(id)arg1 isLoop:(_Bool)arg2 hasMidiData:(_Bool)arg3 isMidiOnly:(_Bool)arg4 isExternalFile:(_Bool)arg5 allowMidi:(_Bool)arg6;
- (_Bool)canTrack:(id)arg1 handleRegionsOfTrack:(id)arg2 allowAudioRegionOnSamplerTrack:(_Bool)arg3;
- (_Bool)_canInputMethodWithKey:(id)arg1 handleRegionsOfInputMethodWithKeyAndSameTrackType:(id)arg2 allowAudioRegionOnSamplerTrack:(_Bool)arg3;
- (id)addNewTrackWithInputMethodKey:(id)arg1 replaceWithTrack:(id)arg2 alsoCreateClipsGridRow:(_Bool)arg3 makeUndo:(_Bool)arg4 useRecentCSTCache:(_Bool)arg5 nonDefaultCSTPath:(id)arg6;
- (id)addNewTrackWithInputMethodKey:(id)arg1 replaceWithTrack:(id)arg2 alsoCreateClipsGridRow:(_Bool)arg3 makeUndo:(_Bool)arg4 useRecentCSTCache:(_Bool)arg5;
- (id)addNewTrackWithInputMethodKey:(id)arg1 replaceWithTrack:(id)arg2 alsoCreateClipsGridRow:(_Bool)arg3 makeUndo:(_Bool)arg4;
- (id)addNewTrackWithInputMethodKey:(id)arg1 replaceWithTrack:(id)arg2;
- (id)addNewTrackWithInputMethodKey:(id)arg1 makeUndo:(_Bool)arg2;
- (id)addNewTrackWithInputMethodKey:(id)arg1;
- (unsigned long long)countTracksWithInputMethodKey:(id)arg1;
- (void)setInitialTrackSettingsForNewTrack:(id)arg1;
- (id)createNewAudioTrackForSubMixBouncingResultAndMakeUndo:(_Bool)arg1;
@property(nonatomic) _Bool globalKeyChangeShouldTransposeRegions;
@property(nonatomic) float arrangeZoomBeforeFullScreenEditorOpened;
@property(nonatomic, getter=isAutomationEditorAddEventsModeEnabled) _Bool automationEditorAddEventsModeEnabled; // @synthesize automationEditorAddEventsModeEnabled=_automationEditorAddEventsModeEnabled;
@property(nonatomic, getter=isAutomationEditorEnabled) _Bool automationEditorEnabled; // @synthesize automationEditorEnabled=_automationEditorEnabled;
@property(nonatomic, getter=isInputMethodEditModeEnabled) _Bool inputMethodEditModeEnabled;
@property(nonatomic) _Bool shouldOpenMixerWhenClosingTI;
- (_Bool)extraSignaturesVisibleInSignatureMenu;
- (void)setExtraSignaturesVisibleInSignatureMenu:(_Bool)arg1;
@property(readonly, nonatomic) int miniArrangeStyle;
- (_Bool)_masterTrackAllowedToBeSelectedAfterUndo;
@property(nonatomic, getter=isMiniArrangeVisible) _Bool miniArrangeVisible;
- (_Bool)isMiniArrangeVisibleRawModelValue;
- (struct CGPoint)arrangeScrollOffset;
- (void)setArrangeScrollOffset:(struct CGPoint)arg1;
@property(nonatomic) _Bool arrangeButtonWasShown;
- (_Bool)isAutomaticRecordingActiveForLastSongPart;
- (void)setAutomaticRecordingActiveForLastSongPart:(_Bool)arg1;
- (_Bool)userDidManuallyChangeTempo;
- (void)setUserDidManuallyChangeTempo:(_Bool)arg1;
- (void)autoFixChannelStripFullPathForChannel:(id)arg1;
- (_Bool)_doesCSTorPatchPathExist:(id)arg1 writeFixedPathTo:(id *)arg2;
- (id)channelStripFolderBasePathForTrack:(id)arg1;
- (void)unfreezeAllSamplerTracks;
- (void)resetFreezeStatusForEmptyTracks;
- (void)doFreezeOnly;
- (void)overloadDetected:(id)arg1;
- (void)handleWillResignActiveNotification:(id)arg1;
- (void)handleFreezeFinished:(id)arg1;
- (void)resetStopAfterFreeze;
- (void)cpuSampleTimerAction:(id)arg1;
- (void)setDefaultValueForGridHighLatency;
- (void)showSwitchToHighLatencyWarning;
- (void)showGridOverloadWarningAlways:(_Bool)arg1;
- (void)pauseFreezeTimerForSeconds:(int)arg1;
- (_Bool)doFreezeEnableAllGridTracks;
- (_Bool)doFreezeEnableAllArrangeTracks:(_Bool)arg1;
- (_Bool)doFreezeEnableAllArrangeTracks;
- (_Bool)anyArrangeTrackNeedsFreeze;
- (void)doFreezeEnableEXSAndLoopTracks;
- (void)stopCPUSampling:(id)arg1;
- (void)startCPUSampling:(id)arg1;
- (void)documentDidStopRecording:(_Bool)arg1;
- (void)documentIsAboutToStartRecording:(_Bool)arg1;
- (void)prepareForMasterTrackRecording;
- (_Bool)_switchRegionsToAutoLoopedOnTrack:(id)arg1 ifStartsAtClock:(long long)arg2 andEndsAtClock:(long long)arg3;
- (void)documentIsAboutToStartPlaying:(_Bool)arg1;
- (void)pausePlayingClipsIfNecessary;
- (void)updateTempMuteModesIfNeeded;
- (void)resetTempMuteModesToDefaults:(_Bool)arg1;
- (void)resetLogicObjectsPasteboardFlags;
- (void)_fillCutCopyPasteHelpersWithCurrentInfoForSource:(int)arg1;
- (void)setCurrentTrack:(id)arg1 doDeselect:(_Bool)arg2;
- (void)setPersistentPreviousCurrentTrack:(id)arg1;
- (id)persistentPreviousCurrentTrack;
- (void)_afterPaste:(_Bool)arg1;
- (void)_cbUndoRedoHandler:(id)arg1;
- (void)_cbWillUndoRedoHandler:(id)arg1;
- (void)documentDidSaveHandler:(id)arg1;
- (void)documentWillSaveHandler:(id)arg1;
- (void)channelStateChangedHandler:(id)arg1;
- (void)audioUnitCrashedHandler:(id)arg1;
- (void)audioDriverChangedHandler:(id)arg1;
- (void)audioDriverWillChangeHandler:(id)arg1;
- (void)disableInputEQIfNeededForTrack:(id)arg1;
- (void)enableInputEQIfNeededForTrack:(id)arg1;
- (void)setInputEQEnabled:(_Bool)arg1 forTrack:(id)arg2;
- (void)inputEQWasEnabledForChannel:(id)arg1;
- (_Bool)shouldInputEQBeEnabledForTrack:(id)arg1 isRecording:(_Bool)arg2;
- (_Bool)shouldInputEQBeDisabledForTrack:(id)arg1;
- (_Bool)_currentAudioRouteShouldHaveInputEQ;
- (id)defaultNameForRegionsOnTrack:(id)arg1;
- (void)removeSessionTrackUUIDIfIsConnectedHostForTrack:(id)arg1;
- (void)quickStart;
- (_Bool)trackIsEasySamplerTrack:(id)arg1;
- (void)trackWillBeDeletedFromModel:(id)arg1;
- (void)setMasterTrackVisible:(_Bool)arg1;
- (_Bool)masterTrackIsVisible;
- (void)songDidLoad;
- (void)convertLegacyTracksWhileSongLoadingIfNeeded;
- (void)_convertLegacySmartKeyboardTrackMappingsAndTIDataIfNeededForPreHeartsTrack:(id)arg1;
- (void)_resetViewStatesToPlainArrange;
- (void)_assignMasterTrackFXIfNeeded;
- (void)addAppSpecificAssetsMetaDataEntriesForSavingDocumentToDict:(id)arg1;
- (id)_convertContentPathToAssetsMetaDataPath:(id)arg1;
- (void)convertGenInstTracksAfterSongLoadIfNeeded;
- (id)defaultInputMethodKeyForLoopTrack:(id)arg1;
- (_Bool)defaultTransposeLockedValueForClip:(id)arg1 pCanBeChangedInUI:(_Bool *)arg2;
- (_Bool)shouldUseRecordingTakesAndReplaceModeInsteadOfTakesMode;
- (_Bool)shouldPreventRecEnablingForTrack:(id)arg1;
- (_Bool)shouldCreateRecordingRegionForTrackEvenIfNotRecordEnabled:(id)arg1;
- (_Bool)canTrackBeSwitchedToStereo:(id)arg1;
- (_Bool)shouldQuantizeRegionsAfterRecordingForTrack:(id)arg1;
- (void)setCountInEnabled:(_Bool)arg1;
- (void)setMetronomEnabled:(_Bool)arg1;
- (_Bool)shouldRecordWithMergeRecording;
- (_Bool)shouldUseTakeRecordingFromSPL;
- (_Bool)shouldRecordWithCycleRecordingIfCycleIsActive;
- (void)updateCachedValuesFromPersistentData;
- (_Bool)newDocumentCreated;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

