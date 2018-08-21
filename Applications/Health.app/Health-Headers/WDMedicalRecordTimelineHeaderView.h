//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class NSString, UILabel;

@interface WDMedicalRecordTimelineHeaderView : UITableViewHeaderFooterView
{
    NSString *_title;
    NSString *_subtitle;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setFloating:(_Bool)arg1;
- (double)_subtitleLastBaselineToBottom;
- (double)_titleLastBaselineToSubtitleFirstBaseline;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)_setupConstraints;
- (id)initWithReuseIdentifier:(id)arg1;

@end

