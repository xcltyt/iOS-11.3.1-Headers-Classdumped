//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABPeer.h"

@class ABAudiobusController;

@interface ABSelfPeer : ABPeer
{
    ABAudiobusController *_audiobusController;
}

+ (id)keyPathsForValuesAffectingReceiverPorts;
+ (id)keyPathsForValuesAffectingFilterPorts;
+ (id)keyPathsForValuesAffectingSenderPorts;
@property(nonatomic) __weak ABAudiobusController *audiobusController; // @synthesize audiobusController=_audiobusController;
- (void).cxx_destruct;
- (id)MIDIReceiverPorts;
- (void)setMIDIReceiverPorts:(id)arg1;
- (id)MIDIFilterPorts;
- (void)setMIDIFilterPorts:(id)arg1;
- (id)MIDISenderPorts;
- (void)setMIDISenderPorts:(id)arg1;
- (id)receiverPorts;
- (id)audioReceiverPorts;
- (void)setReceiverPorts:(id)arg1;
- (void)setAudioReceiverPorts:(id)arg1;
- (id)filterPorts;
- (id)audioFilterPorts;
- (void)setAudioFilterPorts:(id)arg1;
- (void)setFilterPorts:(id)arg1;
- (void)setSenderPorts:(id)arg1;
- (void)setAudioSenderPorts:(id)arg1;
- (id)audioSenderPorts;
- (id)senderPorts;
- (void)updatePortsOfType:(int)arg1 fromMetadata:(id)arg2 withKey:(id)arg3;
- (_Bool)peerIsRemoteControlPeer:(id)arg1;
- (id)initWithDBPeer:(id)arg1 audiobusController:(id)arg2 audioSenderPorts:(id)arg3 audioFilterPorts:(id)arg4 audioReceiverPorts:(id)arg5 MIDISenderPorts:(id)arg6 MIDIFilterPorts:(id)arg7 MIDIReceiverPorts:(id)arg8;

@end
