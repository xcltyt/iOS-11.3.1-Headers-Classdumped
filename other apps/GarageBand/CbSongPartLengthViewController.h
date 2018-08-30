//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MAUIStepperDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CbArrangeSongPartsUIController, DfDocument, MAUIStepper, NSLayoutConstraint, NSString, UITableView, UITableViewCell;

@interface CbSongPartLengthViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MAUIStepperDelegate>
{
    long long _currentBarCount;
    _Bool _ignoreFooterCalls;
    _Bool _asRecordedState;
    float _stepperStartValue;
    UITableView *_lengthTableView;
    MAUIStepper *_stepper;
    UITableViewCell *_stepperCell;
    long long _songPartIndex;
    DfDocument *_document;
    CbArrangeSongPartsUIController *_songPartsUIController;
    NSLayoutConstraint *_stepperTrailingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *stepperTrailingConstraint; // @synthesize stepperTrailingConstraint=_stepperTrailingConstraint;
@property(nonatomic) __weak CbArrangeSongPartsUIController *songPartsUIController; // @synthesize songPartsUIController=_songPartsUIController;
@property(nonatomic) __weak DfDocument *document; // @synthesize document=_document;
@property(nonatomic) long long songPartIndex; // @synthesize songPartIndex=_songPartIndex;
@property(retain, nonatomic) UITableViewCell *stepperCell; // @synthesize stepperCell=_stepperCell;
@property(retain, nonatomic) MAUIStepper *stepper; // @synthesize stepper=_stepper;
@property(retain, nonatomic) UITableView *lengthTableView; // @synthesize lengthTableView=_lengthTableView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidUnload;
- (void)cleanup;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)disabledCellTextColor;
- (void)songPartsPopoverWillClose;
- (void)delayedApplyAction:(id)arg1;
- (void)applyAction:(_Bool)arg1;
- (int)_showLengthChangeTooHighAlert:(long long)arg1;
- (void)stepperAction:(id)arg1;
- (void)asRecordedSwitchAction:(id)arg1;
- (_Bool)shouldStep:(id)arg1;
- (void)_appGetInactiveNotificationHandler:(id)arg1;
- (void)_handleDocUIWillClose:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateDescriptionText;
- (id)explanationText;
- (id)init;
- (_Bool)isLastSongPart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

