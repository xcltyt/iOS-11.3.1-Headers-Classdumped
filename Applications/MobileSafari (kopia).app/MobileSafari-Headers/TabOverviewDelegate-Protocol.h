//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, TabOverview, TabOverviewItem, UIImage, UIView, WBSCloudTab, WBSCloudTabDevice, _SFNavigationIntent;

@protocol TabOverviewDelegate <NSObject>
- (void)showTabExposePopoverForTabOverview:(TabOverview *)arg1;
- (void)tabOverview:(TabOverview *)arg1 didEndDragInteractionAtPoint:(struct CGPoint)arg2;
- (void)tabOverview:(TabOverview *)arg1 didUpdateDragInteractionPoint:(struct CGPoint)arg2;
- (void)tabOverview:(TabOverview *)arg1 didBeginDragInteractionForItem:(TabOverviewItem *)arg2 point:(struct CGPoint)arg3 anchorPoint:(struct CGPoint)arg4 zPosition:(double)arg5;
- (_Bool)tabOverview:(TabOverview *)arg1 canBeginDragInteractionForItem:(TabOverviewItem *)arg2;
- (void)tabOverview:(TabOverview *)arg1 closeCloudTab:(WBSCloudTab *)arg2 onDevice:(WBSCloudTabDevice *)arg3;
- (void)tabOverview:(TabOverview *)arg1 didProduceNavigationIntent:(_SFNavigationIntent *)arg2;
- (void)tabOverviewDidChangeAllowsInteractivePresentation:(TabOverview *)arg1;
- (_Bool)tabOverview:(TabOverview *)arg1 cloudTab:(WBSCloudTab *)arg2 matchesSearchText:(NSString *)arg3;
- (_Bool)tabOverview:(TabOverview *)arg1 item:(TabOverviewItem *)arg2 matchesSearchText:(NSString *)arg3;
- (UIImage *)snapshotForTabOverview:(TabOverview *)arg1 item:(TabOverviewItem *)arg2;
- (UIImage *)blankSnapshotForTabOverview:(TabOverview *)arg1;
- (_Bool)tabOverview:(TabOverview *)arg1 itemHasValidSnapshot:(TabOverviewItem *)arg2;
- (void)tabOverview:(TabOverview *)arg1 relinquishContentView:(UIView *)arg2 forItem:(TabOverviewItem *)arg3;
- (UIView *)tabOverview:(TabOverview *)arg1 borrowContentViewForItem:(TabOverviewItem *)arg2 topBackdropHeight:(double)arg3;
- (double)tabOverview:(TabOverview *)arg1 headerHeightForItem:(TabOverviewItem *)arg2;
- (void)tabOverviewDidUpdateItemVisibilityOrder:(TabOverview *)arg1;
- (_Bool)tabOverviewCanSwipeToClose:(TabOverview *)arg1;
- (void)tabOverview:(TabOverview *)arg1 didMoveItem:(TabOverviewItem *)arg2 overItem:(TabOverviewItem *)arg3;
- (void)tabOverview:(TabOverview *)arg1 closeItem:(TabOverviewItem *)arg2;
- (_Bool)tabOverview:(TabOverview *)arg1 canCloseItem:(TabOverviewItem *)arg2;
- (void)tabOverview:(TabOverview *)arg1 didSelectItem:(TabOverviewItem *)arg2;
- (NSArray *)itemsToKeepVisibleForTabOverview:(TabOverview *)arg1;
- (TabOverviewItem *)currentItemForTabOverview:(TabOverview *)arg1;
- (void)tabOverviewDidCancelDismissal:(TabOverview *)arg1;
- (void)tabOverviewDidBeginDismissal:(TabOverview *)arg1;
- (void)tabOverviewDidDismiss:(TabOverview *)arg1;
- (void)tabOverviewWillPresent:(TabOverview *)arg1;
@end

