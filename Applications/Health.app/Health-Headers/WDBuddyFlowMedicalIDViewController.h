//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTitledBuddyViewController.h"

#import "HKMedicalIDViewControllerDelegate.h"
#import "WDUserActivityResponder.h"

@class NSString, UIButton, WDProfile, _HKMedicalIDData;

@interface WDBuddyFlowMedicalIDViewController : HKTitledBuddyViewController <HKMedicalIDViewControllerDelegate, WDUserActivityResponder>
{
    WDProfile *_profile;
    _HKMedicalIDData *_buddyMedicalIDData;
    _HKMedicalIDData *_fetchedMedicalIDData;
    UIButton *_showMedicalIDButton;
    _Bool _medicalIDIsNew;
}

- (void).cxx_destruct;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)medicalIDViewControllerDidFinish:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)buttonAtIndexTapped:(long long)arg1;
- (id)bottomAnchoredButtons;
- (id)subsequentViews;
- (id)bodyString;
- (id)titleString;
- (id)titleImage;
- (void)_pushNextViewControllerAnimated:(_Bool)arg1;
- (void)_saveFetchedMedicalIDAndUpdateButtonTitle:(id)arg1;
- (void)notNowButtonTapped:(id)arg1;
- (void)showMedicalIDButtonTapped:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)_medicalIDButtonTitle;
- (void)_fetchMedicalIDData:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1 medicalIDData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

