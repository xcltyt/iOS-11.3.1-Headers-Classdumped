//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout.h"

@class BookmarkFavoritesGridLayout, NSArray, NSIndexPath, UICollectionView;

@protocol CollectionViewDelegateBookmarkFavoritesGridLayout <UICollectionViewDelegateFlowLayout>

@optional
- (NSArray *)collectionView:(UICollectionView *)arg1 deleteInsertPairsToTreatAsMovesForLayout:(BookmarkFavoritesGridLayout *)arg2;
- (struct CGRect)collectionView:(UICollectionView *)arg1 layout:(BookmarkFavoritesGridLayout *)arg2 iconRectForItemAtIndexPath:(NSIndexPath *)arg3;
@end

