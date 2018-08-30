//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CbCstBrowserDelegate-Protocol.h"
#import "CbHelpOverlayPageProvider-Protocol.h"
#import "CbInputMenuControllerProtocol-Protocol.h"
#import "CbMIDIFileImporterDelegate-Protocol.h"
#import "CbMidiInputProtocol-Protocol.h"
#import "DfRegionEventTransferDelegate-Protocol.h"
#import "MAUITransitionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CbArrangeModel, CbAssetThemeController, CbInputMethodSettings, CbInterappAudioAppSelectorView, CbNewCstBrowserViewController, CbSongMainViewController, DfDocument, DfTrack, MAUISimpleWipeTransitionView, NSArray, NSDictionary, NSString, NSUndoManager, UIBarButtonItem, UIColor, UINavigationController, UISwipeGestureRecognizer, UIView;

@interface CbBasicInputViewController : UIViewController <CbMidiInputProtocol, CbMIDIFileImporterDelegate, MAUITransitionViewDelegate, CbInputMenuControllerProtocol, DfRegionEventTransferDelegate, CbHelpOverlayPageProvider, UIGestureRecognizerDelegate, CbCstBrowserDelegate>
{
    DfDocument *_document;
    DfTrack *_track;
    NSString *_controllerID;
    CbNewCstBrowserViewController *_cstBrowser;
    UINavigationController *_popover;
    CbAssetThemeController *_skinController;
    MAUISimpleWipeTransitionView *_skinTransitionView;
    CbSongMainViewController *_songViewController;
    CbInputMethodSettings *_settings;
    NSDictionary *_helpOverlayAssetSet;
    NSUndoManager *_localUndoManager;
    UIBarButtonItem *_popoverBarButtonItem;
    struct CGRect _popoverRect;
    UIView *_popoverView;
    long long _lastPlayedMidiNoteValue;
    long long _demoNoteCurrentIndex;
    NSArray *_demoNoteArray;
    _Bool _switchedToNextCst;
    UIColor *_navBarAmbientColor;
    CbInterappAudioAppSelectorView *_interappAudioAppSelector;
    UIView *_contentView;
    _Bool _isParamEditMode;
    _Bool _skinPreventsParamEditMode;
    UISwipeGestureRecognizer *_closeParameterControlSwipeUpGesture;
    UIColor *_navBarAmbientParamEditModeColor;
    NSString *_skinIDFamily;
}

+ (_Bool)needsFullSizeFrameOnWidePadForTrack:(id)arg1;
+ (Class)inputMethodSettingsClass;
@property(retain, nonatomic) NSString *skinIDFamily; // @synthesize skinIDFamily=_skinIDFamily;
@property(retain, nonatomic) CbInterappAudioAppSelectorView *interappAudioAppSelector; // @synthesize interappAudioAppSelector=_interappAudioAppSelector;
@property(nonatomic) _Bool switchedToNextCst; // @synthesize switchedToNextCst=_switchedToNextCst;
@property(nonatomic) _Bool skinPreventsParamEditMode; // @synthesize skinPreventsParamEditMode=_skinPreventsParamEditMode;
@property(retain, nonatomic) UIColor *navBarAmbientParamEditModeColor; // @synthesize navBarAmbientParamEditModeColor=_navBarAmbientParamEditModeColor;
@property(retain, nonatomic) UIColor *navBarAmbientColor; // @synthesize navBarAmbientColor=_navBarAmbientColor;
@property(retain, nonatomic) NSArray *demoNoteArray; // @synthesize demoNoteArray=_demoNoteArray;
@property(nonatomic) long long demoNoteCurrentIndex; // @synthesize demoNoteCurrentIndex=_demoNoteCurrentIndex;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSDictionary *helpOverlayAssetSet; // @synthesize helpOverlayAssetSet=_helpOverlayAssetSet;
@property(readonly, nonatomic) CbInputMethodSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) CbSongMainViewController *songViewController; // @synthesize songViewController=_songViewController;
@property(readonly, nonatomic) __weak DfTrack *track; // @synthesize track=_track;
@property(readonly, nonatomic) NSString *controllerID; // @synthesize controllerID=_controllerID;
@property(readonly, nonatomic) __weak DfDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)updateNavBarZoomButtonVisibility;
- (void)navBarZoomButtonPressed;
- (_Bool)navBarShouldShowZoomButton;
- (void)externalFullScreenModeWillCloseAnimated:(_Bool)arg1 targetViewSize:(struct CGSize)arg2;
- (void)externalFullScreenModeWillOpenAnimated:(_Bool)arg1 targetViewSize:(struct CGSize)arg2;
- (void)externalFullScreenModeDidCloseAnimated:(_Bool)arg1;
- (void)externalFullScreenModeDidOpenAnimated:(_Bool)arg1;
- (struct CGSize)externalFullScreenModeFullSize;
- (double)externalFullScreenModeAnimationDuration;
- (_Bool)isSwitchToExternalFullScreenModeCurrentlyAllowed;
- (void)switchToExternalFullScreenMode;
- (struct CGRect)externalFullScreenModeViewOriginalFrameInSuperview;
- (id)externalFullScreenModeSuperview;
- (id)externalFullScreenModeView;
- (id)cstBrowserPassThroughViews;
- (_Bool)cstBrowserShouldCloseOnCSTSelection;
- (_Bool)cstBrowserGetsPresentedFromInstrumentBrowser;
- (_Bool)currentActiveCSTHasBassAmpTypeSelectedForCSTBrowser:(id)arg1;
- (void)cstBrowserSheetDidCloseForCSTBrowser:(id)arg1;
- (void)cstBrowserSheetWillCloseForCSTBrowser:(id)arg1;
- (void)cstBrowser:(id)arg1 currentActiveCSTWasRenamedToPath:(id)arg2;
- (void)cstBrowser:(id)arg1 saveCurrentActiveCSTToPath:(id)arg2;
- (void)cstBrowserDidHideNameEditorKeyboard:(id)arg1;
- (void)cstBrowserWillShowNameEditorKeyboard:(id)arg1;
- (id)currentActiveCSTSubCategoryForCSTBrowser:(id)arg1;
- (_Bool)currentActiveCSTIsDirtyForCSTBrowser:(id)arg1;
- (id)currentActiveCSTPathForCstBrowser:(id)arg1 isRecentsCategoryCST:(_Bool *)arg2;
- (void)cstBrowser:(id)arg1 selectedCSTAtPath:(id)arg2 isRecentsCategoryCST:(_Bool)arg3;
- (void)switchCurrentInputViewControllerToControllerWithID:(id)arg1;
- (id)inputViewControllerSwitchingGetSpecialMovingItemsSnapshotViewFramesForAnimation:(_Bool)arg1;
- (id)inputViewControllerSwitchingGetSpecialMovingItemsSnapshotViewsForAnimation:(_Bool)arg1;
- (id)inputViewControllerSwitchingGetSnapshotViewForAnimation:(_Bool)arg1;
- (double)inputViewControllerSwitchingSimpleMoveAndFadeAnimationOffset;
- (_Bool)inputViewControllerSwitchingSupportsSimpleMoveAndFadeAnimation;
- (void)startInputViewControllerSwitchingAnimationToControllerID:(id)arg1 animationCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)inputViewControllerSwitchingSupportsCustomAnimationInTI;
- (void)controllerDidOpenAfterSwitchToFromControllerForSameTrackWithContext:(id)arg1;
- (id)controllerWillCloseAndSwitchToOtherControllerForSameTrack;
- (_Bool)isRecording;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)allowClosingGestureAtPoint:(struct CGPoint)arg1;
- (void)paramEditModeWillChange:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (_Bool)contentViewShouldAutoAdjustHeightOnPhone;
- (_Bool)forceToParamEditMode;
- (_Bool)supportsCSTButtonOnPhone;
- (_Bool)supportsParamEditModeMoveAnimation;
- (_Bool)supportsParamEditModeSwipeGesture;
- (_Bool)supportsParamEditMode;
- (void)setParamEditMode:(_Bool)arg1 animated:(_Bool)arg2 animationCompletionBlock:(CDUnknownBlockType)arg3;
- (void)setParamEditMode:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isParamEditMode;
- (void)fixPhoneFrameBugIfNeeded;
- (void)updateNavBarAmbientColor;
- (void)updateParamEditModeStateAnimated:(_Bool)arg1;
- (void)toggleParamEditModeAnimated;
- (void)specialNavBarButtonAction:(id)arg1;
- (_Bool)specialNavBarButtonIsSelected;
- (id)specialNavBarButtonAssetSetPath;
- (_Bool)needsSpecialNavBarButton;
- (void)_updateCurrentlyUsedScaleDescriptors;
- (void)_finalizeSkinChangeAnimationAndStartWithOldTempView:(id)arg1;
- (void)_prepareSkinChangeAnimationHelperViews:(id *)arg1;
- (void)_startSkinTransitionForNewView:(id)arg1 direction:(int)arg2 animationID:(id)arg3;
- (_Bool)_skinTransitionShouldRasterize;
- (void)_prepareSkinTransitionViewForOldView:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)transitionViewDidFinish:(id)arg1;
- (unsigned long long)normalizedVelocity:(unsigned long long)arg1;
- (void)createUndoStepForRegionTransfer:(id)arg1 withString:(id)arg2;
- (void)_undoRedoRegionTransfer:(id)arg1;
@property(readonly, nonatomic) NSUndoManager *localUndoManager;
- (_Bool)hasLocalUndoManager;
- (id)undoManager;
- (void)parameterMappingControllerControlsCreated;
- (id)parameterMappingController;
- (unsigned long long)cstBrowserPopoverArrowDirections;
- (void)openCstBrowserAction:(id)arg1;
- (void)changeToPreviousCstSwipeAction:(id)arg1;
- (void)changeToNextCstSwipeAction:(id)arg1;
- (void)changeToNextOrPreviousCST:(_Bool)arg1;
- (id)inputMethodKeyForCSTBrowser;
- (void)openCSTBrowserModalSheet;
- (id)passthroughViews;
- (void)closePopoverWithBlock:(CDUnknownBlockType)arg1;
- (void)closePopover;
- (void)closePopoverAnimated:(_Bool)arg1;
- (void)setPopoverHidden:(_Bool)arg1;
- (id)currentCSTRestoreDataDict;
- (void)setCSTWithCSTRestoreDataDict:(id)arg1;
- (void)setCSTFile:(id)arg1 isRecentsCategoryCST:(_Bool)arg2;
- (void)_recStateChangedHandler:(id)arg1;
- (void)_undoRedoHandler:(id)arg1;
- (void)_willUndoRedoHandler:(id)arg1;
- (void)_handleChannelStateChangedNotification:(id)arg1;
- (_Bool)updateTIViewFrameIfNeededWithDuration:(double)arg1 additionalConcurrentAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCSTPicker;
- (id)currentChannelStripSelectorIcon;
- (id)currentChannelStripIcon;
- (id)channelStripsFolderPaths;
- (void)channelWillLoadChannelStrip;
- (void)channelDidLoadChannelStrip:(_Bool)arg1 isUndoRedo:(_Bool)arg2;
- (void)storeCSTInfoAndScreenshotIfNeeded;
- (void)delayedChannelStripLoadedAndWantsAnimation;
- (void)internalChannelStripLoadedAndWantsAnimation;
- (_Bool)channelStripLoadedAndWantsAnimation;
- (void)_channelDidLoadChannelStripHandler:(id)arg1;
- (void)_handleChannelStripDidChange:(_Bool)arg1;
- (void)updateVisibleHelpSets;
- (id)visibleHelpIndices;
- (id)allHelpIndices;
- (double)helpOverlayPageYOffset;
- (_Bool)helpOverlayShowSongPartsHelpBubble;
- (id)helpOverlayPageID;
- (id)helpOverlayMainID;
- (void)updateHelpOverlay;
- (id)helpOverlayPageController;
- (id)helpOverlayMainController;
- (void)inputMenuButtonAction:(id)arg1;
- (float)inputGain;
- (void)setInputGain:(float)arg1;
- (void)setAGCActive:(_Bool)arg1;
- (_Bool)isAGCActive;
- (void)setMonitoringActive:(_Bool)arg1;
- (_Bool)isMonitoringActive;
- (void)activeChannelIndex:(long long *)arg1 numChannels:(long long *)arg2;
- (void)setActiveChannelIndex:(long long)arg1 numChannels:(long long)arg2;
- (id)inputMenuTrack;
- (unsigned long long)permittedOpenDirection;
- (_Bool)allowsInputGain;
- (_Bool)allowsAGC;
- (_Bool)allowsStereoInput;
- (_Bool)allowsMonitorSwitch;
- (_Bool)allowsNoiseGate;
- (void)_showMonoAudioAlertIfNeeded;
- (_Bool)_checkForMonoAudio;
- (void)stopPlayingDemoNote;
- (void)startPlayingDemoNote;
- (void)resetDemoNotes;
- (void)recordingStopped;
- (void)recordingStarted;
- (void)recordingWillStart;
- (_Bool)supportsInputMonitoring;
- (void)chordEditingModeDidEnd;
- (void)showChordEditingMode;
- (_Bool)supportsChordEditingMode;
- (void)sendCurrentVisibleControllerUIMidiEvents:(_Bool)arg1;
- (void)resetCurrentVisibleMidiControllerUI;
- (id)_makeScreenShot:(int)arg1;
- (void)didMakeScreenShot:(int)arg1 context:(id)arg2;
- (id)willMakeScreenShot:(int)arg1;
- (void)_appScreenShotHandler:(id)arg1;
- (void)handleSongTimeSignatureChange;
- (void)_handleTimeSignatureChanged:(id)arg1;
- (void)_handleTimeSignatureWillChange:(id)arg1;
- (void)_recSeqWithoutNoteEventsIgnoredHandler:(id)arg1;
- (void)_transportStartHandler:(id)arg1;
- (void)_cellRecStateChangedHandler:(id)arg1;
- (void)_freezeDidStopAsyncHandler:(id)arg1;
- (void)activeMainFolderDidChange;
- (void)activeMainFolderWillChange;
- (void)resetTrackRefToRootTrackForUpcomingArrangeMainFolderChange;
- (void)trackDidChangeWithOldTrack:(id)arg1;
- (void)trackWillChangeToTrack:(id)arg1;
- (void)_selectedTrackDidChangeButInputMethodStayedTheSame;
- (void)activeSongPartsDidChange;
- (void)_activeSongPartsDidChangeHandler:(id)arg1;
- (unsigned char)mb3FromString:(id)arg1;
- (int)currentInstrumentID;
- (void)sendValue:(unsigned char)arg1 mb3:(unsigned char)arg2 toController:(unsigned char)arg3 onChannel:(unsigned char)arg4;
- (void)sendValue:(unsigned char)arg1 mb3:(unsigned char)arg2 toController:(unsigned char)arg3;
- (void)sendChannelPressure:(int)arg1 mb3:(unsigned char)arg2 toChannel:(int)arg3;
- (void)sendPitchbend:(int)arg1 mb3:(unsigned char)arg2;
- (void)sendPitchbend:(int)arg1 mb3:(unsigned char)arg2 toChannel:(int)arg3;
- (void)sendNoteOff:(int)arg1 toInstrumentID:(int)arg2 mb3:(unsigned char)arg3;
- (void)sendNoteOff:(int)arg1 toInstrumentID:(int)arg2 mb3:(unsigned char)arg3 toChannel:(int)arg4;
- (void)sendNoteOff:(int)arg1 toInstrumentID:(int)arg2 withVelocity:(unsigned char)arg3 mb3:(unsigned char)arg4 toChannel:(int)arg5;
- (void)sendNoteOn:(int)arg1 toInstrumentID:(int)arg2 withVelocity:(unsigned char)arg3 mb3:(unsigned char)arg4;
- (void)sendNoteOn:(int)arg1 toInstrumentID:(int)arg2 withVelocity:(unsigned char)arg3 mb3:(unsigned char)arg4 toChannel:(int)arg5;
- (void)sendNoteOn:(int)arg1 toInstrumentID:(int)arg2 withVelocity:(unsigned char)arg3 mb3:(unsigned char)arg4 toChannel:(int)arg5 touch:(id)arg6;
- (void)sendCurrentTrackMidiEventWithByte0:(unsigned char)arg1 byte1:(unsigned char)arg2 byte2:(unsigned char)arg3 byte3:(unsigned char)arg4;
- (void)sendMidiEventWithByte0:(unsigned char)arg1 byte1:(unsigned char)arg2 byte2:(unsigned char)arg3 byte3:(unsigned char)arg4 toInstrumentID:(int)arg5;
- (int)currentSongKey;
- (_Bool)currentSongKeyIsMajor;
@property(readonly, nonatomic) long long lastPlayedMidiNoteValue;
- (void)previewPlayerDidStop;
- (void)_previewPlayerStopped:(id)arg1;
- (void)stopCurrentPreview;
- (void)stopTransientClips;
- (_Bool)needsLiveMode;
- (id)sendEventToViewForView:(id)arg1;
- (void)updateSkin;
- (void)_updateSkinWithAnimation:(_Bool)arg1 callChannelDidLoadChannelStrip:(_Bool)arg2 cstChangeIsUndoRedo:(_Bool)arg3 callTrackDidChangeWithOldTrack:(id)arg4 updateHelpOverlay:(_Bool)arg5 updateParamEditMode:(_Bool)arg6;
- (void)_handleSkinInvalidations:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)skinDidLoad;
- (id)defaultSkinAssetName;
- (id)skinIdToLoad;
- (_Bool)isSkinControlled;
- (void)didReceiveBackgroundWarning:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)appIsClosingOrSuspending:(_Bool)arg1;
- (void)appDidBecomeActive:(_Bool)arg1;
- (void)controllerDidClose;
- (void)_handleSongUIWillCloseOrSongWillBeSaved:(id)arg1;
- (void)_handleDocDidSave:(id)arg1;
- (void)didSaveDocument;
- (void)willSaveDocument;
- (void)writeImportantUIStatesToSettings;
- (void)trackWillBeDeleted;
- (void)songWillClose;
- (void)_cleanUpCstBrowserPopover;
- (void)controllerWillClose;
- (void)controllerDidOpen;
- (void)_autoUpdateInputMonitoringOnOpenClose:(_Bool)arg1;
- (void)controllerWillOpen;
- (void)updateForCurrentTrack;
@property(readonly, nonatomic) CbArrangeModel *arrangeModel;
- (void)viewDidLoad;
- (id)nibName;
- (id)initWithDocument:(id)arg1 andControllerID:(id)arg2 track:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

