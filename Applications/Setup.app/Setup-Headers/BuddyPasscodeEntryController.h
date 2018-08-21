//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BFFPasscodeInputViewDelegate.h"

@class DevicePINController, NSString, NSTimer, UILabel;

@interface BuddyPasscodeEntryController : UIViewController <BFFPasscodeInputViewDelegate>
{
    DevicePINController *_pinController;
    UILabel *_statusLabel;
    NSTimer *_statusTimer;
    _Bool _numeric;
    unsigned long long _numericLength;
    id <BuddyPasscodeEntryDelegate> _delegate;
    NSString *_titleText;
    NSString *_instructions;
}

@property(copy, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) __weak id <BuddyPasscodeEntryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long numericLength; // @synthesize numericLength=_numericLength;
@property(nonatomic, getter=isNumeric) _Bool numeric; // @synthesize numeric=_numeric;
- (void).cxx_destruct;
- (void)configurePasscodeTypeUsingAnimations:(_Bool)arg1;
- (void)clear;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;
- (void)passcodeInput:(id)arg1 willChangeContents:(id)arg2;
- (void)updateStatusMessage;
- (void)nextButtonPressed;
- (void)_finishedWithPasscode:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_setupFirstEntry;
- (_Bool)usesSimplePasscodeEntry;
- (id)passcodeView;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
