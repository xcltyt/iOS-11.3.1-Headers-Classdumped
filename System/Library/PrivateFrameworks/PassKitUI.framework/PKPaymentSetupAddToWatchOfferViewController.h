/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIView, PKPaymentPass, PKPaymentSetupAddToWatchOfferView;

@interface PKPaymentSetupAddToWatchOfferViewController : UIViewController {

	UIView* _interactionDisabledView;
	PKPaymentPass* _pass;
	long long _context;
	/*^block*/id _dismissalHandler;
	PKPaymentSetupAddToWatchOfferView* _offerView;

}

@property (nonatomic,retain,readonly) PKPaymentPass * pass;                                       //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) long long context;                                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                                                   //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentSetupAddToWatchOfferView * offerView;              //@synthesize offerView=_offerView - In the implementation block
+(void)shouldShowAddToWatchOfferForPass:(id)arg1 inContext:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)loadView;
-(long long)context;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(void)setContext:(long long)arg1 ;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(PKPaymentPass *)pass;
-(id)initWithPaymentPass:(id)arg1 context:(long long)arg2 dismissalHandler:(/*^block*/id)arg3 ;
-(void)_configureNavigationItem;
-(void)_clearInteractionDisabledView;
-(void)_doneTapped:(id)arg1 ;
-(void)_openAppTapped:(id)arg1 ;
-(void)_handleDismissal:(BOOL)arg1 ;
-(void)_showSpinner;
-(void)_hideSpinner;
-(void)_handleBridgeProvisioningError:(id)arg1 ;
-(void)_setIdleTimerDisabled:(BOOL)arg1 ;
-(void)_addLaterTapped:(id)arg1 ;
-(PKPaymentSetupAddToWatchOfferView *)offerView;
@end
