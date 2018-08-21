//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CompletionItem.h"

@class NSArray, NSString, SFSearchResult, WBSCompletionQuery, WBSQuerySuggestion;

@interface SearchQueryRestorationCompletionItem : NSObject <CompletionItem>
{
    SFSearchResult *_sfSearchResultValue;
    WBSCompletionQuery *_queryToRestore;
    NSArray *_completionGroupsToRestore;
}

@property(copy, nonatomic) NSArray *completionGroupsToRestore; // @synthesize completionGroupsToRestore=_completionGroupsToRestore;
@property(retain, nonatomic) WBSCompletionQuery *queryToRestore; // @synthesize queryToRestore=_queryToRestore;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue; // @synthesize sfSearchResultValue=_sfSearchResultValue;
- (id)reflectedStringForUserTypedString:(id)arg1;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (id)completionTableViewCellForCompletionList:(id)arg1;
- (id)completionTableViewCellReuseIdentifier;
- (id)initWithQuery:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, nonatomic) _Bool restoresSearchState;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool usesDefaultHeaderView;

@end
