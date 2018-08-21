//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFSearchResult, SFSearchSuggestion, STSPayload, STSPicker;

@protocol STSPickerSelectionDelegate <NSObject>
- (void)browser:(STSPicker *)arg1 didSelectCategoryResult:(SFSearchResult *)arg2;
- (void)browserDidTapLogo:(STSPicker *)arg1;
- (void)requestExpandedPresentationStyleForBrowser:(STSPicker *)arg1 completion:(void (^)(void))arg2;
- (_Bool)browserIsPresentedFullscreen:(STSPicker *)arg1;
- (void)browserSuggestionButtonClicked:(STSPicker *)arg1 suggestion:(SFSearchSuggestion *)arg2;
- (void)browserSearchBarButtonClicked:(STSPicker *)arg1;
- (void)browser:(STSPicker *)arg1 didSelectResult:(SFSearchResult *)arg2 withPayload:(STSPayload *)arg3;
- (void)browser:(STSPicker *)arg1 didSelectProviderLink:(SFSearchResult *)arg2;
@end

