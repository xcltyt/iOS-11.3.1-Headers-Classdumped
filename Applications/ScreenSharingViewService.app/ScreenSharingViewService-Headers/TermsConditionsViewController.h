//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIRemoteAlertServiceViewController.h"

@class NSXPCConnection, UITextView;

@interface TermsConditionsViewController : SBUIRemoteAlertServiceViewController
{
    UITextView *termsTextView;
    NSXPCConnection *helperToolConnection;
    id helperTool;
}

@property(retain) id helperTool; // @synthesize helperTool;
@property(retain) NSXPCConnection *helperToolConnection; // @synthesize helperToolConnection;
- (void).cxx_destruct;
- (void)handleDoubleHeightStatusBarTap;
- (void)decline:(id)arg1;
- (void)agree:(id)arg1;
- (void)postResultNotification:(_Bool)arg1;
- (void)setUserInfo:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

