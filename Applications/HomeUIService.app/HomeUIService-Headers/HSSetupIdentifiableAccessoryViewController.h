//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUItemTableViewController.h"

#import "HSSetupServiceHeaderViewDelegate.h"
#import "HSSetupStep.h"

@class HMAccessory, HSSetupServiceHeaderView, NAFuture, NSString;

@interface HSSetupIdentifiableAccessoryViewController : HUItemTableViewController <HSSetupServiceHeaderViewDelegate, HSSetupStep>
{
    HMAccessory *_accessory;
    HSSetupServiceHeaderView *_headerView;
    CDStruct_3999e4e2 _configurationProgress;
}

@property(retain, nonatomic) HSSetupServiceHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) CDStruct_3999e4e2 configurationProgress; // @synthesize configurationProgress=_configurationProgress;
- (void).cxx_destruct;
- (void)_headerViewWasTapped:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)didTapToTestInServiceHeaderView:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithItemManager:(id)arg1 configurationProgress:(CDStruct_3999e4e2)arg2 accessory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly, nonatomic) long long setupState; // @dynamic setupState;
@property(readonly) Class superclass;

@end

