//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, _TtC9Ringtones15ProgressBarView;

@interface _TtC9Ringtones30SelectedRingtoneViewController : UIViewController
{
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: tagsIcon
    // Error parsing type: , name: tagsLabel
    // Error parsing type: , name: downloadButton
    // Error parsing type: , name: shareButton
    // Error parsing type: , name: infoButton
    // Error parsing type: , name: progressView
    // Error parsing type: , name: downloadProgressView
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: playButton
    // Error parsing type: , name: shareButtonLeadingConstraint
    // Error parsing type: , name: tagsLabelRightConstraint
    // Error parsing type: , name: selectedCell
    // Error parsing type: , name: itemPosition
    // Error parsing type: , name: sectionName
    // Error parsing type: , name: item
    // Error parsing type: , name: onClose
    // Error parsing type: , name: rootNavigationController
    // Error parsing type: , name: isPlaying
    // Error parsing type: , name: displayLink
    // Error parsing type: , name: downloadProgressLayer
    // Error parsing type: , name: errorOverLay
}

+ (id)create:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateProgress;
- (void)openRingtoneGuideTapped;
- (void)shareTapped;
- (void)close;
- (void)closeTapped;
- (void)playTapped:(id)arg1;
- (void)itemInfoTapped:(id)arg1;
- (void)saveTapped;
- (void)show;
- (void)hide;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, copy) NSString *sectionName; // @synthesize sectionName;
@property(nonatomic) long long itemPosition; // @synthesize itemPosition;
@property(nonatomic) __weak NSLayoutConstraint *tagsLabelRightConstraint; // @synthesize tagsLabelRightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *shareButtonLeadingConstraint; // @synthesize shareButtonLeadingConstraint;
@property(nonatomic) __weak UIButton *playButton; // @synthesize playButton;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator;
@property(nonatomic) __weak _TtC9Ringtones15ProgressBarView *downloadProgressView; // @synthesize downloadProgressView;
@property(nonatomic) __weak _TtC9Ringtones15ProgressBarView *progressView; // @synthesize progressView;
@property(nonatomic) __weak UIButton *infoButton; // @synthesize infoButton;
@property(nonatomic) __weak UIButton *shareButton; // @synthesize shareButton;
@property(nonatomic) __weak UIButton *downloadButton; // @synthesize downloadButton;
@property(nonatomic) __weak UILabel *tagsLabel; // @synthesize tagsLabel;
@property(nonatomic) __weak UIImageView *tagsIcon; // @synthesize tagsIcon;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton;

@end
