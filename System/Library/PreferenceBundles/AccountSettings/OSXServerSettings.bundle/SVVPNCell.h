/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIButton;

@interface SVVPNCell : PSTableCell {

	BOOL _VPNEnabled;
	UIButton* _installButton;

}

@property (nonatomic,retain) UIButton * installButton;              //@synthesize installButton=_installButton - In the implementation block
@property (assign,nonatomic) BOOL VPNEnabled;                       //@synthesize VPNEnabled=_VPNEnabled - In the implementation block
-(void)updateButtonState;
-(void)setVPNEnabled:(BOOL)arg1 ;
-(id)_buttonBackgroundImageForState:(unsigned long long)arg1 ;
-(BOOL)VPNEnabled;
-(void)installButtonPressed:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(UIButton *)installButton;
-(void)setInstallButton:(UIButton *)arg1 ;
@end
