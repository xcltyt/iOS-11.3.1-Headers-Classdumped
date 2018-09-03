//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbSIIMStringsComperController.h"

@class CbPipaComperView, CbPipaInputViewController;

@interface CbPipaComperController : CbSIIMStringsComperController
{
    _Bool _canStrum;
}

@property(nonatomic) _Bool canStrum; // @synthesize canStrum=_canStrum;
- (void)startMute;
- (void)sendLunzhiVelocity:(int)arg1;
- (void)sendLunzhiSpeed:(int)arg1;
- (int)_strumVelocityFloor;
- (void)mutingEndStringsTouch:(id)arg1;
- (void)_loadStringsWithNotesFromChordInfo:(id)arg1;
- (int)lowestComperNoteValue;
- (unsigned long long)_presetChordInfoLikeChordInfo:(id)arg1;
- (void)_loadToGuitarStringsChordAtIndex:(unsigned long long)arg1;
- (void)selectChordAtIndex:(long long)arg1 altIndex:(unsigned long long)arg2 mightBeStop:(_Bool)arg3;
- (void)handleTouch:(id)arg1 forStringAtIndex:(long long)arg2 forTouchesMoved:(_Bool)arg3;
- (void)_updateInGrooveMode:(id)arg1;
- (void)handleGrooveChange:(id)arg1;
- (void)setNumStrings:(unsigned long long)arg1;

// Remaining properties
@property(retain, nonatomic) CbPipaComperView *comperView; // @dynamic comperView;
@property(nonatomic) CbPipaInputViewController *rigController; // @dynamic rigController;

@end
