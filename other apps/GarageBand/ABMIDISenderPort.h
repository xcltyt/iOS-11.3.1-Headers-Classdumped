//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABMIDIPort.h"

@class NSString, UIImage;

@interface ABMIDISenderPort : ABMIDIPort
{
    _Bool _localOn;
}

@property(readonly, nonatomic) _Bool localOn;
- (void)setLocalOn:(_Bool)arg1;
- (id)initWithName:(id)arg1 title:(id)arg2 instanceConnectedBlock:(CDUnknownBlockType)arg3 instanceDisconnectedBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIImage *destinationsIcon; // @dynamic destinationsIcon;
@property(readonly, nonatomic) NSString *destinationsTitle; // @dynamic destinationsTitle;

@end

