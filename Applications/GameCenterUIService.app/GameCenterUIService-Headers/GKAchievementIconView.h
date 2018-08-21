//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class GKAchievement;

@interface GKAchievementIconView : UIImageView
{
    _Bool _isDetail;
    GKAchievement *_achievement;
    GKAchievement *_localAchievement;
}

+ (id)progressSourceDetail;
+ (id)progressSource;
@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
- (void)configureImage;
- (void)loadAndProcessAchievementProgressImageForAchievement:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)progressIdentifierForAchievement:(id)arg1;
- (id)processProgressImage:(id)arg1 forAchievement:(id)arg2;
- (double)progressForAchievement:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)setupForAchievement:(id)arg1 localAchievement:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

