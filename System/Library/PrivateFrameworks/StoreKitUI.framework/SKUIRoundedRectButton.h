/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, UILabel;

@interface SKUIRoundedRectButton : UIButton {

	UIView* _borderView;
	UILabel* _subtitleLabel;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)tintColorDidChange;
-(void)_reloadColors;
-(void)_reloadFonts;
-(void)setSubtitleWithLabel:(id)arg1 ;
@end
