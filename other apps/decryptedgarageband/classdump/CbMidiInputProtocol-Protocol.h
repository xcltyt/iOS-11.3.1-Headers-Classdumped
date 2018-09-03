//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MSKeyboardInteraction, NSArray, UITouch;

@protocol CbMidiInputProtocol
- (int)currentSongKey;
- (_Bool)currentSongKeyIsMajor;
- (unsigned long long)normalizedVelocity:(unsigned long long)arg1;
- (int)currentInstrumentID;
- (void)sendValue:(unsigned char)arg1 mb3:(unsigned char)arg2 toController:(unsigned char)arg3 onChannel:(unsigned char)arg4;
- (void)sendValue:(unsigned char)arg1 mb3:(unsigned char)arg2 toController:(unsigned char)arg3;
- (void)sendChannelPressure:(int)arg1 mb3:(unsigned char)arg2 toChannel:(int)arg3;
- (void)sendPitchbend:(int)arg1 mb3:(unsigned char)arg2 toChannel:(int)arg3;
- (void)sendPitchbend:(int)arg1 mb3:(unsigned char)arg2;
- (void)sendNoteOff:(int)arg1 toInstrumentID:(int)arg2 mb3:(unsigned char)arg3 toChannel:(int)arg4;
- (void)sendNoteOff:(int)arg1 toInstrumentID:(int)arg2 mb3:(unsigned char)arg3;
- (void)sendNoteOn:(int)arg1 toInstrumentID:(int)arg2 withVelocity:(unsigned char)arg3 mb3:(unsigned char)arg4 toChannel:(int)arg5 touch:(UITouch *)arg6;
- (void)sendNoteOn:(int)arg1 toInstrumentID:(int)arg2 withVelocity:(unsigned char)arg3 mb3:(unsigned char)arg4 toChannel:(int)arg5;
- (void)sendNoteOn:(int)arg1 toInstrumentID:(int)arg2 withVelocity:(unsigned char)arg3 mb3:(unsigned char)arg4;
- (void)sendCurrentTrackMidiEventWithByte0:(unsigned char)arg1 byte1:(unsigned char)arg2 byte2:(unsigned char)arg3 byte3:(unsigned char)arg4;
- (void)sendMidiEventWithByte0:(unsigned char)arg1 byte1:(unsigned char)arg2 byte2:(unsigned char)arg3 byte3:(unsigned char)arg4 toInstrumentID:(int)arg5;

@optional
- (void)sendNoteOff:(int)arg1 toInstrumentID:(int)arg2 withVelocity:(unsigned char)arg3 mb3:(unsigned char)arg4 toChannel:(int)arg5;
- (void)sendNoteOn:(int)arg1 toInstrumentID:(int)arg2 withVelocity:(unsigned char)arg3 mb3:(unsigned char)arg4 toChannel:(int)arg5 possibleChannels:(NSArray *)arg6 touch:(UITouch *)arg7;
- (unsigned long long)sequentialDampenedVelocityForInteraction:(MSKeyboardInteraction *)arg1;
@end
