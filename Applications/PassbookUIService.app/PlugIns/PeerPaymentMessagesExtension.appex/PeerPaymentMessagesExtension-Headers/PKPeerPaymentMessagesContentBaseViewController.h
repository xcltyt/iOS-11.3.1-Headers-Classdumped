//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKPeerPaymentMessagesContentProtocol.h"

@class NSString, PKPeerPaymentMessagesAppViewController, PKPeerPaymentMessagesContentView;

@interface PKPeerPaymentMessagesContentBaseViewController : UIViewController <PKPeerPaymentMessagesContentProtocol>
{
    PKPeerPaymentMessagesAppViewController *_appController;
    PKPeerPaymentMessagesContentView *_contentView;
}

@property(readonly, nonatomic) PKPeerPaymentMessagesContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) __weak PKPeerPaymentMessagesAppViewController *appController; // @synthesize appController=_appController;
- (void).cxx_destruct;
- (void)reloadContent;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithMessagesAppController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

