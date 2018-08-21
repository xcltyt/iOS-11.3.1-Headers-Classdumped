//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKAudioController, CKMediaObject;

@protocol CKAudioControllerDelegate <NSObject>

@optional
- (void)audioController:(CKAudioController *)arg1 didPrepareMediaObjectToPlay:(CKMediaObject *)arg2 successfully:(_Bool)arg3;
- (void)audioControllerPlayingDidChange:(CKAudioController *)arg1;
- (void)audioControllerDidStop:(CKAudioController *)arg1;
- (void)audioControllerDidPause:(CKAudioController *)arg1;
- (void)audioController:(CKAudioController *)arg1 mediaObjectProgressDidChange:(CKMediaObject *)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioController:(CKAudioController *)arg1 mediaObjectDidFinishPlaying:(CKMediaObject *)arg2;
@end

