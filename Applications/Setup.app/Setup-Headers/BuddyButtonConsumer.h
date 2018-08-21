//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSHardwareButtonEventConsuming.h"

@class NSString;

@interface BuddyButtonConsumer : NSObject <SBSHardwareButtonEventConsuming>
{
    CDUnknownBlockType _menuHandler;
    id <BSInvalidatable> _buttonConsumer;
}

@property(retain, nonatomic) id <BSInvalidatable> buttonConsumer; // @synthesize buttonConsumer=_buttonConsumer;
@property(copy, nonatomic) CDUnknownBlockType menuHandler; // @synthesize menuHandler=_menuHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithButtonKind:(long long)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

