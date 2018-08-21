//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKCalendarWeekView.h"

@class CALayer, NSArray;

@interface WDMonthWeekView : HKCalendarWeekView
{
    _Bool _displaysMonthTitle;
    _Bool _displaysTopBorderLine;
    _Bool _isRTL;
    CALayer *_topBorderLine;
    _Bool _accessoryContentsFetched;
    NSArray *_accessoryViews;
}

@property(nonatomic) _Bool accessoryContentsFetched; // @synthesize accessoryContentsFetched=_accessoryContentsFetched;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGRect)_frameForTopBorderLine;
- (void)layoutSubviews;
- (void)setMonthWeekStart:(id)arg1;
- (void)setTitleHighlighted:(_Bool)arg1;
- (id)cellMatchingDate:(id)arg1;
- (void)selectedCalendarDay:(id)arg1;
- (_Bool)containsMonthTitle;
- (_Bool)supportsRTL;
- (Class)monthTitleClass;
- (Class)cellClass;
- (void)clearAccessoryViews;
@property(readonly, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
- (id)initWithDateCache:(id)arg1 displaysMonthTitle:(_Bool)arg2 displaysTopBorderLine:(_Bool)arg3;

@end

