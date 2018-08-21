//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSHBHIDSampleHumiditySensor.h"
#import "SSHBHIDSamplePrintable.h"
#import "SSHBHIDSampleSequence.h"
#import "SSHBHIDSampleTimestamp.h"

@class NSString;

@interface SSHBHIDHumiditySensorSample : NSObject <SSHBHIDSamplePrintable, SSHBHIDSampleTimestamp, SSHBHIDSampleSequence, SSHBHIDSampleHumiditySensor>
{
    unsigned int _sequence;
    double _timestamp;
    double _humidity;
}

@property(nonatomic) double humidity; // @synthesize humidity=_humidity;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)csv;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

