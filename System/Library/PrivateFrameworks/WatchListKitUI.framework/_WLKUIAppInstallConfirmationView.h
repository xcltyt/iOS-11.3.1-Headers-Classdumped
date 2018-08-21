/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WatchListKitUI-Structs.h>
#import <UIKit/UIView.h>

@class _WLKUIAppInstallLockup, UILabel, WLKUIBuyButtonLockup, NSLayoutConstraint, UIImage, NSString, UIButton;

@interface _WLKUIAppInstallConfirmationView : UIView {

	BOOL _didLayout;
	_WLKUIAppInstallLockup* _lockupView;
	UILabel* _imageSubtitleView;
	WLKUIBuyButtonLockup* _buyLockup;
	UILabel* _titleView;
	UILabel* _messageView;
	NSLayoutConstraint* _buttonHeightConstraint;
	UIImage* _appIcon;
	NSString* _appName;
	NSString* _appSubtitle;
	NSString* _ageRating;
	NSString* _iAP;
	NSString* _title;
	NSString* _message;
	UIButton* _actionButton;
	UIButton* _cancelButton;
	UIButton* _appStoreButton;
	UIButton* _secondaryLinkButton;

}

@property (nonatomic,retain) _WLKUIAppInstallLockup * lockupView;              //@synthesize lockupView=_lockupView - In the implementation block
@property (nonatomic,copy) UIImage * appIcon;                                  //@synthesize appIcon=_appIcon - In the implementation block
@property (nonatomic,copy) NSString * appName;                                 //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * appSubtitle;                             //@synthesize appSubtitle=_appSubtitle - In the implementation block
@property (nonatomic,copy) NSString * ageRating;                               //@synthesize ageRating=_ageRating - In the implementation block
@property (nonatomic,copy) NSString * iAP;                                     //@synthesize iAP=_iAP - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                 //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                          //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                          //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * appStoreButton;                        //@synthesize appStoreButton=_appStoreButton - In the implementation block
@property (nonatomic,retain) UIButton * secondaryLinkButton;                   //@synthesize secondaryLinkButton=_secondaryLinkButton - In the implementation block
+(CGSize)iconSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)cancelButton;
-(UIImage *)appIcon;
-(void)setAppIcon:(UIImage *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setAppStoreButton:(UIButton *)arg1 ;
-(UIButton *)appStoreButton;
-(_WLKUIAppInstallLockup *)lockupView;
-(void)setAgeRating:(NSString *)arg1 ;
-(void)setIAP:(NSString *)arg1 ;
-(void)_layoutForTvos;
-(void)_layoutForIos;
-(void)setAppSubtitle:(NSString *)arg1 ;
-(void)setLockupView:(_WLKUIAppInstallLockup *)arg1 ;
-(NSString *)appSubtitle;
-(NSString *)ageRating;
-(NSString *)iAP;
-(UIButton *)secondaryLinkButton;
-(void)setSecondaryLinkButton:(UIButton *)arg1 ;
@end
