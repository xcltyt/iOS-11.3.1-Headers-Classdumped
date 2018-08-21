//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "UniversalSearchSectionHeaderViewWithFeedbackDelegate.h"

@class NSString, NSURL, UIButton;

@interface UniversalSearchResultTableSectionHeaderView : UITableViewHeaderFooterView <UniversalSearchSectionHeaderViewWithFeedbackDelegate>
{
    UIButton *_feedbackButton;
    NSString *_title;
    NSURL *_reportProblemURL;
    id <UniversalSearchFeedbackDelegate> _feedbackDelegate;
}

@property(nonatomic) __weak id <UniversalSearchFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property(retain, nonatomic) NSURL *reportProblemURL; // @synthesize reportProblemURL=_reportProblemURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_handleParsecFeedbackButtonTap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

