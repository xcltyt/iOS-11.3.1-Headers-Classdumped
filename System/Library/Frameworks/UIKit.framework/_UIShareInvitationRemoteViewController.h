/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIRemoteViewController.h>
#import <UIKit/_UIShareInvitationViewControllerHost.h>

@protocol _UISharingPublicController;
@class UIViewController, NSString;

@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController <_UIShareInvitationViewControllerHost> {

	UIViewController*<_UISharingPublicController> _publicController;

}

@property (assign,nonatomic,__weak) UIViewController*<_UISharingPublicController> publicController;              //@synthesize publicController=_publicController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_tintColorDidChangeToColor:(id)arg1 ;
-(void)setPublicController:(UIViewController*<_UISharingPublicController>)arg1 ;
-(void)_dismissViewController;
-(UIViewController*<_UISharingPublicController>)publicController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_dismissViewControllerWithError:(id)arg1 ;
-(void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)arg1 ;
-(void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)arg1 ;
-(void)_shareDidChange:(id)arg1 ;
-(void)_shareWasMadePrivate;
-(void)_performAuxiliaryActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performHeaderActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestSavedShareWithCompletion:(/*^block*/id)arg1 ;
-(void)_dismissForActivityRepresentation:(/*^block*/id)arg1 ;
-(void)_representFullscreenAfterActivityDismissal:(/*^block*/id)arg1 ;
-(void)_requestContentSize:(CGSize)arg1 ;
-(void)_updateTraitCollectionForPopoverStatus;
-(void)_dismissAndRepresentForActivity:(/*^block*/id)arg1 ;
@end
