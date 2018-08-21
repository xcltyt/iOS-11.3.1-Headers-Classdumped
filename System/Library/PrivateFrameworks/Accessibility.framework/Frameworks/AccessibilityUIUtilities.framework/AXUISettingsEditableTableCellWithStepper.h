/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <AccessibilityUIUtilities/AXUISettingsEditableTextCell.h>

@protocol AXUISettingsEditableTableCellWithStepperDelegate;
@class UIStepper, UILabel;

@interface AXUISettingsEditableTableCellWithStepper : AXUISettingsEditableTextCell {

	UIStepper* _stepper;
	id<AXUISettingsEditableTableCellWithStepperDelegate> _delegate;
	UILabel* _secondsLabel;

}

@property (nonatomic,retain) UIStepper * stepper;                                                               //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) UILabel * secondsLabel;                                                            //@synthesize secondsLabel=_secondsLabel - In the implementation block
@property (assign,nonatomic,__weak) id<AXUISettingsEditableTableCellWithStepperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)layoutSubviews;
-(id<AXUISettingsEditableTableCellWithStepperDelegate>)delegate;
-(void)setDelegate:(id<AXUISettingsEditableTableCellWithStepperDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didMoveToSuperview;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)initializeView;
-(void)_stepperChanged:(id)arg1 ;
-(void)_updateAccessibilityLabelForTextField;
-(void)_updateSecondsLabelForDelegate:(id)arg1 ;
-(void)_updateSecondsLabel;
-(void)_updateValue:(double)arg1 andText:(BOOL)arg2 ;
-(id)_stepperValueFormatString;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(UIStepper *)stepper;
-(void)setStepper:(UIStepper *)arg1 ;
-(void)_textFieldChanged:(id)arg1 ;
-(void)setSecondsLabel:(UILabel *)arg1 ;
-(UILabel *)secondsLabel;
@end
