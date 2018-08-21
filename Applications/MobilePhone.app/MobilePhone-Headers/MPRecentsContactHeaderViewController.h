//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHRecentCallDetailsViewDelegate.h"

@class CHRecentCall, NSDictionary, NSString, PHRecentCallDetailsView;

@interface MPRecentsContactHeaderViewController : UIViewController <PHRecentCallDetailsViewDelegate>
{
    PHRecentCallDetailsView *_detailsView;
    CHRecentCall *_recentCall;
    NSDictionary *_ttyConversations;
}

@property(retain, nonatomic) NSDictionary *ttyConversations; // @synthesize ttyConversations=_ttyConversations;
@property(retain, nonatomic) CHRecentCall *recentCall; // @synthesize recentCall=_recentCall;
@property(retain, nonatomic) PHRecentCallDetailsView *detailsView; // @synthesize detailsView=_detailsView;
- (void).cxx_destruct;
- (void)presentConversationForUUID:(id)arg1;
- (id)ttyConversationForUUID:(id)arg1;
- (long long)recentCallTTYType;
- (void)loadTTYConversations;
- (id)generateDetailsView;
- (void)loadLayoutConstraints;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

