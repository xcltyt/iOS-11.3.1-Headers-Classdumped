//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@interface UITableView (SafariExtras)
- (void)safari_adjustContentInsetForRubberBandingConcealedContentWithHeight:(double)arg1;
@property(readonly, nonatomic) struct CGPoint safari_contentOffsetExcludingContentInsetAdjustments;
- (void)safari_adjustContentOffsetToTopHidingTableHeaderView;
- (void)safari_moveSelectionBySectionOffset:(long long)arg1;
- (void)safari_moveSelectionByRowOffset:(long long)arg1;
@end
