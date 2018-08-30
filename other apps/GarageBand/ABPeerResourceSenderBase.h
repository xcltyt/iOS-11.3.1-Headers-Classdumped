//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DBPeer;

@interface ABPeerResourceSenderBase : NSObject
{
    _Bool _cancelled;
    _Bool _running;
    DBPeer *_peer;
    CDUnknownBlockType _completionBlock;
    id _notificationToken;
}

@property(retain, nonatomic) id notificationToken; // @synthesize notificationToken=_notificationToken;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) DBPeer *peer; // @synthesize peer=_peer;
- (void).cxx_destruct;
- (void)didSendMessage;
- (id)nextMessage;
- (void)transmissionThread;
- (void)cancel;
- (void)start;
- (id)description;
- (void)dealloc;
- (id)initWithPeer:(id)arg1;

@end

