//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSParsecDSession.h"

@class WBSParsecDFeedbackDispatcher;

@interface UniversalSearchSession : WBSParsecDSession
{
}

+ (_Bool)shouldUseSearchFoundation;
+ (id)sharedSession;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) WBSParsecDFeedbackDispatcher *feedbackDispatcher; // @dynamic feedbackDispatcher;

@end

