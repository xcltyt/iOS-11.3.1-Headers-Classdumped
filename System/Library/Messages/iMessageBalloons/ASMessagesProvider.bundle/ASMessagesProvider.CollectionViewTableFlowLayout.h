/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <ASMessagesProvider/ASMessagesProvider.ShelfDisplayingFlowLayout.h>

@class NSSet;

@interface ASMessagesProvider.CollectionViewTableFlowLayout : ASMessagesProvider.ShelfDisplayingFlowLayout {

	 globalHeaderAvoidsOverscroll;
	 isSupplementaryViewAnimationEnabled;
	 globalHeaderSize;
	 globalHeaderFrame;
	 pendingPrepareObserver;

}

@property (assign,nonatomic) BOOL sectionHeadersPinToVisibleBounds; 
@property (assign,nonatomic) BOOL sectionFootersPinToVisibleBounds; 
@property (assign,nonatomic) BOOL globalHeaderAvoidsOverscroll; 
@property (readonly,nonatomic) NSSet * visibleSections; 
@property (assign,nonatomic) BOOL isSupplementaryViewAnimationEnabled; 
@property (readonly,nonatomic) CGSize collectionViewContentSize; 
+(id)globalHeaderElementKind;
-(NSSet *)visibleSections;
-(void)observeNextPreparationWith:(/*^block*/id)arg1 ;
-(BOOL)globalHeaderAvoidsOverscroll;
-(void)setGlobalHeaderAvoidsOverscroll:(BOOL)arg1 ;
-(BOOL)isSupplementaryViewAnimationEnabled;
-(void)setIsSupplementaryViewAnimationEnabled:(BOOL)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setSectionHeadersPinToVisibleBounds:(BOOL)arg1 ;
-(BOOL)sectionHeadersPinToVisibleBounds;
-(void)setSectionFootersPinToVisibleBounds:(BOOL)arg1 ;
-(BOOL)sectionFootersPinToVisibleBounds;
@end
