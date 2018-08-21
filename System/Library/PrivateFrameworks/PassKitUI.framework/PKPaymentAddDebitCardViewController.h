/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, UIImage, NSString;

@interface PKPaymentAddDebitCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSetupDelegate> {

	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	UIImage* _passSnapShot;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(void)_handleNextStep;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 passSnapshot:(id)arg4 ;
-(void)_terminateSetupFlow;
-(void)_presentPaymentSetupController;
-(void)_setViewEnabledState:(BOOL)arg1 ;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1 ;
-(void)_handleProvisioningError:(id)arg1 ;
-(void)_setupLater;
@end
