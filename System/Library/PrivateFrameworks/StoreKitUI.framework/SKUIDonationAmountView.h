/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSArray, UILabel, SKUIGiftCharity, UIImageView, UIView, UIScrollView, UIImage, SKUIGiftAmount;

@interface SKUIDonationAmountView : UIView {

	NSArray* _amountButtons;
	UILabel* _amountDisclaimerLabel;
	SKUIGiftCharity* _charity;
	UILabel* _descriptionLabel;
	UILabel* _legalTextLabel;
	UILabel* _legalText2Label;
	UIImageView* _logoImageView;
	long long _selectedAmountIndex;
	UIView* _separatorView;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) SKUIGiftCharity * charity;                    //@synthesize charity=_charity - In the implementation block
@property (nonatomic,retain) UIImage * logoImage; 
@property (nonatomic,readonly) SKUIGiftAmount * selectedAmount; 
-(void)layoutSubviews;
-(void)dealloc;
-(SKUIGiftAmount *)selectedAmount;
-(SKUIGiftCharity *)charity;
-(id)initWithCharity:(id)arg1 ;
-(void)setLogoImage:(UIImage *)arg1 ;
-(void)_amountButtonDown:(id)arg1 ;
-(void)_amountButtonUpInside:(id)arg1 ;
-(void)_amountButtonUpOutside:(id)arg1 ;
-(UIImage *)logoImage;
@end
