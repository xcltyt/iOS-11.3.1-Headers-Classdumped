//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKTurnBasedMatch;

@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource
{
    GKTurnBasedMatch *_match;
}

@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)sectionHeaderText;
- (id)itemForIndexPath:(id)arg1;
- (double)preferredCollectionHeight;
- (long long)itemCount;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)dealloc;
- (id)initWithMatch:(id)arg1;

@end

