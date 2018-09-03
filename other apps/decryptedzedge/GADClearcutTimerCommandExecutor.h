//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADClearcutCommandExecuting-Protocol.h"

@class NSString, NSTimer;
@protocol GADClearcutCommandExecuting;

@interface GADClearcutTimerCommandExecutor : NSObject <GADClearcutCommandExecuting>
{
    id <GADClearcutCommandExecuting> _executor;
    double _beaconTimeInterval;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)sendBeacon;
- (void)asynchronouslyExecuteCommands:(id)arg1;
- (_Bool)isLoaded;
- (void)dealloc;
- (id)initWithClearcutCommandExecutor:(id)arg1 timeInterval:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
