//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class STSSearchModel;

@protocol STSSearchModelQuerySuggestionsDelegate <NSObject>

@optional
- (void)searchModelUpdatedQuerySuggestions:(STSSearchModel *)arg1;
- (void)searchModelWillFetchQuerySuggestionsCompletions:(STSSearchModel *)arg1;
@end
