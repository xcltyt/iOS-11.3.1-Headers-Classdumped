/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDataSource.h>

@class CRCollectionView, _CRCollectionTableCell, NSArray, NSIndexPath, NSString;

@interface CRGridPageDataSource : NSObject <UICollectionViewDataSource> {

	CRCollectionView* _collectionView;
	_CRCollectionTableCell* _parentTableCell;
	NSArray* _icons;
	unsigned long long _columnCount;
	unsigned long long _rowCount;

}

@property (nonatomic,__weak,readonly) CRCollectionView * collectionView;                   //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) _CRCollectionTableCell * parentTableCell;              //@synthesize parentTableCell=_parentTableCell - In the implementation block
@property (nonatomic,retain) NSArray * icons;                                              //@synthesize icons=_icons - In the implementation block
@property (nonatomic,readonly) unsigned long long columnCount;                             //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,readonly) unsigned long long rowCount;                                //@synthesize rowCount=_rowCount - In the implementation block
@property (nonatomic,readonly) unsigned long long maxItemsInSection; 
@property (nonatomic,readonly) NSArray * hiddenBundleIdentifiers; 
@property (nonatomic,readonly) NSIndexPath * indexPathOfPlaceholderCell; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCollectionView:(id)arg1 columnCount:(unsigned long long)arg2 rowCount:(unsigned long long)arg3 icons:(id)arg4 ;
-(void)setParentTableCell:(_CRCollectionTableCell *)arg1 ;
-(id)iconAtIndexPath:(id)arg1 ;
-(_CRCollectionTableCell *)parentTableCell;
-(BOOL)_itemIsPlaceholder:(id)arg1 ;
-(void)insertPlaceholderCellAtIndexPath:(id)arg1 ;
-(void)removeIconAtIndexPath:(id)arg1 ;
-(void)replaceItemAtIndexPath:(id)arg1 withItem:(id)arg2 ;
-(NSIndexPath *)indexPathOfPlaceholderCell;
-(unsigned long long)maxItemsInSection;
-(void)insertIcon:(id)arg1 atIndexPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateCellAtIndexPath:(id)arg1 destinationDataSource:(id)arg2 destinationIndexPath:(id)arg3 inParentView:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)indexPathForIcon:(id)arg1 ;
-(unsigned long long)rowCount;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(CRCollectionView *)collectionView;
-(void)setIcons:(NSArray *)arg1 ;
-(NSArray *)icons;
-(NSArray *)hiddenBundleIdentifiers;
-(unsigned long long)columnCount;
@end

