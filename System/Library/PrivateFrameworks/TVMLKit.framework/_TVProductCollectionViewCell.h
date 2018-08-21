/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, UIViewController;

@interface _TVProductCollectionViewCell : UICollectionViewCell {

	UIView* _titleView;
	UIEdgeInsets _activeMargins;
	BOOL _marginActive;
	UIViewController* _viewController;
	UIEdgeInsets _partialMargins;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets partialMargins;                           //@synthesize partialMargins=_partialMargins - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                                  //@synthesize margins=_margins - In the implementation block
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(id)titleView;
-(id)preferredFocusEnvironments;
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(void)setTitleView:(id)arg1 margins:(UIEdgeInsets)arg2 show:(BOOL)arg3 ;
-(void)showTitleView:(BOOL)arg1 ;
-(BOOL)isShowingTitleView;
-(void)enableWithMargins:(UIEdgeInsets)arg1 ;
-(void)disableMargins;
-(UIEdgeInsets)partialMargins;
-(void)setPartialMargins:(UIEdgeInsets)arg1 ;
@end
