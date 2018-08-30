//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MSInteractionEvent;

@interface MSInteractionEventQueue : NSObject
{
    _Bool clean;
    MSInteractionEvent *firstEvent;
    unsigned long long count;
}

@property(nonatomic) unsigned long long count; // @synthesize count;
@property(readonly, retain, nonatomic) MSInteractionEvent *firstEvent; // @synthesize firstEvent;
@property(nonatomic) _Bool clean; // @synthesize clean;
- (void).cxx_destruct;
- (void)removeAllEvents;
- (id)dequeueEvent;
- (void)enqueueEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

