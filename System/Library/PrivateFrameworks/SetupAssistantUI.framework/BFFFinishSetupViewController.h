/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFollowUpUI/FLExtensionViewController.h>
#import <libobjc.A.dylib/BFFFinishSetupFlowHosting.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UINavigationController, FLFollowUpAction, NSMutableArray, NSMutableSet, UIViewController, NSString;

@interface BFFFinishSetupViewController : FLExtensionViewController <BFFFinishSetupFlowHosting, UINavigationControllerDelegate> {

	BOOL _setupInProgress;
	UINavigationController* _navigationController;
	FLFollowUpAction* _followUpAction;
	NSMutableArray* _flowIdentifiers;
	NSMutableSet* _completedFlowIdentifiers;
	NSMutableSet* _skippedFlowIdentifiers;
	UIViewController* _newRootViewController;
	/*^block*/id _completion;
	/*^block*/id _overrideFlowControllerGenerator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_keyValueDictionaryForURL:(id)arg1 ;
+(id)_orderedFlowIdentifiersFromFlowIdentifiers:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)_complete;
-(BOOL)didSkipFlowInFinishSetup:(id)arg1 ;
-(BOOL)didCompleteFlowInFinishSetup:(id)arg1 ;
-(void)_startNextFlowIdentifier;
-(id)_flowControllerForNextFlowIdentifier;
-(BOOL)_presentPreconditionViewControllerIfNecessaryForFlowController:(id)arg1 ;
-(void)_didSatisfyPreconditionsForFlowController:(id)arg1 ;
-(void)_flowDidFinishForIdentifiers:(id)arg1 result:(unsigned long long)arg2 ;
-(void)_performExtendedInitializationForFlowController:(id)arg1 ;
-(void)_didSatisfyInitializationForFlowController:(id)arg1 ;
-(void)_pushViewControllerOntoNavigationController:(id)arg1 ;
-(void)_ensureNavigationControllerWithViewController:(id)arg1 ;
-(id)_flowControllerForFlowIdentifier:(id)arg1 ;
-(void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOverrideFlowControllerGenerator:(/*^block*/id)arg1 ;
@end
