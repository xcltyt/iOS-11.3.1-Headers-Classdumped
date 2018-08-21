//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIActivityIndicatorView, UILabel, UIView;

@interface WDSpinnerTableViewCell : UITableViewCell
{
    UIView *_contentContainerView;
    UIActivityIndicatorView *_spinner;
    UILabel *_waitingReasonLabel;
}

+ (id)defaultReuseIdentifier;
@property(retain) UILabel *waitingReasonLabel; // @synthesize waitingReasonLabel=_waitingReasonLabel;
@property(retain) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void).cxx_destruct;
- (void)prepareForReuse;
@property(retain, nonatomic) NSString *waitingReason;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

