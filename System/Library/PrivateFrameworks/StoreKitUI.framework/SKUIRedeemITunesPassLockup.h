/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class SKUIClientContext, SKUIITunesPassConfiguration, UILabel, UIView, UIImageView;

@interface SKUIRedeemITunesPassLockup : UIControl {

	SKUIClientContext* _clientContext;
	SKUIITunesPassConfiguration* _configuration;
	UILabel* _descriptionLabel;
	UIView* _horizontalSeparatorView;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;

}
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithITunesPassConfiguration:(id)arg1 clientContext:(id)arg2 ;
-(id)_attributedDescriptionString;
@end
