//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SVSStarkConfirmationSnippetControllerDelegate.h"
#import "SVSStarkDisambiguationSnippetControllerDelegate.h"
#import "SVSStarkGatekeeperHeaderViewDelegate.h"
#import "SVSStarkItemControllerDelegate.h"
#import "SVSStarkViewDataSource.h"
#import "SVSStarkViewDelegate.h"
#import "SiriUIPresentation.h"

@class AFUIRequestOptions, AceObject, NSString, NSTimer, SVSStarkView, UIViewController<SVSStarkItemController>;

@interface SVSCarDisplayViewController : UIViewController <SVSStarkConfirmationSnippetControllerDelegate, SVSStarkDisambiguationSnippetControllerDelegate, SVSStarkItemControllerDelegate, SVSStarkViewDelegate, SVSStarkGatekeeperHeaderViewDelegate, SVSStarkViewDataSource, SiriUIPresentation>
{
    AceObject *_gatekeeperHeaderDataSource;
    _Bool _screenSupportsTouchInteraction;
    id <SiriUIPresentationDataSource> _dataSource;
    id <SiriUIPresentationDelegate> _delegate;
    UIViewController<SVSStarkItemController> *_currentSnippetController;
    AFUIRequestOptions *_requestOptions;
    double _selectButtonTimeInterval;
    NSTimer *_selectButtonHoldToTalkTimer;
}

@property(retain, nonatomic, getter=_selectButtonHoldToTalkTimer, setter=_setSelectButtonHoldToTalkTimer:) NSTimer *selectButtonHoldToTalkTimer; // @synthesize selectButtonHoldToTalkTimer=_selectButtonHoldToTalkTimer;
@property(nonatomic, getter=_selectButtonTimeInterval, setter=_setSelectButtonTimeInterval:) double selectButtonTimeInterval; // @synthesize selectButtonTimeInterval=_selectButtonTimeInterval;
@property(nonatomic, getter=_screenSupportsTouchInteraction) _Bool screenSupportsTouchInteraction; // @synthesize screenSupportsTouchInteraction=_screenSupportsTouchInteraction;
@property(retain, nonatomic, getter=_requestOptions, setter=_setRequestOptions:) AFUIRequestOptions *requestOptions; // @synthesize requestOptions=_requestOptions;
@property(retain, nonatomic, getter=_currentSnippetController, setter=_setCurrentSnippetController:) UIViewController<SVSStarkItemController> *currentSnippetController; // @synthesize currentSnippetController=_currentSnippetController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)siriSessionDidUpdateSessionInfo:(id)arg1;
- (void)siriSessionDidInitializeSessionInfo:(id)arg1;
- (long long)userAccountCountForStarkView:(id)arg1;
- (id)activeAccountForStarkView:(id)arg1;
- (id)assistantVersionForStarkView:(id)arg1;
- (void)mapsGatekeeperKeyboardButtonActivatedFromView:(id)arg1 interactionModel:(unsigned long long)arg2;
- (void)gatekeeperHeaderDismissalButtonPressed:(id)arg1;
- (id)backgroundColorForCellsInDisambiguationSnippetController:(id)arg1;
- (void)disambiguationSnippetController:(id)arg1 performAceCommands:(id)arg2;
- (_Bool)isShowingGatekeeperHeader;
- (void)confirmationSnippetControllerRequestsDismissal:(id)arg1;
- (void)confirmationSnippetController:(id)arg1 performAceCommands:(id)arg2;
- (void)_sendWillSendStartRequestIfNecessary:(id)arg1;
- (_Bool)_containStartRequest:(id)arg1;
- (void)starkViewDidRemoveSnippetView:(id)arg1;
- (void)handleSelectButtonTap:(id)arg1;
- (void)_selectButtonHoldToTalkIntervalFired:(id)arg1;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_buttons:(id)arg1 hasType:(long long)arg2;
- (void)displayUtteranceWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)didReceiveDismissalAction:(CDUnknownBlockType)arg1;
- (void)startNewConversation;
- (_Bool)shouldBlockURLOpenOnTTS:(id)arg1;
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;
- (_Bool)shouldDismissForIdling;
- (double)idleTimerInterval;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)_updateItemsAtIndexPath:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)viewController;
- (long long)options;
- (void)userWantsStarkItemControllerFullScreen:(id)arg1;
- (void)starkItemControllerRequestsDismissal:(id)arg1;
- (void)starkItemController:(id)arg1 synthesizeSpeechWithText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setGatekeeperHeaderForAceObject:(id)arg1;
- (void)_setGatekeeperHeaderForRequestOptions:(id)arg1;
- (void)_clearSnippetDisplay;
- (void)_dismissStark;
- (_Bool)_screenSupportsKnobInteraction;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)siriRequestWillStart;
- (void)_configureForRequestOptions:(id)arg1;
- (void)configureForRequestOptions:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SVSStarkView *view; // @dynamic view;

@end

