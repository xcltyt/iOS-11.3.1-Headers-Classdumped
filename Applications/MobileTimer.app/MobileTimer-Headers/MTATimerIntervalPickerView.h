//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSString, UILabel, UIPickerView;

@interface MTATimerIntervalPickerView : UIControl <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_timePicker;
    UILabel *_hoursLabel;
    UILabel *_minutesLabel;
    UILabel *_secondsLabel;
    id <MTATimerIntervalPickerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MTATimerIntervalPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_secondsStringForSeconds:(long long)arg1;
- (id)_minutesStringForMinutes:(long long)arg1;
- (id)_hoursStringForHour:(long long)arg1;
- (double)selectedDuration;
- (void)setDuration:(double)arg1;
- (_Bool)isSelectedDurationValid;
- (void)_fadeLabelForComponent:(long long)arg1 toText:(id)arg2 animated:(_Bool)arg3;
- (void)_positionLabel:(id)arg1 forComponent:(long long)arg2;
- (void)_setLabel:(id)arg1 forComponent:(long long)arg2;
- (id)_labelForComponent:(long long)arg1 createIfNecessary:(_Bool)arg2;
- (id)_makeNewComponentLabel;
- (void)_updateLabels:(_Bool)arg1;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
