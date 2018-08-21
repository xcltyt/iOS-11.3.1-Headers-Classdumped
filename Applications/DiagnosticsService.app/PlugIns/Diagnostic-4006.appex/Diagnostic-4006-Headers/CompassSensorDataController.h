//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DKDiagnosticController.h"

#import "DAHIDEventMonitorDelegate.h"

@class DAHIDEventMonitor, NSString;

@interface CompassSensorDataController : DKDiagnosticController <DAHIDEventMonitorDelegate>
{
    int _compassDataCount;
    DAHIDEventMonitor *_eventMonitor;
}

@property(nonatomic) int compassDataCount; // @synthesize compassDataCount=_compassDataCount;
@property(retain, nonatomic) DAHIDEventMonitor *eventMonitor; // @synthesize eventMonitor=_eventMonitor;
- (void).cxx_destruct;
- (void)teardown;
- (void)finish;
- (void)handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

