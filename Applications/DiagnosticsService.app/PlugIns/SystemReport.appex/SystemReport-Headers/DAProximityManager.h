//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface DAProximityManager : NSObject
{
    _Bool _updating;
    NSDictionary *_sensorRegion;
    struct __MTDevice *_deviceRef;
    CDUnknownBlockType _handler;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) struct __MTDevice *deviceRef; // @synthesize deviceRef=_deviceRef;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(readonly, nonatomic) NSDictionary *sensorRegion; // @synthesize sensorRegion=_sensorRegion;
- (void).cxx_destruct;
- (void)deviceSetDataStream:(unsigned char)arg1;
- (void)unregisterProximityChangedCallback;
- (void)registerProximityChangedCallback;
- (void)deviceStop;
- (void)deviceStart;
- (_Bool)stopProximitySensorUpdates;
- (void)handleNewProximityValue:(int)arg1;
- (_Bool)startProximitySensorUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

