/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <PhotosEditUI/PUAdjustmentsModeBar.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UILabel, UIButton, PUAdjustmentsModeBadge, NSMutableDictionary, PUSlidersCollectionView, NSArray, NSMutableSet, NSString;

@interface PUCompactAdjustmentsModeBar : PUAdjustmentsModeBar <UICollectionViewDataSource> {

	UILabel* _titleLabel;
	UIButton* _titleButton;
	PUAdjustmentsModeBadge* _titleBackground;
	NSMutableDictionary* _titleViewsByKey;
	NSMutableDictionary* _titleViewConstraintsByKey;
	UIButton* _expansionButton;
	PUSlidersCollectionView* _modeSlidersCollectionView;
	NSArray* _expansionButtonConstraints;
	NSArray* _modeSlidersCollectionViewConstraints;
	NSArray* __visibleModes;
	NSMutableSet* _expandedSupermodes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)updateConstraints;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setSelectedMode:(id)arg1 animated:(BOOL)arg2 ;
-(id)newConstraintsForModePickerList:(id)arg1 ;
-(id)currentSlidersCollectionView;
-(void)setListViewExpanded:(BOOL)arg1 explicitly:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)visibleSliderAdjustmentModes;
-(id)newModePickerListBackgroundView;
-(void)configurePickerCell:(id)arg1 forMode:(id)arg2 ;
-(BOOL)wantsToHandleEventAtPoint:(CGPoint)arg1 ;
-(BOOL)shouldShowModePickerOnFirstDisplay;
-(void)updateEnabledForCurrentMode;
-(void)copyStateFromAdjustmentsModeBar:(id)arg1 ;
-(void)configureSliderCell:(id)arg1 forMode:(id)arg2 ;
-(void)_updateTitleViewAnimated:(BOOL)arg1 ;
-(void)_updateVisibleModesAnimated:(BOOL)arg1 ;
-(id)_addOrRemoveViewByKey:(id)arg1 wantsView:(BOOL)arg2 animated:(BOOL)arg3 factory:(/*^block*/id)arg4 ;
-(void)_modeToggleTapped:(id)arg1 ;
-(void)_setExpanded:(BOOL)arg1 forSupermode:(id)arg2 exclusive:(BOOL)arg3 animated:(BOOL)arg4 ;
-(BOOL)_isExpandedSupermode:(id)arg1 ;
@end
