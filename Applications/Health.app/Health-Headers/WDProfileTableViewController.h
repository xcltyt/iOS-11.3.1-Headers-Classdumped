//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTableViewController.h"

#import "UINavigationControllerDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "WDUserActivityResponder.h"

@class CNAvatarViewController, HKBiologicalSexObject, HKBloodTypeObject, HKHealthStore, NSCalendar, NSDateComponents, NSString, UIBarButtonItem, UIDatePicker, UIPickerView, WDDisplayTypeDescriptionTableFooterView, WDProfile, WDProfileEditableTableViewCell, WDProfileHeaderView, WDProfileTableViewCell;

@interface WDProfileTableViewController : HKTableViewController <UINavigationControllerDelegate, UIPickerViewDataSource, UIPickerViewDelegate, WDUserActivityResponder>
{
    WDProfile *_profile;
    HKHealthStore *_healthStore;
    HKBloodTypeObject *_bloodTypeObject;
    long long _bloodTypeDisplayValue;
    HKBiologicalSexObject *_biologicalSexObject;
    long long _biologicalSexDisplayValue;
    long long _fitzpatrickSkinTypeDisplayValue;
    long long _wheelchairUseDisplayValue;
    NSString *_firstName;
    NSString *_lastName;
    NSDateComponents *_birthdate;
    NSDateComponents *_birthdateDisplayValue;
    NSCalendar *_gregorianCalendar;
    UIDatePicker *_birthdatePicker;
    UIPickerView *_bloodTypePicker;
    UIPickerView *_biologicalSexPicker;
    UIPickerView *_fitzpatrickSkinTypePicker;
    UIPickerView *_wheelchairUsePicker;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_dismissButtonItem;
    CNAvatarViewController *_avatarViewController;
    WDProfileHeaderView *_headerView;
    WDProfileTableViewCell *_birthdateCell;
    WDProfileTableViewCell *_biologicalSexCell;
    WDProfileTableViewCell *_bloodTypeCell;
    WDProfileTableViewCell *_fitzpatrickSkinTypeCell;
    WDProfileTableViewCell *_selectedCell;
    WDProfileTableViewCell *_wheelchairUseCell;
    WDDisplayTypeDescriptionTableFooterView *_footerView;
    _Bool _isCancelling;
    WDProfileEditableTableViewCell *_firstNameCell;
    WDProfileEditableTableViewCell *_lastNameCell;
}

@property(retain, nonatomic) WDProfileEditableTableViewCell *lastNameCell; // @synthesize lastNameCell=_lastNameCell;
@property(retain, nonatomic) WDProfileEditableTableViewCell *firstNameCell; // @synthesize firstNameCell=_firstNameCell;
- (void).cxx_destruct;
- (id)_birthdayCalendar;
- (void)_timeZoneDidChange:(id)arg1;
- (id)_displayStringForFitzpatrickSkinType:(long long)arg1;
- (id)_displayStringForBloodType:(long long)arg1;
- (id)_displayStringForBiologicalSex:(long long)arg1;
- (id)_initialBirthdayValue;
- (id)_dateAsAge:(id)arg1;
- (id)_displayStringForBirthDate:(id)arg1;
- (void)_resetSelectedCell;
- (void)_updateCellsWithDisplayValues;
- (void)_updatePickersWithDisplayValues;
- (long long)_profileRowIdentifierForIndex:(long long)arg1;
- (void)_setFirstAndLastNameOnHeaderAndCells;
- (void)_createCells;
- (void)_createPickers;
- (void)_createBarButtonItems;
- (void)_adjustHeaderFrame;
- (void)_createHeader;
- (void)_fetchDataFromHealthStore;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (void)dismissButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)didClearBirthdate;
- (void)birthdateChanged:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)_localeDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

