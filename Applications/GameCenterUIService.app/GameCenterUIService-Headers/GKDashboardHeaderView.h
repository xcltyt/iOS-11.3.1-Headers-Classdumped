//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class GKGameRecord, UISegmentedControl;

@interface GKDashboardHeaderView : UICollectionReusableView
{
    _Bool _didSetupLikeButton;
    GKGameRecord *_gameRecord;
    UISegmentedControl *_segmentedControl;
}

+ (double)defaultHeight;
@property(nonatomic) _Bool didSetupLikeButton; // @synthesize didSetupLikeButton=_didSetupLikeButton;
@property(nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
- (void)awakeFromNib;
- (void)dealloc;

@end

