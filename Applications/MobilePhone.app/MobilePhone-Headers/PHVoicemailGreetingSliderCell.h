//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPTableViewCell.h"

#import "VMPlayerTimelineSliderDelegate.h"

@class NSLayoutConstraint, NSString, UIProgressView, VMPlayerTimelineSlider;

@interface PHVoicemailGreetingSliderCell : TPTableViewCell <VMPlayerTimelineSliderDelegate>
{
    UIProgressView *_progressView;
    VMPlayerTimelineSlider *_timelineSlider;
    NSLayoutConstraint *_progressViewCenterYAnchorConstraint;
    NSLayoutConstraint *_progressViewHeightAnchorConstraint;
    NSLayoutConstraint *_progressViewLeadingAnchorConstraint;
    NSLayoutConstraint *_progressViewTrailingAnchorConstraint;
    NSLayoutConstraint *_timelineSliderCenterYAnchorConstraint;
    NSLayoutConstraint *_timelineSliderLeadingAnchorConstraint;
    NSLayoutConstraint *_timelineSliderTrailingAnchorConstraint;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *timelineSliderTrailingAnchorConstraint; // @synthesize timelineSliderTrailingAnchorConstraint=_timelineSliderTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *timelineSliderLeadingAnchorConstraint; // @synthesize timelineSliderLeadingAnchorConstraint=_timelineSliderLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *timelineSliderCenterYAnchorConstraint; // @synthesize timelineSliderCenterYAnchorConstraint=_timelineSliderCenterYAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewTrailingAnchorConstraint; // @synthesize progressViewTrailingAnchorConstraint=_progressViewTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewLeadingAnchorConstraint; // @synthesize progressViewLeadingAnchorConstraint=_progressViewLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewHeightAnchorConstraint; // @synthesize progressViewHeightAnchorConstraint=_progressViewHeightAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewCenterYAnchorConstraint; // @synthesize progressViewCenterYAnchorConstraint=_progressViewCenterYAnchorConstraint;
@property(readonly, nonatomic) VMPlayerTimelineSlider *timelineSlider; // @synthesize timelineSlider=_timelineSlider;
@property(readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (double)progressViewHeightAnchorConstraintConstant;
- (void)showTimelineSlider;
- (void)showProgressView;
- (void)playerTimelineSlider:(id)arg1 didChangeElapsedTime:(double)arg2;
- (void)updateConstraintsConstants;
- (void)unloadConstraints;
- (void)loadConstraints;
- (void)loadContentView;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

