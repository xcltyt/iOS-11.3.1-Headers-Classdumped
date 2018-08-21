//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSDictionary, NSSet;

@interface BookmarkFavoritesGridLayout : UICollectionViewFlowLayout
{
    NSSet *_deletedIndexPaths;
    NSSet *_insertedIndexPaths;
    NSSet *_reloadedIndexPaths;
    NSDictionary *_originIndexPathsForAppearingIndexPaths;
    NSDictionary *_destinationIndexPathsForDisappearingIndexPaths;
}

- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGAffineTransform)_transformForAppearingDisappearingItemWithAttributes:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)_gridLayoutDelegate;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)finalizeCollectionViewUpdates;

@end
