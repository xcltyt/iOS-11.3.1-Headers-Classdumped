//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CompletionProvider.h"

#import "NSURLSessionDataDelegate.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSURLSession, UniversalSearchSession, WBSCompletionQuery;

@interface SearchSuggestionProvider : CompletionProvider <NSURLSessionDataDelegate>
{
    NSString *_currentSearchString;
    WBSCompletionQuery *_currentCompletionQuery;
    NSString *_userAgentString;
    NSURLSession *_session;
    UniversalSearchSession *_universalSearchSession;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableSet *_pendingTasks;
}

@property(retain, nonatomic) NSMutableSet *pendingTasks; // @synthesize pendingTasks=_pendingTasks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(nonatomic) __weak UniversalSearchSession *universalSearchSession; // @synthesize universalSearchSession=_universalSearchSession;
- (void).cxx_destruct;
- (void)_didFinishSearchTask:(id)arg1;
- (void)_willStartSearchTask:(id)arg1;
- (unsigned long long)maximumCachedCompletionCount;
- (id)suggestionStringsForData:(id)arg1;
- (void)dealloc;
- (void)stop;
- (void)setQueryToComplete:(id)arg1;
- (id)init;
- (id)completionsForQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SearchSuggestionProviderDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

