/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol RPBroadcastActivityViewControllerDelegate;
@class UIPopoverPresentationController, RPBroadcastActivityHostViewController;

@interface RPBroadcastActivityViewController : UIViewController {

	id<RPBroadcastActivityViewControllerDelegate> _delegate;
	UIPopoverPresentationController* _popoverPresentationControllerProxy;
	RPBroadcastActivityHostViewController* _hostViewController;
	/*^block*/id _didFinishHandler;

}

@property (nonatomic,retain) UIPopoverPresentationController * popoverPresentationControllerProxy;              //@synthesize popoverPresentationControllerProxy=_popoverPresentationControllerProxy - In the implementation block
@property (nonatomic,retain) RPBroadcastActivityHostViewController * hostViewController;                        //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,copy) id didFinishHandler;                                                                 //@synthesize didFinishHandler=_didFinishHandler - In the implementation block
@property (assign,nonatomic,__weak) id<RPBroadcastActivityViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
+(void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg1 handler:(/*^block*/id)arg2 broadcastActivitiesNotInstalledAlertTitle:(id)arg3 broadcastActivitiesNotInstalledAlertMessage:(id)arg4 ;
+(void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)loadBroadcastActivityViewControllerWithHandler:(/*^block*/id)arg1 ;
-(id<RPBroadcastActivityViewControllerDelegate>)delegate;
-(void)setDelegate:(id<RPBroadcastActivityViewControllerDelegate>)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)popoverPresentationController;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)setHostViewController:(RPBroadcastActivityHostViewController *)arg1 ;
-(RPBroadcastActivityHostViewController *)hostViewController;
-(void)setDidFinishHandler:(id)arg1 ;
-(void)setPopoverPresentationControllerProxy:(UIPopoverPresentationController *)arg1 ;
-(UIPopoverPresentationController *)popoverPresentationControllerProxy;
-(id)didFinishHandler;
@end
