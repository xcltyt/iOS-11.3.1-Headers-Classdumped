//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABMIDIPort.h"

@class NSArray, NSString, UIImage;

@interface ABMIDIReceiverPort : ABMIDIPort
{
}

- (id)initWithName:(id)arg1 title:(id)arg2 instanceConnectedBlock:(CDUnknownBlockType)arg3 instanceDisconnectedBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 title:(id)arg2 receiverBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType MIDIReceiverBlock; // @dynamic MIDIReceiverBlock;
@property(readonly, nonatomic) NSArray *sources; // @dynamic sources;
@property(readonly, nonatomic) UIImage *sourcesIcon; // @dynamic sourcesIcon;
@property(readonly, nonatomic) NSString *sourcesTitle; // @dynamic sourcesTitle;

@end

