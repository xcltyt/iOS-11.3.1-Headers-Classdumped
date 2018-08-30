//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class CbInputMethodSettings, CbSettingsSheetController, CbSongMainViewController, CbTrackPanelViewController, DfDocument, DfEventPlayer, DfTrack, MAUIPanSlider, MAUISlider, NSLayoutConstraint, NSString, UISlider, UISwitch, UITableViewCell;

@interface CbInputMethodTrackMixerViewController : UITableViewController
{
    DfDocument *_document;
    DfTrack *_track;
    CbSongMainViewController *_songMainViewController;
    CbSettingsSheetController *_settingsSheetController;
    DfEventPlayer *_eventPlayer;
    MAUIPanSlider *_panSlider;
    MAUISlider *_volumeSlider;
    MAUISlider *_echoSlider;
    MAUISlider *_reverbSlider;
    UITableViewCell *_slidersCell;
    _Bool _allowToCacheVisibleScrollRect;
    UISwitch *_muteSwitch;
    UISwitch *_soloSwitch;
    MAUIPanSlider *_trebleSlider;
    MAUIPanSlider *_bassSlider;
    MAUIPanSlider *_masterTrebleSlider;
    MAUIPanSlider *_masterBassSlider;
    UISlider *_compressorSlider;
    UITableViewCell *_masterSlidersCell;
    NSLayoutConstraint *_mixerLayoutLeadingConstraint1;
    NSLayoutConstraint *_mixerLayoutLeadingConstraint2;
    NSLayoutConstraint *_mixerLayoutLeadingConstraint3;
    NSLayoutConstraint *_mixerLayoutLeadingConstraint4;
    NSLayoutConstraint *_mixerLayoutLeadingConstraint5;
    NSLayoutConstraint *_mixerLayoutLeadingConstraint6;
    NSLayoutConstraint *_mixerLayoutLeadingConstraint7;
    NSLayoutConstraint *_mixerLayoutTrailingContraint1;
    NSLayoutConstraint *_mixerLayoutTrailingContraint2;
    NSLayoutConstraint *_mixerLayoutTrailingContraint3;
    NSLayoutConstraint *_mixerLayoutTrailingContraint4;
    NSLayoutConstraint *_mixerLayoutTrailingContraint5;
    NSLayoutConstraint *_mixerLayoutTrailingContraint6;
    NSLayoutConstraint *_mixerLayoutTrailingContraint7;
    CbTrackPanelViewController *_trackPanelViewController;
}

+ (void)dismissTrackMixerPopover;
+ (_Bool)isOpen;
@property(nonatomic) CbTrackPanelViewController *trackPanelViewController; // @synthesize trackPanelViewController=_trackPanelViewController;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutTrailingContraint7; // @synthesize mixerLayoutTrailingContraint7=_mixerLayoutTrailingContraint7;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutTrailingContraint6; // @synthesize mixerLayoutTrailingContraint6=_mixerLayoutTrailingContraint6;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutTrailingContraint5; // @synthesize mixerLayoutTrailingContraint5=_mixerLayoutTrailingContraint5;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutTrailingContraint4; // @synthesize mixerLayoutTrailingContraint4=_mixerLayoutTrailingContraint4;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutTrailingContraint3; // @synthesize mixerLayoutTrailingContraint3=_mixerLayoutTrailingContraint3;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutTrailingContraint2; // @synthesize mixerLayoutTrailingContraint2=_mixerLayoutTrailingContraint2;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutTrailingContraint1; // @synthesize mixerLayoutTrailingContraint1=_mixerLayoutTrailingContraint1;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutLeadingConstraint7; // @synthesize mixerLayoutLeadingConstraint7=_mixerLayoutLeadingConstraint7;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutLeadingConstraint6; // @synthesize mixerLayoutLeadingConstraint6=_mixerLayoutLeadingConstraint6;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutLeadingConstraint5; // @synthesize mixerLayoutLeadingConstraint5=_mixerLayoutLeadingConstraint5;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutLeadingConstraint4; // @synthesize mixerLayoutLeadingConstraint4=_mixerLayoutLeadingConstraint4;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutLeadingConstraint3; // @synthesize mixerLayoutLeadingConstraint3=_mixerLayoutLeadingConstraint3;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutLeadingConstraint2; // @synthesize mixerLayoutLeadingConstraint2=_mixerLayoutLeadingConstraint2;
@property(retain, nonatomic) NSLayoutConstraint *mixerLayoutLeadingConstraint1; // @synthesize mixerLayoutLeadingConstraint1=_mixerLayoutLeadingConstraint1;
@property(retain, nonatomic) UITableViewCell *masterSlidersCell; // @synthesize masterSlidersCell=_masterSlidersCell;
@property(retain, nonatomic) UISlider *compressorSlider; // @synthesize compressorSlider=_compressorSlider;
@property(retain, nonatomic) MAUIPanSlider *masterBassSlider; // @synthesize masterBassSlider=_masterBassSlider;
@property(retain, nonatomic) MAUIPanSlider *masterTrebleSlider; // @synthesize masterTrebleSlider=_masterTrebleSlider;
@property(retain, nonatomic) MAUIPanSlider *bassSlider; // @synthesize bassSlider=_bassSlider;
@property(retain, nonatomic) MAUIPanSlider *trebleSlider; // @synthesize trebleSlider=_trebleSlider;
@property(retain, nonatomic) UISwitch *soloSwitch; // @synthesize soloSwitch=_soloSwitch;
@property(retain, nonatomic) UISwitch *muteSwitch; // @synthesize muteSwitch=_muteSwitch;
@property(nonatomic) __weak CbSettingsSheetController *settingsSheetController; // @synthesize settingsSheetController=_settingsSheetController;
@property(readonly, nonatomic) __weak DfTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) UITableViewCell *slidersCell; // @synthesize slidersCell=_slidersCell;
@property(retain, nonatomic) UISlider *reverbSlider; // @synthesize reverbSlider=_reverbSlider;
@property(retain, nonatomic) UISlider *echoSlider; // @synthesize echoSlider=_echoSlider;
@property(retain, nonatomic) MAUIPanSlider *panSlider; // @synthesize panSlider=_panSlider;
@property(retain, nonatomic) UISlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
- (void).cxx_destruct;
- (void)dynamicTypeChangedHandler:(id)arg1;
- (void)_selectedTrackDidChangeHandler:(id)arg1;
- (void)updateForTrack:(id)arg1;
- (void)updateNumberOfSections;
- (struct CGSize)sizeForPopover;
- (double)widthForTrackPanel;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)trackAllowsCymbalBassTrigger;
- (_Bool)trackAllowsTakeRecording;
- (_Bool)mainTronGridIsVisible;
@property(readonly, nonatomic) NSString *currentIMControllerID;
@property(readonly, nonatomic) CbInputMethodSettings *currentIMSettings;
- (void)cymbalBassTriggerAction:(id)arg1;
- (void)velocitySensitivityAction:(id)arg1;
- (void)transpositionAction:(id)arg1;
- (void)quantizationAction:(id)arg1;
- (void)effectAction:(id)arg1;
- (void)compressorSliderAction:(id)arg1;
- (void)compressorSliderDoubleTapAction:(id)arg1;
- (void)bassSliderAction:(id)arg1;
- (void)bassSliderDoubleTapAction:(id)arg1;
- (void)trebleSliderAction:(id)arg1;
- (void)trebleSliderDoubleTapAction:(id)arg1;
- (void)reverbSliderAction:(id)arg1;
- (void)reverbSliderDoubleTapAction:(id)arg1;
- (void)echoSliderAction:(id)arg1;
- (void)echoSliderDoubleTapAction:(id)arg1;
- (void)takeRecordingSwitchAction:(id)arg1;
- (void)overDubSwitchAction:(id)arg1;
- (void)soloSwitchAction:(id)arg1;
- (void)muteSwitchAction:(id)arg1;
- (void)trackMixerSwitchAction:(id)arg1;
- (void)panSliderAction:(id)arg1;
- (void)panSliderDoubleTapAction:(id)arg1;
- (void)volumeSliderAction:(id)arg1;
- (void)volumeSliderDoubleTapAction:(id)arg1;
- (void)phoneGlobalSettingsDoneButtonAction:(id)arg1;
- (void)trackSegmentedControlValueChangedAction:(id)arg1;
- (id)trackListForStepper;
- (void)prelistenButtonAction:(id)arg1;
- (void)setCompressorValue:(float)arg1;
- (float)compressorValue;
- (void)setBassValue:(float)arg1;
- (long long)bassValue;
- (void)setTrebleValue:(long long)arg1;
- (long long)trebleValue;
- (void)bypassEQIfNeeded;
- (void)_handleTrackPropertyChange:(id)arg1;
- (void)updateIsOn;
- (void)updateMute:(_Bool)arg1;
- (void)updateMute;
- (void)updateSolo:(_Bool)arg1;
- (void)updateSolo;
- (void)updateCompressor;
- (void)updateBass;
- (void)updateTreble;
- (void)updateReverb;
- (void)updateEcho;
- (void)updatePan;
- (void)updateVolume;
- (void)updateControlsAndResize:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)cleanup;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (id)nibName;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)document;
- (id)initWithSongMainViewController:(id)arg1;

@end

