//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKRectShadowCell.h"

@class GKDashboardPlayerPhotoView, GKScore, NSLayoutConstraint, UILabel, UIView;

@interface GKDashboardLeaderboardScoreCell : GKRectShadowCell
{
    GKScore *_score;
    GKDashboardPlayerPhotoView *_playerView;
    NSLayoutConstraint *_playerViewHeightConstraint;
    UILabel *_rankLabel;
    UILabel *_nameLabel;
    UILabel *_scoreLabel;
    UIView *_topLine;
    UIView *_bottomLine;
    UIView *_monogramColorView;
}

+ (id)highRankNib;
+ (id)lowRankNib;
+ (struct CGSize)defaultSize;
@property(nonatomic) UIView *monogramColorView; // @synthesize monogramColorView=_monogramColorView;
@property(nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint; // @synthesize playerViewHeightConstraint=_playerViewHeightConstraint;
@property(nonatomic) GKDashboardPlayerPhotoView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
@property(nonatomic) _Bool linesVisible; // @dynamic linesVisible;
- (void)setupForScore:(id)arg1;
@property(readonly, nonatomic) UIView *popoverSourceView;
- (void)dealloc;
- (void)awakeFromNib;

@end

