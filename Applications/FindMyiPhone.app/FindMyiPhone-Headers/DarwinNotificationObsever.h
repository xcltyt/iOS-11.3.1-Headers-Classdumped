//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface DarwinNotificationObsever : NSObject
{
    NSMutableDictionary *_notificationBlocks;
}

@property(retain, nonatomic) NSMutableDictionary *notificationBlocks; // @synthesize notificationBlocks=_notificationBlocks;
- (void).cxx_destruct;
- (void)handleDarwinNotificationNamed:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allKeys;
- (void)setHandlerForKey:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
