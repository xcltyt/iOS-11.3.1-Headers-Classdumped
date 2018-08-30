//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CbAUInstParameterDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class CbInputTableViewCell, DfPlugIn, MAUILEDLevelMeterView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UINavigationController, UITableViewController;
@protocol CbInputMenuControllerProtocol;

@interface CbInputMenuController : NSObject <UITableViewDataSource, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, CbAUInstParameterDelegate>
{
    CbInputTableViewCell *_inputGainSliderCell;
    DfPlugIn *_noiseGatePlugIn;
    CbInputTableViewCell *_noiseGateSliderCell;
    NSMutableArray *_inputChannelInfos;
    _Bool _isInteralAudio;
    _Bool _monitorSwitchVisible;
    float _defaultInputGainCellHeight;
    float _defaultNoiseGateCellHeight;
    NSMutableDictionary *_noiseGateDict;
    NSMutableDictionary *_inputGainDict;
    NSMutableArray *_inputCells;
    NSMutableDictionary *_noiseGateSectionDict;
    NSArray *_topLevelObjects;
    _Bool _isSettingInterappAudioSourceOrEffect;
    _Bool _isSheet;
    _Bool _shouldShowNextTrackStepper;
    id <CbInputMenuControllerProtocol> _inputMenuDelegate;
    NSMutableDictionary *_sectionsDict;
    UINavigationController *_navigationController;
    UITableViewController *_rootTableViewController;
    UITableViewController *_inputRoutingTableViewController;
    UITableViewController *_interappAudioSourceTableViewController;
    UITableViewController *_interappAudioEffectTableViewController;
    UITableViewController *_interappAudioMainTableViewController;
    UITableViewController *_audioUnitsMainTableViewController;
    UITableViewController *_audioUnitsGeneratorTableViewController;
    MAUILEDLevelMeterView *_levelMeterView;
}

+ (void)closeAnimated;
+ (void)closeImmediately;
+ (void)_closeAnimated:(_Bool)arg1;
+ (void)showInputMenuForRect:(struct CGRect)arg1 inView:(id)arg2 delegate:(id)arg3 passthroughViews:(id)arg4 updatePositionAndContentsIfOpen:(_Bool)arg5 shouldShowNextTrackStepper:(_Bool)arg6;
+ (void)showInputMenuForRect:(struct CGRect)arg1 inView:(id)arg2 delegate:(id)arg3;
+ (_Bool)isOpenAsPopover;
@property(nonatomic) _Bool shouldShowNextTrackStepper; // @synthesize shouldShowNextTrackStepper=_shouldShowNextTrackStepper;
@property(nonatomic) _Bool isSheet; // @synthesize isSheet=_isSheet;
@property(nonatomic) MAUILEDLevelMeterView *levelMeterView; // @synthesize levelMeterView=_levelMeterView;
@property(retain, nonatomic) UITableViewController *audioUnitsGeneratorTableViewController; // @synthesize audioUnitsGeneratorTableViewController=_audioUnitsGeneratorTableViewController;
@property(retain, nonatomic) UITableViewController *audioUnitsMainTableViewController; // @synthesize audioUnitsMainTableViewController=_audioUnitsMainTableViewController;
@property(retain, nonatomic) UITableViewController *interappAudioMainTableViewController; // @synthesize interappAudioMainTableViewController=_interappAudioMainTableViewController;
@property(retain, nonatomic) UITableViewController *interappAudioEffectTableViewController; // @synthesize interappAudioEffectTableViewController=_interappAudioEffectTableViewController;
@property(retain, nonatomic) UITableViewController *interappAudioSourceTableViewController; // @synthesize interappAudioSourceTableViewController=_interappAudioSourceTableViewController;
@property(retain, nonatomic) UITableViewController *inputRoutingTableViewController; // @synthesize inputRoutingTableViewController=_inputRoutingTableViewController;
@property(retain, nonatomic) UITableViewController *rootTableViewController; // @synthesize rootTableViewController=_rootTableViewController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSMutableDictionary *sectionsDict; // @synthesize sectionsDict=_sectionsDict;
@property(nonatomic) id <CbInputMenuControllerProtocol> inputMenuDelegate; // @synthesize inputMenuDelegate=_inputMenuDelegate;
- (void).cxx_destruct;
- (struct CGRect)frameForSizeClass:(int)arg1;
- (id)plugInParameterInfoArrayWithMaxNumber:(long long)arg1;
- (id)plugInValueInfoDictForParameter:(long long)arg1;
- (void)setValue:(long long)arg1 forParameter:(long long)arg2;
- (void)parameterChangeDidFinish:(long long)arg1;
- (void)parameterWillChange:(long long)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)_audioUnitGeneratorAction:(id)arg1 indexPath:(id)arg2;
- (void)_openAudioUnitGeneratorUIAction:(id)arg1;
- (void)_gotoAudioUnitGeneratorMenuAction:(id)arg1 indexPath:(id)arg2;
- (id)_gotoAudioUnitGeneratorMenuCell:(id)arg1 indexPath:(id)arg2;
- (void)_gotoAudioUnitsMainMenuAction:(id)arg1 indexPath:(id)arg2;
- (id)_gotoAudioUnitsMainMenuCell:(id)arg1 indexPath:(id)arg2;
- (id)_audioUnitGeneratorCell:(id)arg1 indexPath:(id)arg2;
- (void)showAudioUnitUI:(id)arg1;
- (void)_updateAudioUnitsTableSections;
- (void)_updateAudioUnitsBaseTableSections;
- (void)_addAudioUnitMainSection:(id)arg1;
- (void)_addAudioUnitGeneratorSection:(id)arg1;
- (_Bool)_hasAudioUnitGeneratorSection;
- (_Bool)_hasAudioUnitMainSection;
- (void)_openInterappAudioEffectAppAction:(id)arg1;
- (void)_gotoInterappAudioEffectMenuAction:(id)arg1 indexPath:(id)arg2;
- (id)_gotoInterappAudioEffectMenuCell:(id)arg1 indexPath:(id)arg2;
- (void)_openInterappAudioSourceAppAction:(id)arg1;
- (void)_gotoInterappAudioMainMenuAction:(id)arg1 indexPath:(id)arg2;
- (void)_gotoInterappAudioSourceMenuAction:(id)arg1 indexPath:(id)arg2;
- (id)_gotoInterappAudioMainMenuCell:(id)arg1 indexPath:(id)arg2;
- (id)_gotoInterappAudioSourceMenuCell:(id)arg1 indexPath:(id)arg2;
- (void)_interappAudioSourceOrEffectAction:(id)arg1 indexPath:(id)arg2;
- (id)_interappAudioSourceOrEffectCell:(id)arg1 indexPath:(id)arg2;
- (void)_updateInterappAudioTableSections;
- (void)_updateInterappAudioBaseTableSections;
- (void)_addInterappAudioEffectSection:(id)arg1;
- (void)_addInterappAudioSourceSection:(id)arg1;
- (void)_addInterappAudioMainSection:(id)arg1;
- (_Bool)_hasInterappAudioEffectSection;
- (_Bool)_hasInterappAudioSourceSection;
- (_Bool)_hasInterappAudioMainSection;
- (void)_notifyDelegateAboutDidClose;
- (void)_closeSheetAction:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)tableViewWillAppear:(_Bool)arg1 tableViewController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_inputChannelAction:(id)arg1 indexPath:(id)arg2;
- (id)_inputChannelCell:(id)arg1 indexPath:(id)arg2;
- (void)_inputSourceAction:(id)arg1 indexPath:(id)arg2;
- (id)_inputSourceCell:(id)arg1 indexPath:(id)arg2;
- (void)_gotoInputChannelMenuAction:(id)arg1 indexPath:(id)arg2;
- (id)_gotoInputChannelMenuCell:(id)arg1 indexPath:(id)arg2;
- (id)_noiseGateSliderCell:(id)arg1 indexPath:(id)arg2;
- (id)_inputGainSliderCell:(id)arg1 indexPath:(id)arg2;
- (void)_monitorButtonAction:(id)arg1 indexPath:(id)arg2;
- (id)_monitoringButtonCell:(id)arg1 indexPath:(id)arg2;
- (id)_monitoringSwitchCell:(id)arg1 indexPath:(id)arg2;
- (void)selectNextTrackAction:(id)arg1;
- (void)monitorSwitchAction:(id)arg1;
- (void)noiseBypassSwitchAction:(id)arg1;
- (void)noiseGateSliderAction:(id)arg1;
- (void)inputGainAutomaticSwitchAction:(id)arg1;
- (void)inputGainSliderAction:(id)arg1;
- (void)updateSizeForTableViewController:(id)arg1;
- (void)_updateInputChannelInfos;
- (void)_update;
- (void)_updateInputSelectionTableSections;
- (void)_updateBaseTableSections;
- (struct CGSize)popoverSizeForTableView:(id)arg1;
- (struct CGSize)_calcSizeForTableView:(id)arg1;
- (float)_calcHeightForTableView:(id)arg1;
- (id)_channelInfoOfSelectedInput;
- (_Bool)_isChannelActiveForInfo:(id)arg1;
- (_Bool)_numberOfInputRoutings;
- (_Bool)_hasInputRoutingSection;
- (id)_curentNoiseGatePlugin;
- (id)_currentTrack;
- (void)_selectedTrackDidChangeHandler:(id)arg1;
- (void)inputObjectPlugInChangedHandler:(id)arg1;
- (void)pluginParamChangedHandler:(id)arg1;
- (void)_idleCallHandler:(id)arg1;
- (void)audioDriverChangedHandler:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 inputMenuDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
