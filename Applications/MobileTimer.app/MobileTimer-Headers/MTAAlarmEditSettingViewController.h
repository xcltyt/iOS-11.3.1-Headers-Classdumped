//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TKTonePickerViewControllerDelegate.h"
#import "TKVibrationPickerViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class Alarm, MTAAlarmEditViewController, MTAAlarmEditableTextCell, NSString, TKTonePickerViewController, UITableView;

@interface MTAAlarmEditSettingViewController : UIViewController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MTAAlarmEditViewController *_editController;
    long long _setting;
    Alarm *_alarm;
    UITableView *_tableView;
    MTAAlarmEditableTextCell *_editingCell;
    TKTonePickerViewController *_tonePickerViewController;
    unsigned int _repeatMask;
    unsigned long long _firstWeekday;
}

- (void).cxx_destruct;
- (void)textValueChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (unsigned int)maskForRow:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2;
- (void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2;
- (void)tonePickerViewController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)updateTableViewRowHeight;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_dismiss;
- (double)rowHeightWithCurrentAccessibilityConfiguration;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidUnload;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)addDefaultSongsIfNeeded;
- (void)dealloc;
- (id)initWithSetting:(long long)arg1 editController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

