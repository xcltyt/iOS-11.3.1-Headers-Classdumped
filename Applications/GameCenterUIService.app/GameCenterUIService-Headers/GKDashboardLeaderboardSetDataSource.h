//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKGameRecord, NSArray, NSDictionary;

@interface GKDashboardLeaderboardSetDataSource : GKCollectionDataSource
{
    NSDictionary *_leaderboardSetAssetNames;
    NSDictionary *_leaderboardAssetNames;
    GKGameRecord *_gameRecord;
    NSArray *_leaderboardSets;
}

@property(retain, nonatomic) NSArray *leaderboardSets; // @synthesize leaderboardSets=_leaderboardSets;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(retain, nonatomic) NSDictionary *leaderboardAssetNames; // @synthesize leaderboardAssetNames=_leaderboardAssetNames;
@property(retain, nonatomic) NSDictionary *leaderboardSetAssetNames; // @synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)sectionHeaderText;
- (id)itemForIndexPath:(id)arg1;
- (double)preferredCollectionHeight;
- (long long)itemCount;
- (void)removeLeaderboardSetsWithoutImages;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)dealloc;
- (id)initWithGameRecord:(id)arg1;

@end

