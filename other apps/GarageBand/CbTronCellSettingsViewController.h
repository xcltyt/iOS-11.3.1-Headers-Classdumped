//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "CbSettingRootViewControllerDelegate-Protocol.h"

@class CbObjectsSettingsManager, MAUIPanSlider, NSString, UILabel, UISlider, UIStepper, UITableViewCell;

@interface CbTronCellSettingsViewController : UITableViewController <CbSettingRootViewControllerDelegate>
{
    int _clipType;
    CbObjectsSettingsManager *_objectsSettingsManager;
    UITableViewCell *_volumeCell;
    UILabel *_volumeCellDescriptionLabel;
    UITableViewCell *_speedCell;
    UILabel *_volumeLabel;
    UILabel *_speedLabel;
    UISlider *_volumeSlider;
    MAUIPanSlider *_speedSlider;
    UIStepper *_octaveStepper;
    UIStepper *_semitonesStepper;
}

@property(retain, nonatomic) UIStepper *semitonesStepper; // @synthesize semitonesStepper=_semitonesStepper;
@property(retain, nonatomic) UIStepper *octaveStepper; // @synthesize octaveStepper=_octaveStepper;
@property(retain, nonatomic) MAUIPanSlider *speedSlider; // @synthesize speedSlider=_speedSlider;
@property(retain, nonatomic) UISlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) UILabel *speedLabel; // @synthesize speedLabel=_speedLabel;
@property(retain, nonatomic) UILabel *volumeLabel; // @synthesize volumeLabel=_volumeLabel;
@property(retain, nonatomic) UITableViewCell *speedCell; // @synthesize speedCell=_speedCell;
@property(retain, nonatomic) UILabel *volumeCellDescriptionLabel; // @synthesize volumeCellDescriptionLabel=_volumeCellDescriptionLabel;
@property(retain, nonatomic) UITableViewCell *volumeCell; // @synthesize volumeCell=_volumeCell;
@property(retain, nonatomic) CbObjectsSettingsManager *objectsSettingsManager; // @synthesize objectsSettingsManager=_objectsSettingsManager;
- (void).cxx_destruct;
- (void)dynamicTypeChangedHandler:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)transposeStepperAction:(id)arg1;
- (void)normalizeButtonAction:(id)arg1;
- (void)resetButtonAction:(id)arg1;
- (void)speedSliderDoubleTapAction:(id)arg1;
- (void)speedSliderAction:(id)arg1;
- (void)volumeSliderDoubleTapAction:(id)arg1;
- (void)volumeSliderAction:(id)arg1;
- (void)followSwitchAction:(id)arg1;
- (void)reverseSwitchAction:(id)arg1;
- (void)retriggerSwitchAction:(id)arg1;
- (void)loopingSwitchAction:(id)arg1;
- (void)togglesSwitchAction:(id)arg1;
- (void)doneButtonAction:(id)arg1;
- (_Bool)shouldShowDoneButtonForSubMenuViewController:(id)arg1;
- (void)pushViewControllerOfClass:(Class)arg1;
- (void)updateSpeedLabel;
- (void)updateSpeedLabelForSpeed:(double)arg1 hasMultipleValues:(_Bool)arg2;
- (void)updateSpeed;
- (void)updateVolumeLabel;
- (void)updateVolume;
- (void)updateControls;
- (void)updateVisibilityOfCellsAndSections;
- (void)willModifyObjects;
- (void)dealloc;
- (void)cleanUp;
- (struct CGSize)sizeForPopover;
- (void)willCloseViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

