/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

@interface CKAppStripLayout : UICollectionViewLayout {

	NSArray* _minifiedAttributes;
	NSArray* _magnifiedAttributes;
	NSArray* _supplementryMinifiedAttributes;
	NSArray* _supplementryMagnifiedAttributes;
	BOOL _inLayoutModeTransition;
	BOOL _shouldDimPluginCells;
	unsigned long long _layoutMode;

}

@property (assign,nonatomic) unsigned long long layoutMode;              //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,nonatomic) BOOL shouldDimPluginCells;                  //@synthesize shouldDimPluginCells=_shouldDimPluginCells - In the implementation block
+(double)minHeight;
+(double)maxHeight;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)invalidateLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)invalidateCachedLayout;
-(void)setShouldDimPluginCells:(BOOL)arg1 ;
-(unsigned long long)layoutMode;
-(void)setLayoutMode:(unsigned long long)arg1 ;
-(CGSize)collectionViewContentSizeForLayoutMode:(unsigned long long)arg1 ;
-(void)prepareForLayoutModeTransition;
-(void)finishLayoutModeTransition;
-(BOOL)shouldDimPluginCells;
-(long long)_itemCount;
-(Spec)_specForLayoutMode:(unsigned long long)arg1 ;
-(long long)_favoritesCount;
-(long long)_recentsCount;
-(id)_attributesForLayoutMode:(unsigned long long)arg1 ;
-(id)_supplementryAttributesForLayoutMode:(unsigned long long)arg1 ;
-(id)_generateAttributesForSpec:(Spec)arg1 ;
-(id)_generateSupplementryAttributesForSpec:(Spec)arg1 minified:(BOOL)arg2 ;
-(id)_currentAttributes;
-(id)_currentSupplementryAttributes;
@end
