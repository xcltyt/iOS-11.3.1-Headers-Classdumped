//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "AlarmDelegate.h"
#import "AlarmManagerObserver.h"
#import "MTAAlarmCollectionViewCellDelegate.h"
#import "MTAAlarmEditViewControllerDelegate.h"
#import "MTAStateManagement.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class MTAAlarmCollectionViewCell, MTAAlarmEditViewController, NSString, NSUserActivity, _UIContentUnavailableView;

@interface MTAAlarmCollectionViewController : UICollectionViewController <AlarmDelegate, AlarmManagerObserver, MTAAlarmCollectionViewCellDelegate, MTAAlarmEditViewControllerDelegate, UICollectionViewDelegateFlowLayout, UIPopoverPresentationControllerDelegate, MTAStateManagement>
{
    double _cellHeight;
    MTAAlarmEditViewController *_addEditAlarmController;
    MTAAlarmCollectionViewCell *_sizingCell;
    _UIContentUnavailableView *_noItemsView;
    NSUserActivity *_userActivity;
}

@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(retain, nonatomic) _UIContentUnavailableView *noItemsView; // @synthesize noItemsView=_noItemsView;
@property(retain, nonatomic) MTAAlarmCollectionViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) MTAAlarmEditViewController *addEditAlarmController; // @synthesize addEditAlarmController=_addEditAlarmController;
- (void).cxx_destruct;
- (void)alarmManagerDidUpdateAlarms:(id)arg1;
- (void)setAlarmEnabled:(_Bool)arg1 forCell:(id)arg2;
- (void)removeAlarmAtIndexPath:(id)arg1;
- (void)deleteCell:(id)arg1;
- (void)_addOrEditControllerDidDismissCommitChanges:(_Bool)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)saveState;
- (void)reloadState;
- (void)didDeleteAlarm:(id)arg1;
- (void)dismissAddViewController:(id)arg1;
- (void)didEditAlarm:(id)arg1;
- (void)alarmDidUpdate:(id)arg1;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void)handleContentSizeChange:(id)arg1;
- (void)addAlarm:(id)arg1;
- (void)_handleNumberOfItemsDidChange;
- (void)_layoutNoItemsLabel;
- (void)viewDidLayoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
