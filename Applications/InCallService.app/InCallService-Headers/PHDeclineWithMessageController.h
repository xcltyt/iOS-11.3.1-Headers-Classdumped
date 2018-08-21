//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHDeclineWithActionController.h"

#import "MFMessageComposeViewControllerDelegate.h"

@class NSString, TUReplyWithMessageStore, UIViewController;

@interface PHDeclineWithMessageController : PHDeclineWithActionController <MFMessageComposeViewControllerDelegate>
{
    UIViewController *_customMessagePresentingViewController;
    TUReplyWithMessageStore *_cachedReplyStore;
}

+ (id)declineWithActionControllerWithCall:(id)arg1;
@property(retain) TUReplyWithMessageStore *cachedReplyStore; // @synthesize cachedReplyStore=_cachedReplyStore;
@property(retain, nonatomic) UIViewController *customMessagePresentingViewController; // @synthesize customMessagePresentingViewController=_customMessagePresentingViewController;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)sendDeclineViaIntentWithMessageResponse:(id)arg1 extension:(id)arg2;
- (void)sendDeclineViaChatKitWithMessageResponse:(id)arg1;
- (void)showCustomReplyWithMessageComposer;
- (void)sendDeclineWithMessageResponse:(id)arg1;
- (id)replyWithMessageStore;
- (id)dismissalAssertionReason;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

