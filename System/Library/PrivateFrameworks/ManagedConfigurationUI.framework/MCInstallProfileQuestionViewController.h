/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MCProfileQuestionsControllerDelegate;
@class MCUIFieldCollection, NSString, UIAlertView, UITextField;

@interface MCInstallProfileQuestionViewController : UITableViewController <PSStateRestoration, UITextFieldDelegate> {

	MCUIFieldCollection* _fieldCollection;
	NSString* _previousResponseValue;
	BOOL _waitingForPasscodePreflight;
	int _outDirection;
	UIAlertView* _activeAlert;
	BOOL _showingKeyboard;
	BOOL _isLastQuestion;
	id<MCProfileQuestionsControllerDelegate> _questionsDelegate;
	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;                                                        //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<MCProfileQuestionsControllerDelegate> questionsDelegate;              //@synthesize questionsDelegate=_questionsDelegate - In the implementation block
@property (assign,nonatomic) int outDirection;                                                               //@synthesize outDirection=_outDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2 ;
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(UITextField *)textField;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setOutDirection:(int)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_showKeyboard:(BOOL)arg1 ;
-(int)outDirection;
-(void)alertViewCancel:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)_setup;
-(void)_updateNavigationBar;
-(void)_cancelButtonClicked;
-(void)_showProgressIndicator;
-(void)stopWaitingForMoreInput;
-(id)initWithUserInput:(id)arg1 ;
-(void)setQuestionsDelegate:(id<MCProfileQuestionsControllerDelegate>)arg1 ;
-(void)waitForMoreInput;
-(void)_cancelActiveAlert:(BOOL)arg1 ;
-(void)updateWithUserInput:(id)arg1 ;
-(void)_textFieldValueChanged:(id)arg1 ;
-(void)_questionFieldEmpty:(id)arg1 ;
-(void)_questionFieldNotEmpty:(id)arg1 ;
-(void)_showNavButtonsAnimated:(BOOL)arg1 ;
-(void)_hideKeyboard:(BOOL)arg1 ;
-(void)_configureQuestionField:(id)arg1 ;
-(void)_retryCurrentPasswordFieldWithError:(id)arg1 ;
-(void)_showErrorAlertWithError:(id)arg1 ;
-(void)_continueOrFinish;
-(void)_hideProgressIndicator;
-(void)_didFinishPasscodePreflightWithError:(id)arg1 ;
-(void)_didFinishPreflightWithError:(id)arg1 ;
-(void)_retryWithCurrentField;
-(void)_cancelInput;
-(void)_continueWithCurrentField;
-(void)_preflightCurrentPayload;
-(void)_processResponseAndContinue;
-(void)_nextButtonClicked;
-(void)_disableRightButton;
-(void)_retryPayload;
-(void)_skipPayload;
-(void)_cancelPayload;
-(void)_enableRightButton;
-(id<MCProfileQuestionsControllerDelegate>)questionsDelegate;
-(void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1 ;
-(void)_finishInput;
-(id)initWithFieldCollection:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
@end
