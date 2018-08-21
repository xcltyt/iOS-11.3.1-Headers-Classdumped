//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSLayoutConstraint, UILabel, UISwitch, UIView;

@interface MTABedtimeSwitchView : UIControl
{
    UILabel *_enableLabel;
    UILabel *_repeatLabel;
    UISwitch *_enableSwitch;
    UIView *_keylineView;
    NSLayoutConstraint *_enableLabelLeadingConstraint;
    NSLayoutConstraint *_repeatLabelLeadingConstraint;
    NSLayoutConstraint *_enableLabelBaseLineConstraint;
    NSLayoutConstraint *_repeatLabelBaselineConstraint;
    NSLayoutConstraint *_repeatLabelBottomConstraint;
    NSLayoutConstraint *_switchTrailingConstraint;
    NSLayoutConstraint *_keylineLeadingConstraint;
    NSLayoutConstraint *_keylineTrailingConstraint;
    struct UIEdgeInsets _contentInset;
    struct UIEdgeInsets _separatorInset;
}

+ (double)switchViewHeight;
@property(retain, nonatomic) NSLayoutConstraint *keylineTrailingConstraint; // @synthesize keylineTrailingConstraint=_keylineTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *keylineLeadingConstraint; // @synthesize keylineLeadingConstraint=_keylineLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *switchTrailingConstraint; // @synthesize switchTrailingConstraint=_switchTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *repeatLabelBottomConstraint; // @synthesize repeatLabelBottomConstraint=_repeatLabelBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *repeatLabelBaselineConstraint; // @synthesize repeatLabelBaselineConstraint=_repeatLabelBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *enableLabelBaseLineConstraint; // @synthesize enableLabelBaseLineConstraint=_enableLabelBaseLineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *repeatLabelLeadingConstraint; // @synthesize repeatLabelLeadingConstraint=_repeatLabelLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *enableLabelLeadingConstraint; // @synthesize enableLabelLeadingConstraint=_enableLabelLeadingConstraint;
@property(retain, nonatomic) UIView *keylineView; // @synthesize keylineView=_keylineView;
@property(retain, nonatomic) UISwitch *enableSwitch; // @synthesize enableSwitch=_enableSwitch;
@property(retain, nonatomic) UILabel *repeatLabel; // @synthesize repeatLabel=_repeatLabel;
@property(retain, nonatomic) UILabel *enableLabel; // @synthesize enableLabel=_enableLabel;
@property(nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)updateRepeatLabelForSchedule:(long long)arg1;
@property(nonatomic, getter=isOn) _Bool on;
- (void)switchToggled:(id)arg1;
- (void)updateConstraints;
- (double)repeatLabelBottomPadding;
- (double)repeatLabelBaselineTopOffset;
- (double)enableLabelBaselineTopOffset;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

