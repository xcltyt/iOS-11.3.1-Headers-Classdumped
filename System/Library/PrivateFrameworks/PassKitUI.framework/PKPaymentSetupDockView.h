/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>

@class PKContinuousButton, PKPaymentSetupFooterView, OBPrivacyLinkController;

@interface PKPaymentSetupDockView : UIView {

	PKContinuousButton* _continousButton;
	PKPaymentSetupFooterView* _footerView;
	BOOL _isBuddyiPad;
	BOOL _requiresAdditionalContinousButtonPadding;
	long long _context;
	OBPrivacyLinkController* _privacyLink;

}

@property (assign,nonatomic) BOOL requiresAdditionalContinousButtonPadding;              //@synthesize requiresAdditionalContinousButtonPadding=_requiresAdditionalContinousButtonPadding - In the implementation block
@property (nonatomic,readonly) long long context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;                      //@synthesize privacyLink=_privacyLink - In the implementation block
@property (nonatomic,retain) PKContinuousButton * continousButton; 
@property (nonatomic,retain) PKPaymentSetupFooterView * footerView; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)context;
-(PKPaymentSetupFooterView *)footerView;
-(void)setFooterView:(PKPaymentSetupFooterView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(PKContinuousButton *)continousButton;
-(void)setContinousButton:(PKContinuousButton *)arg1 ;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(CGSize)_sizeForButton:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(BOOL)requiresAdditionalContinousButtonPadding;
-(void)setRequiresAdditionalContinousButtonPadding:(BOOL)arg1 ;
@end
