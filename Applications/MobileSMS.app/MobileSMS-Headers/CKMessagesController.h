//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISplitViewController.h"

#import "CKBrowserViewControllerStoreSendDelegate.h"
#import "CKChatControllerDelegate.h"
#import "CKComposeChatControllerDelegate.h"
#import "CKCoreChatControllerDelegate.h"
#import "CKWhatsNewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UISplitViewControllerDelegate.h"

@class CKConversation, CKConversationListController, CKCoreChatController, CKNavigationController, CKViewController, CKWhatsNewController, NSMutableArray, NSSet, NSString, NSURL, UIViewController;

@interface CKMessagesController : UISplitViewController <UISplitViewControllerDelegate, UIActionSheetDelegate, CKCoreChatControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, CKChatControllerDelegate, CKComposeChatControllerDelegate, CKBrowserViewControllerStoreSendDelegate, CKWhatsNewControllerDelegate>
{
    CKConversation *_currentConversation;
    NSMutableArray *_conversationCache;
    CDUnknownBlockType _alertViewHandler;
    unsigned int _attachmentPreviewQosClass;
    _Bool _isInitialLoad;
    CKConversationListController *_conversationListController;
    CKCoreChatController *_chatController;
    CKCoreChatController *_composeChatController;
    CKNavigationController *_conversationListNavigationController;
    CKNavigationController *_chatNavigationController;
    CKNavigationController *_composeChatNavigationController;
    NSURL *_deferredMessagesStoreLaunchURL;
    CDUnknownBlockType _deferredHandleURLBlock;
    NSString *_deferredMessagesStoreLaunchURLSourceApplication;
    CKWhatsNewController *_whatsNewController;
    CKViewController *_blankViewController;
    UIViewController *_statusBarStyleViewController;
}

@property(retain, nonatomic) UIViewController *statusBarStyleViewController; // @synthesize statusBarStyleViewController=_statusBarStyleViewController;
@property(nonatomic) _Bool isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property(copy, nonatomic) CDUnknownBlockType alertViewHandler; // @synthesize alertViewHandler=_alertViewHandler;
@property(retain, nonatomic) CKViewController *blankViewController; // @synthesize blankViewController=_blankViewController;
@property(retain, nonatomic) CKWhatsNewController *whatsNewController; // @synthesize whatsNewController=_whatsNewController;
@property(copy, nonatomic) NSString *deferredMessagesStoreLaunchURLSourceApplication; // @synthesize deferredMessagesStoreLaunchURLSourceApplication=_deferredMessagesStoreLaunchURLSourceApplication;
@property(copy, nonatomic) CDUnknownBlockType deferredHandleURLBlock; // @synthesize deferredHandleURLBlock=_deferredHandleURLBlock;
@property(copy, nonatomic) NSURL *deferredMessagesStoreLaunchURL; // @synthesize deferredMessagesStoreLaunchURL=_deferredMessagesStoreLaunchURL;
@property(retain, nonatomic) CKConversation *currentConversation; // @synthesize currentConversation=_currentConversation;
@property(retain, nonatomic) CKNavigationController *composeChatNavigationController; // @synthesize composeChatNavigationController=_composeChatNavigationController;
@property(retain, nonatomic) CKNavigationController *chatNavigationController; // @synthesize chatNavigationController=_chatNavigationController;
@property(retain, nonatomic) CKNavigationController *conversationListNavigationController; // @synthesize conversationListNavigationController=_conversationListNavigationController;
@property(retain, nonatomic) CKCoreChatController *composeChatController; // @synthesize composeChatController=_composeChatController;
@property(retain, nonatomic) CKCoreChatController *chatController; // @synthesize chatController=_chatController;
@property(retain, nonatomic) CKConversationListController *conversationListController; // @synthesize conversationListController=_conversationListController;
- (void).cxx_destruct;
- (void)whatsNewController:(id)arg1 didDismissViewController:(id)arg2;
- (void)whatsNewControllerWillNotPresentViewController:(id)arg1;
- (void)presentWhatsNewViewControllerIfNeeded;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)commitSticker:(id)arg1;
- (id)dragControllerTranscriptDelegate;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)dismissAndReloadInputViews:(_Bool)arg1;
- (void)dismissToKeyboard:(_Bool)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;
- (void)startEditingPayload:(id)arg1;
- (void)commitPayload:(id)arg1;
- (void)didBeginInstallingAppWithBundleIdentifier:(id)arg1;
- (void)_setEntryViewHidden:(_Bool)arg1;
- (void)dismiss;
- (void)_presentAppStoreWithLaunchURL:(id)arg1 fromSourceApplication:(id)arg2;
- (void)showSurfAppForCurrentConversationWithAmount:(double)arg1 currency:(id)arg2;
- (void)showStoreForURL:(id)arg1 fromSourceApplication:(id)arg2;
- (void)_showStoreForDeferredLaunchURL;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (_Bool)isShowingChatControllerWithUnsentText;
- (_Bool)showUnreadConversationsWithLastConversation:(id)arg1 ignoringMessages:(id)arg2;
- (_Bool)hasUnreadFilteredConversationsIgnoringMessages:(id)arg1;
- (_Bool)isShowingChatController;
@property(readonly, nonatomic) _Bool isShowingConversationListController;
- (_Bool)isShowingDirtyComposeModalView;
- (_Bool)currentCompositionHasContent;
- (_Bool)isAnimatingMessageSend;
- (_Bool)isComposingMessage;
- (_Bool)isShowingBlankChatController;
- (void)conversationListWillBeginEditing;
- (void)_hideConversationListForIPadPPTTest;
- (void)showConversationList:(_Bool)arg1;
- (_Bool)resumeToConversation:(id)arg1;
- (void)showConversationAndMessageForSearchURL:(id)arg1;
- (void)showConversationAndMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 animate:(_Bool)arg3;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2 keepAllCurrentlyLoadedMessages:(_Bool)arg3;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2 forceToTranscript:(_Bool)arg3 keepAllCurrentlyLoadedMessages:(_Bool)arg4;
- (void)_checkPushToTranscriptTimingWithStartTime:(double)arg1;
- (void)cancelNewMessageComposition;
- (_Bool)hasBusinessRecipientWithRecipientIDs:(id)arg1;
- (void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(_Bool)arg3 bizIntent:(id)arg4 launchPluginWithBundleID:(id)arg5 pluginLaunchPayload:(id)arg6;
- (void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(_Bool)arg3;
- (id)_sharedBalloonPluginManager;
- (void)executeDeferredHandleURLBlock;
- (void)_appStateChange:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatRegistryDidLoad:(id)arg1;
- (void)_conversationLeft:(id)arg1;
- (void)cleanUpBizNavBarForConversation:(id)arg1;
- (void)setupBizNavBarForConversation:(id)arg1;
- (void)_setIsShowingNoSelectionUI:(_Bool)arg1;
- (void)_popToConversationListAndPerformBlockAnimated:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)_updateAlertSuppressionContext;
- (void)__updateAlertSuppressionContext;
@property(readonly, nonatomic) NSSet *alertSuppressionContexts;
- (_Bool)_isShowingFullScreenAppViewController;
- (_Bool)_isShowingModalChatController;
- (_Bool)_isShowingFullscreenController;
- (void)keyCommandChangeConversation:(id)arg1;
- (void)keyCommandCompose:(id)arg1;
- (void)_addConversationToCache:(id)arg1;
- (void)_pruneConversationCache;
- (void)_prepareToDumpCachedConversation:(id)arg1;
- (_Bool)_canDumpConversationFromCache:(id)arg1;
- (void)setCurrentConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(_Bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1;
- (void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;
- (void)composeChatControllerDidCancelComposition:(id)arg1;
- (_Bool)composeChatControllerCanEditRecipients;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)performSearchForQuery:(id)arg1;
- (void)performResumeDeferredSetup;
- (_Bool)becomeFirstResponder;
- (void)didReceiveMemoryWarning;
- (_Bool)shouldAutorotate;
- (id)childViewControllerForStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;
- (void)dealloc;
- (id)ppt_chatController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

