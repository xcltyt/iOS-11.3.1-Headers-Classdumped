//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UniversalSearchCompletionProvider.h"

@class NSString, NSTimer;

@interface PPTUniversalCompletionProvider : UniversalSearchCompletionProvider
{
    NSTimer *networkDelaySimulatorTimer;
    NSString *querySimulated;
}

- (void).cxx_destruct;
- (id)_generateSingleResult;
- (id)_generateResultsForString:(id)arg1;
- (void)setQueryToComplete:(id)arg1;

@end

