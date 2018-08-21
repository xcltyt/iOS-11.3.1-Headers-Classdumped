//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKRectShadowCell.h"

@class GKAchievement, GKAchievementIconView, GKResizingLabel, UILabel, UIView;

@interface GKDashboardAchievementCell : GKRectShadowCell
{
    GKAchievement *_achievement;
    GKAchievement *_localAchievement;
    GKAchievementIconView *_iconView;
    GKResizingLabel *_titleLabel;
    GKResizingLabel *_descriptionLabel;
    UILabel *_pointsLabel;
    UILabel *_pointsTextLabel;
}

@property(nonatomic) UILabel *pointsTextLabel; // @synthesize pointsTextLabel=_pointsTextLabel;
@property(nonatomic) UILabel *pointsLabel; // @synthesize pointsLabel=_pointsLabel;
@property(nonatomic) GKResizingLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) GKResizingLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) GKAchievementIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
- (void)setupForAchievement:(id)arg1 localAchievement:(id)arg2;
@property(readonly, nonatomic) UIView *popoverSourceView;
- (void)dealloc;

@end

