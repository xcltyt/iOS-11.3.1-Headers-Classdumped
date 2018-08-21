/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UINavigationControllerPalette.h>

@class UISearchBar, UIView;

@interface _UINavigationControllerManagedSearchPalette : _UINavigationControllerPalette {

	BOOL _ignoreGeometryChanges;
	/*^block*/id _resetAfterSearchFieldFade;
	UISearchBar* __searchBar;

}

@property (nonatomic,readonly) UIView * viewForAsymmetricFade; 
@property (assign,nonatomic) BOOL ignoreGeometryChanges;                                         //@synthesize ignoreGeometryChanges=_ignoreGeometryChanges - In the implementation block
@property (nonatomic,copy) id resetAfterSearchFieldFade;                                         //@synthesize resetAfterSearchFieldFade=_resetAfterSearchFieldFade - In the implementation block
@property (assign,setter=_setSearchBar:,nonatomic,__weak) UISearchBar * _searchBar;              //@synthesize _searchBar=__searchBar - In the implementation block
@property (assign,setter=_setShadowAlpha:,nonatomic) double _shadowAlpha; 
-(void)setCenter:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(BOOL)_supportsSpecialSearchBarTransitions;
-(void)_propagateBackgroundToContents;
-(double)_shadowAlpha;
-(void)_setShadowAlpha:(double)arg1 ;
-(void)_updateLayoutForCurrentConfiguration;
-(BOOL)_shouldUpdateBackground;
-(BOOL)_shouldHideWhenScrolling;
-(id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(UIView *)viewForAsymmetricFade;
-(UISearchBar *)_searchBar;
-(void)_pushDisableLayoutFlushingForTransition;
-(void)_popDisableLayoutFlushingForTransition;
-(void)setResetAfterSearchFieldFade:(id)arg1 ;
-(id)resetAfterSearchFieldFade;
-(BOOL)ignoreGeometryChanges;
-(void)setIgnoreGeometryChanges:(BOOL)arg1 ;
-(void)_setSearchBar:(id)arg1 ;
@end
