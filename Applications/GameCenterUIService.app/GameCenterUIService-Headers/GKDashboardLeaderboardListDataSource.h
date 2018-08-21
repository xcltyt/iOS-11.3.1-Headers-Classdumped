//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKGameRecord, GKLeaderboardSet, NSArray, NSDictionary;

@interface GKDashboardLeaderboardListDataSource : GKCollectionDataSource
{
    NSDictionary *_assetNames;
    GKGameRecord *_gameRecord;
    GKLeaderboardSet *_leaderboardSet;
    NSArray *_leaderboards;
}

@property(retain, nonatomic) NSArray *leaderboards; // @synthesize leaderboards=_leaderboards;
@property(retain, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(retain, nonatomic) NSDictionary *assetNames; // @synthesize assetNames=_assetNames;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)sectionHeaderText;
- (id)itemForIndexPath:(id)arg1;
- (double)preferredCollectionHeight;
- (long long)itemCount;
- (void)removeLeaderboardsWithoutImages;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)dealloc;
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;

@end

