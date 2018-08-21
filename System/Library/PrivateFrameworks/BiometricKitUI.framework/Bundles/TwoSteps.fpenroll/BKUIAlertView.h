/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:09:19 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Bundles/TwoSteps.fpenroll/TwoSteps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol OS_os_log;
@class UIAlertController, NSObject, UIView, UILabel;

@interface BKUIAlertView : UIView {

	UIAlertController* _alertController;
	double _alertHudTextStartTime;
	NSObject*<OS_os_log> bkui_alert_view_log;
	id _parent;
	SEL _cancelButtonSelector;
	SEL _otherButtonSelector;
	UIView* _alertHudView;
	UILabel* _alertHudText;
	double _alertHudTimeout;
	double _alertHudMinDisplayTime;

}

@property (assign,nonatomic,__weak) id parent;                           //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) SEL cancelButtonSelector;                   //@synthesize cancelButtonSelector=_cancelButtonSelector - In the implementation block
@property (assign,nonatomic) SEL otherButtonSelector;                    //@synthesize otherButtonSelector=_otherButtonSelector - In the implementation block
@property (assign,nonatomic,__weak) UIView * alertHudView;               //@synthesize alertHudView=_alertHudView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * alertHudText;              //@synthesize alertHudText=_alertHudText - In the implementation block
@property (assign,nonatomic) double alertHudTimeout;                     //@synthesize alertHudTimeout=_alertHudTimeout - In the implementation block
@property (assign,nonatomic) double alertHudMinDisplayTime;              //@synthesize alertHudMinDisplayTime=_alertHudMinDisplayTime - In the implementation block
-(double)alertHudTimeout;
-(double)alertHudMinDisplayTime;
-(void)setAlertHudView:(UIView *)arg1 ;
-(void)setAlertHudText:(UILabel *)arg1 ;
-(void)setAlertHudTimeout:(double)arg1 ;
-(void)setAlertHudMinDisplayTime:(double)arg1 ;
-(UILabel *)alertHudText;
-(void)setOtherButtonSelector:(SEL)arg1 ;
-(SEL)cancelButtonSelector;
-(SEL)otherButtonSelector;
-(void)setCancelButtonSelector:(SEL)arg1 ;
-(UIView *)alertHudView;
-(void)show:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 cancelButtonSelector:(SEL)arg5 viewController:(id)arg6 ;
-(void)_hideAlertHudView;
-(void)show:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 cancelButtonSelector:(SEL)arg5 otherButtonTitle:(id)arg6 otherButtonSelector:(SEL)arg7 viewController:(id)arg8 ;
-(void)_setFadeAnimation:(id)arg1 ;
-(void)showAlert:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 viewController:(id)arg5 ;
-(BOOL)isAlertHidden;
-(void)show:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 viewController:(id)arg4 ;
-(id)init;
-(void)_init;
-(id)parent;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)setParent:(id)arg1 ;
@end
