//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPView.h"

@class NSArray, NSLayoutConstraint, NSString, UIDateLabel, UILabel, VMActivityButtonsView;

@interface VMMessageMetadataView : TPView
{
    _Bool _expanded;
    VMActivityButtonsView *_activityButtonsView;
    UIDateLabel *_dateLabel;
    UILabel *_dateTimeLabel;
    UILabel *_durationLabel;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    NSArray *_regularConstraints;
    NSArray *_accessibilityConstraints;
    NSLayoutConstraint *_activityButtonsViewCenterYLayoutConstraint;
    NSLayoutConstraint *_activityButtonsViewLeadingLayoutConstraint;
    NSLayoutConstraint *_activityButtonsViewTrailingLayoutConstraint;
    NSLayoutConstraint *_dateLabelFirstBaselineLayoutConstraint;
    NSLayoutConstraint *_dateLabelLeadingLayoutConstraint;
    NSLayoutConstraint *_dateLabelTrailingLayoutConstraint;
    NSLayoutConstraint *_dateTimeLabelFirstBaselineLayoutConstraint;
    NSLayoutConstraint *_dateTimeLabelLastBaselineLayoutConstraint;
    NSLayoutConstraint *_dateTimeLabelLeadingLayoutConstraint;
    NSLayoutConstraint *_dateTimeLabelTrailingLayoutConstraint;
    NSLayoutConstraint *_durationLabelFirstBaselineLayoutConstraint;
    NSLayoutConstraint *_durationLabelLeadingLayoutConstraint;
    NSLayoutConstraint *_durationLabelTrailingLayoutConstraint;
    NSLayoutConstraint *_subtitleLabelFirstBaselineLayoutConstraint;
    NSLayoutConstraint *_subtitleLabelLastBaselineLayoutConstraint;
    NSLayoutConstraint *_subtitleLabelLeadingLayoutConstraint;
    NSLayoutConstraint *_subtitleLabelTrailingLayoutConstraint;
    NSLayoutConstraint *_titleLabelFirstBaselineLayoutConstraint;
    NSLayoutConstraint *_titleLabelLastBaselineLayoutConstraint;
    NSLayoutConstraint *_titleLabelLeadingLayoutConstraint;
    NSLayoutConstraint *_titleLabelTrailingLayoutConstraint;
    NSLayoutConstraint *_accessibilityDateLabelFirstBaselineLayoutConstraint;
    NSLayoutConstraint *_accessibilityDateLabelLeadingLayoutConstraint;
    NSLayoutConstraint *_accessibilityDateLabelTrailingLayoutConstraint;
    NSLayoutConstraint *_accessibilityDateTimeLabelFirstBaselineLayoutConstraint;
    NSLayoutConstraint *_accessibilityDateTimeLabelLeadingLayoutConstraint;
    NSLayoutConstraint *_accessibilityDurationLabelFirstBaselineLayoutConstraint;
    NSLayoutConstraint *_accessibilityDurationLabelLeadingLayoutConstraint;
    NSLayoutConstraint *_accessibilityDurationLabelTrailingLayoutConstraint;
    NSLayoutConstraint *_accessibilityDurationLabelLastBaselineLayoutConstraint;
    NSLayoutConstraint *_accessibilitySubtitleLabelFirstBaselineLayoutConstraint;
    NSLayoutConstraint *_accessibilitySubtitleLabelTrailingLayoutConstraint;
    NSLayoutConstraint *_accessibilityTitleLabelTrailingLayoutConstraint;
    double _durationLabelLeadingLayoutConstraintConstant;
    double _durationLabelTrailingLayoutConstraintConstant;
    double _subtitleLabelLeadingLayoutConstraintConstant;
    double _subtitleLabelTrailingLayoutConstraintConstant;
    double _titleLabelLastBaselineLayoutConstraintConstant;
    double _titleLabelLeadingLayoutConstraintConstant;
    double _titleLabelTrailingLayoutConstraintConstant;
}

@property(readonly, nonatomic) double titleLabelTrailingLayoutConstraintConstant; // @synthesize titleLabelTrailingLayoutConstraintConstant=_titleLabelTrailingLayoutConstraintConstant;
@property(readonly, nonatomic) double titleLabelLeadingLayoutConstraintConstant; // @synthesize titleLabelLeadingLayoutConstraintConstant=_titleLabelLeadingLayoutConstraintConstant;
@property(readonly, nonatomic) double titleLabelLastBaselineLayoutConstraintConstant; // @synthesize titleLabelLastBaselineLayoutConstraintConstant=_titleLabelLastBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double subtitleLabelTrailingLayoutConstraintConstant; // @synthesize subtitleLabelTrailingLayoutConstraintConstant=_subtitleLabelTrailingLayoutConstraintConstant;
@property(readonly, nonatomic) double subtitleLabelLeadingLayoutConstraintConstant; // @synthesize subtitleLabelLeadingLayoutConstraintConstant=_subtitleLabelLeadingLayoutConstraintConstant;
@property(readonly, nonatomic) double durationLabelTrailingLayoutConstraintConstant; // @synthesize durationLabelTrailingLayoutConstraintConstant=_durationLabelTrailingLayoutConstraintConstant;
@property(readonly, nonatomic) double durationLabelLeadingLayoutConstraintConstant; // @synthesize durationLabelLeadingLayoutConstraintConstant=_durationLabelLeadingLayoutConstraintConstant;
@property(retain, nonatomic) NSLayoutConstraint *accessibilityTitleLabelTrailingLayoutConstraint; // @synthesize accessibilityTitleLabelTrailingLayoutConstraint=_accessibilityTitleLabelTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessibilitySubtitleLabelTrailingLayoutConstraint; // @synthesize accessibilitySubtitleLabelTrailingLayoutConstraint=_accessibilitySubtitleLabelTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessibilitySubtitleLabelFirstBaselineLayoutConstraint; // @synthesize accessibilitySubtitleLabelFirstBaselineLayoutConstraint=_accessibilitySubtitleLabelFirstBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessibilityDurationLabelLastBaselineLayoutConstraint; // @synthesize accessibilityDurationLabelLastBaselineLayoutConstraint=_accessibilityDurationLabelLastBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessibilityDurationLabelTrailingLayoutConstraint; // @synthesize accessibilityDurationLabelTrailingLayoutConstraint=_accessibilityDurationLabelTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessibilityDurationLabelLeadingLayoutConstraint; // @synthesize accessibilityDurationLabelLeadingLayoutConstraint=_accessibilityDurationLabelLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessibilityDurationLabelFirstBaselineLayoutConstraint; // @synthesize accessibilityDurationLabelFirstBaselineLayoutConstraint=_accessibilityDurationLabelFirstBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessibilityDateTimeLabelLeadingLayoutConstraint; // @synthesize accessibilityDateTimeLabelLeadingLayoutConstraint=_accessibilityDateTimeLabelLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessibilityDateTimeLabelFirstBaselineLayoutConstraint; // @synthesize accessibilityDateTimeLabelFirstBaselineLayoutConstraint=_accessibilityDateTimeLabelFirstBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessibilityDateLabelTrailingLayoutConstraint; // @synthesize accessibilityDateLabelTrailingLayoutConstraint=_accessibilityDateLabelTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessibilityDateLabelLeadingLayoutConstraint; // @synthesize accessibilityDateLabelLeadingLayoutConstraint=_accessibilityDateLabelLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessibilityDateLabelFirstBaselineLayoutConstraint; // @synthesize accessibilityDateLabelFirstBaselineLayoutConstraint=_accessibilityDateLabelFirstBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTrailingLayoutConstraint; // @synthesize titleLabelTrailingLayoutConstraint=_titleLabelTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLeadingLayoutConstraint; // @synthesize titleLabelLeadingLayoutConstraint=_titleLabelLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLastBaselineLayoutConstraint; // @synthesize titleLabelLastBaselineLayoutConstraint=_titleLabelLastBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelFirstBaselineLayoutConstraint; // @synthesize titleLabelFirstBaselineLayoutConstraint=_titleLabelFirstBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelTrailingLayoutConstraint; // @synthesize subtitleLabelTrailingLayoutConstraint=_subtitleLabelTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelLeadingLayoutConstraint; // @synthesize subtitleLabelLeadingLayoutConstraint=_subtitleLabelLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelLastBaselineLayoutConstraint; // @synthesize subtitleLabelLastBaselineLayoutConstraint=_subtitleLabelLastBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelFirstBaselineLayoutConstraint; // @synthesize subtitleLabelFirstBaselineLayoutConstraint=_subtitleLabelFirstBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *durationLabelTrailingLayoutConstraint; // @synthesize durationLabelTrailingLayoutConstraint=_durationLabelTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *durationLabelLeadingLayoutConstraint; // @synthesize durationLabelLeadingLayoutConstraint=_durationLabelLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *durationLabelFirstBaselineLayoutConstraint; // @synthesize durationLabelFirstBaselineLayoutConstraint=_durationLabelFirstBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dateTimeLabelTrailingLayoutConstraint; // @synthesize dateTimeLabelTrailingLayoutConstraint=_dateTimeLabelTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dateTimeLabelLeadingLayoutConstraint; // @synthesize dateTimeLabelLeadingLayoutConstraint=_dateTimeLabelLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dateTimeLabelLastBaselineLayoutConstraint; // @synthesize dateTimeLabelLastBaselineLayoutConstraint=_dateTimeLabelLastBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dateTimeLabelFirstBaselineLayoutConstraint; // @synthesize dateTimeLabelFirstBaselineLayoutConstraint=_dateTimeLabelFirstBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dateLabelTrailingLayoutConstraint; // @synthesize dateLabelTrailingLayoutConstraint=_dateLabelTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dateLabelLeadingLayoutConstraint; // @synthesize dateLabelLeadingLayoutConstraint=_dateLabelLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dateLabelFirstBaselineLayoutConstraint; // @synthesize dateLabelFirstBaselineLayoutConstraint=_dateLabelFirstBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *activityButtonsViewTrailingLayoutConstraint; // @synthesize activityButtonsViewTrailingLayoutConstraint=_activityButtonsViewTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *activityButtonsViewLeadingLayoutConstraint; // @synthesize activityButtonsViewLeadingLayoutConstraint=_activityButtonsViewLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *activityButtonsViewCenterYLayoutConstraint; // @synthesize activityButtonsViewCenterYLayoutConstraint=_activityButtonsViewCenterYLayoutConstraint;
@property(retain, nonatomic) NSArray *accessibilityConstraints; // @synthesize accessibilityConstraints=_accessibilityConstraints;
@property(retain, nonatomic) NSArray *regularConstraints; // @synthesize regularConstraints=_regularConstraints;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *dateTimeLabel; // @synthesize dateTimeLabel=_dateTimeLabel;
@property(retain, nonatomic) UIDateLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) VMActivityButtonsView *activityButtonsView; // @synthesize activityButtonsView=_activityButtonsView;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
- (void).cxx_destruct;
@property(readonly, nonatomic) double titleLabelFirstBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double subtitleLabelLastBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double subtitleLabelFirstBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double dateTimeLabelLastBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double dateTimeLabelFirstBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double dateLabelTrailingLayoutConstraintConstant;
@property(readonly, nonatomic) double dateLabelLeadingLayoutConstraintConstant;
@property(readonly, nonatomic) double activityButtonsViewTrailingLayoutConstraintConstant;
@property(readonly, nonatomic) double activityButtonsViewLeadingLayoutConstraintConstant;
@property(readonly, nonatomic) double activityButtonsViewCenterYLayoutConstraintConstant;
- (void)loadView;
@property(copy, nonatomic) NSString *localizedSubtitle;
@property(copy, nonatomic) NSString *localizedTitle;
@property(copy, nonatomic) NSString *localizedDuration;
@property(copy, nonatomic) NSString *localizedDate;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateLabels;
- (void)updateFonts;
- (void)updateConstraintsConstants;
- (void)updateConstraints;
- (void)loadConstraints;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;

@end

