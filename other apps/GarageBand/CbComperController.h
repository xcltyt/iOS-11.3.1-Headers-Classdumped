//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CbCustomChordsProtocol-Protocol.h"
#import "CbPatternStatusDisplayer-Protocol.h"

@class CbPatternController, GChSimpleDatabase, NSArray, NSMutableArray, NSString, UIView;
@protocol CbComperRigControllerProtocol, CbComperViewProtocol;

@interface CbComperController : NSObject <CbCustomChordsProtocol, CbPatternStatusDisplayer>
{
    id <CbComperRigControllerProtocol> _rigController;
    UIView<CbComperViewProtocol> *_comperView;
    CbPatternController *_patternController;
    GChSimpleDatabase *_chordDatabase;
    NSArray *_chords;
    NSMutableArray *_chordInfos;
    NSMutableArray *_diatonicChordInfos;
    unsigned long long _currentPlayingChordIndex;
    unsigned long long _currentSelectedChordIndex;
    _Bool _inGrooveMode;
    _Bool _editingChords;
}

@property _Bool inGrooveMode; // @synthesize inGrooveMode=_inGrooveMode;
@property(nonatomic) unsigned long long currentPlayingChordIndex; // @synthesize currentPlayingChordIndex=_currentPlayingChordIndex;
@property(nonatomic) unsigned long long currentSelectedChordIndex; // @synthesize currentSelectedChordIndex=_currentSelectedChordIndex;
@property(copy, nonatomic) NSMutableArray *chordInfos; // @synthesize chordInfos=_chordInfos;
@property(readonly) NSArray *chords; // @synthesize chords=_chords;
@property(retain, nonatomic) UIView<CbComperViewProtocol> *comperView; // @synthesize comperView=_comperView;
@property(nonatomic) __weak id <CbComperRigControllerProtocol> rigController; // @synthesize rigController=_rigController;
- (void).cxx_destruct;
- (void)switchPatternControllerToTrack:(id)arg1;
- (void)patternDidStop:(id)arg1;
- (void)patternStarted:(id)arg1;
- (void)exitEditChordsMode;
- (void)enterEditChordsMode;
- (void)resetCurrentChord;
- (_Bool)updateSelectedChordToChordInfo:(id)arg1;
- (id)currentChordInfo;
- (void)updateForCstChange;
- (void)handleGrooveChange:(id)arg1;
- (void)handleKeyChange;
- (_Bool)loadChordLibraryForGrooveCategoryName:(id)arg1 grooveSetName:(id)arg2 keyString:(id)arg3 numberOfChords:(unsigned long long)arg4;
- (id)factoryChordInfoForChord:(id)arg1 keyString:(id)arg2 andChordIndex:(int)arg3;
- (id)chineseInstrumentFactoryChordInfoForKeyString:(id)arg1 andChordIndex:(int)arg2;
- (id)chordsUsingChordDataBase:(id)arg1 nrOfChordsToCreate:(unsigned long long)arg2 keyString:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)touchInstrumentIMKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

