/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKBrowserSwitcherFooterViewDelegate, CKBrowserSwitcherFooterViewDataSource;
@class UICollectionView, CKAppStripLayout, NSTimer, UILongPressGestureRecognizer, UIView, NSString;

@interface CKBrowserSwitcherFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {

	UICollectionView* _collectionView;
	CKAppStripLayout* _appStripLayout;
	UIEdgeInsets _minifiedContentInsets;
	BOOL _isMagnified;
	BOOL _isDoingMagnificationAnimation;
	BOOL _isMagnificationEnabled;
	BOOL _ignoreDataSourceChanges;
	NSTimer* _minificationTimer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UILongPressGestureRecognizer* _touchTracker;
	BOOL _hasTouches;
	BOOL _scrollsLastUsedAppIconIntoView;
	BOOL _minifiesOnSelection;
	id<CKBrowserSwitcherFooterViewDelegate> _delegate;
	id<CKBrowserSwitcherFooterViewDataSource> _dataSource;
	UIView* _grayLine;
	UIView* _bottomGrayLine;

}

@property (nonatomic,retain) UIView * grayLine;                                                        //@synthesize grayLine=_grayLine - In the implementation block
@property (nonatomic,retain) UIView * bottomGrayLine;                                                  //@synthesize bottomGrayLine=_bottomGrayLine - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserSwitcherFooterViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserSwitcherFooterViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL isMagnified;                                                         //@synthesize isMagnified=_isMagnified - In the implementation block
@property (assign,nonatomic) BOOL scrollsLastUsedAppIconIntoView;                                      //@synthesize scrollsLastUsedAppIconIntoView=_scrollsLastUsedAppIconIntoView - In the implementation block
@property (nonatomic,retain) CKAppStripLayout * appStripLayout;                                        //@synthesize appStripLayout=_appStripLayout - In the implementation block
@property (assign,nonatomic) BOOL minifiesOnSelection;                                                 //@synthesize minifiesOnSelection=_minifiesOnSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<CKBrowserSwitcherFooterViewDelegate>)delegate;
-(void)setDataSource:(id<CKBrowserSwitcherFooterViewDataSource>)arg1 ;
-(void)setDelegate:(id<CKBrowserSwitcherFooterViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<CKBrowserSwitcherFooterViewDataSource>)dataSource;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)collectionView;
-(BOOL)isMagnified;
-(void)setScrollsLastUsedAppIconIntoView:(BOOL)arg1 ;
-(void)setMinifiesOnSelection:(BOOL)arg1 ;
-(void)resetScrollPosition;
-(CKAppStripLayout *)appStripLayout;
-(void)minifyImmediately:(BOOL)arg1 ;
-(void)setGrayLine:(UIView *)arg1 ;
-(void)setBottomGrayLine:(UIView *)arg1 ;
-(void)appsLongPressed:(id)arg1 ;
-(void)touchTrackerTrackedTouches:(id)arg1 ;
-(UIView *)grayLine;
-(UIView *)bottomGrayLine;
-(void)visibleAppsChanges:(id)arg1 ;
-(void)updateCollectionView:(id)arg1 ;
-(void)installedAppsChanged:(id)arg1 ;
-(void)selectPluginAtIndexPath:(id)arg1 ;
-(void)adjustMagnificationAtPoint:(CGPoint)arg1 minifyImmediately:(BOOL)arg2 ;
-(CGPoint)targetContentOffsetForFocusPoint:(CGPoint)arg1 initialLayoutMode:(unsigned long long)arg2 finalLayoutMode:(unsigned long long)arg3 ;
-(BOOL)scrollsLastUsedAppIconIntoView;
-(void)setInitiallySelectedPluginIfNeeded;
-(void)setIsMagnified:(BOOL)arg1 ;
-(void)setAppStripLayout:(CKAppStripLayout *)arg1 ;
-(BOOL)minifiesOnSelection;
@end
