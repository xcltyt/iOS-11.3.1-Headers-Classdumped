//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MAMetroSegmentsCreator, NSString;

@interface MAMetroSegment : NSObject
{
    MAMetroSegmentsCreator *creator;
    _Bool exportEnabled;
    _Bool exportPrologue;
    _Bool exportEpilogue;
    _Bool exportChords;
    int exportXFadePerc;
    int exportRepetitions;
    double gain;
    double verseStartTime;
    double verseEndTime;
    int verseStartBeat;
    int verseEndBeat;
    int verseStartBar;
    int verseEndBar;
    double verseStartSwing;
    double verseEndSwing;
    double verseStartTuning;
    double verseEndTuning;
    struct CSignKey verseStartKeySignature;
    struct CSignKey verseEndKeySignature;
    double prologueDuration;
    double epilogueDuration;
    NSString *name;
    NSString *arrangementName;
    int sectionTag;
    int indexInComposition;
    _Bool isBeatless;
    int verseStartSignatureDenominator;
    int verseStartSignatureNumerator;
    int verseEndSignatureDenominator;
    int verseEndSignatureNumerator;
    int verseNumSignatureChanges;
    int verseFirstBarBeat;
    int verseLastBarEndBeat;
    double verseFirstBarStartTime;
    double verseLastBarEndTime;
    double verseFirstBeatStartTime;
    double verseLastBeatEndTime;
    _Bool verseContainsIntegerNumberOfBars;
    _Bool verseContainsIntegerNumberOfBeats;
    double verseStartTempo;
    double verseEndTempo;
    double verseMinTempo;
    double verseMaxTempo;
    int verseNumberOfBeatsBeforeFirstDownBeat;
    double verseTimeBeforeFirstDownBeat;
    int verseNumberOfBeatsAfterLastDownBeat;
    double verseTimeAfterLastDownBeat;
    double verseDuration;
    int hasTempo;
    NSString *chordSequenceString;
    double RMSLevelDb;
    double peakLevelDb;
    id userContext1;
    int numRhythmicSegments;
    CDStruct_8a6d1c2f *rhythmicSegments;
    struct TAbsPureClock verseLastExportStartClock;
    struct TAbsPureClock verseLastExportEndClock;
    struct TAbsPureClock regionLastExportStartClock;
    struct TAbsPureClock regionLastExportEndClock;
    struct TAbsPureClock regionLastExportRelevantEndClock;
    double regionLastExportAudioContentStartTime;
    double regionLastExportAudioContentEndTime;
    _Bool _shouldFlex;
    _Bool _shouldLoop;
    int _flexType;
}

+ (struct TPureLength)beatClockLengthForNumberOfBars:(int)arg1 numerator:(int)arg2 denominator:(int)arg3;
+ (struct TPureLength)beatClockLengthForBeatDenominator:(int)arg1;
@property(nonatomic) _Bool shouldLoop; // @synthesize shouldLoop=_shouldLoop;
@property(nonatomic) int flexType; // @synthesize flexType=_flexType;
@property(nonatomic) _Bool shouldFlex; // @synthesize shouldFlex=_shouldFlex;
@property(nonatomic) double gain; // @synthesize gain;
@property(nonatomic) double peakLevelDb; // @synthesize peakLevelDb;
@property(nonatomic) double RMSLevelDb; // @synthesize RMSLevelDb;
@property(retain, nonatomic) MAMetroSegmentsCreator *creator; // @synthesize creator;
@property(retain, nonatomic) NSString *arrangementName; // @synthesize arrangementName;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(readonly, nonatomic) int hasTempo; // @synthesize hasTempo;
@property(readonly, nonatomic) int sectionTag; // @synthesize sectionTag;
@property(readonly, retain, nonatomic) NSString *chordSequenceString; // @synthesize chordSequenceString;
@property(readonly, nonatomic) double verseDuration; // @synthesize verseDuration;
@property(readonly, nonatomic) double verseTimeAfterLastDownBeat; // @synthesize verseTimeAfterLastDownBeat;
@property(readonly, nonatomic) int verseNumberOfBeatsAfterLastDownBeat; // @synthesize verseNumberOfBeatsAfterLastDownBeat;
@property(readonly, nonatomic) double verseTimeBeforeFirstDownBeat; // @synthesize verseTimeBeforeFirstDownBeat;
@property(readonly, nonatomic) int verseNumberOfBeatsBeforeFirstDownBeat; // @synthesize verseNumberOfBeatsBeforeFirstDownBeat;
@property(readonly, nonatomic) double verseEndTempo; // @synthesize verseEndTempo;
@property(readonly, nonatomic) double verseStartTempo; // @synthesize verseStartTempo;
@property(readonly, nonatomic) _Bool verseContainsIntegerNumberOfBeats; // @synthesize verseContainsIntegerNumberOfBeats;
@property(readonly, nonatomic) _Bool verseContainsIntegerNumberOfBars; // @synthesize verseContainsIntegerNumberOfBars;
@property(readonly, nonatomic) struct CSignKey verseEndKeySignature; // @synthesize verseEndKeySignature;
@property(readonly, nonatomic) struct CSignKey verseStartKeySignature; // @synthesize verseStartKeySignature;
@property(readonly, nonatomic) double verseEndTuning; // @synthesize verseEndTuning;
@property(readonly, nonatomic) double verseStartTuning; // @synthesize verseStartTuning;
@property(readonly, nonatomic) double verseEndSwing; // @synthesize verseEndSwing;
@property(readonly, nonatomic) double verseStartSwing; // @synthesize verseStartSwing;
@property(readonly, nonatomic) int verseNumSignatureChanges; // @synthesize verseNumSignatureChanges;
@property(readonly, nonatomic) int verseEndSignatureNumerator; // @synthesize verseEndSignatureNumerator;
@property(readonly, nonatomic) int verseEndSignatureDenominator; // @synthesize verseEndSignatureDenominator;
@property(readonly, nonatomic) int verseStartSignatureNumerator; // @synthesize verseStartSignatureNumerator;
@property(readonly, nonatomic) int verseStartSignatureDenominator; // @synthesize verseStartSignatureDenominator;
@property(readonly, nonatomic) int verseLastBarEndBeat; // @synthesize verseLastBarEndBeat;
@property(readonly, nonatomic) int verseFirstBarBeat; // @synthesize verseFirstBarBeat;
@property(readonly, nonatomic) double verseLastBeatEndTime; // @synthesize verseLastBeatEndTime;
@property(readonly, nonatomic) double verseFirstBeatStartTime; // @synthesize verseFirstBeatStartTime;
@property(readonly, nonatomic) double verseLastBarEndTime; // @synthesize verseLastBarEndTime;
@property(readonly, nonatomic) double verseFirstBarStartTime; // @synthesize verseFirstBarStartTime;
@property(nonatomic) double epilogueDuration; // @synthesize epilogueDuration;
@property(nonatomic) double prologueDuration; // @synthesize prologueDuration;
@property(readonly, nonatomic) double verseEndTime; // @synthesize verseEndTime;
@property(readonly, nonatomic) double verseStartTime; // @synthesize verseStartTime;
@property(readonly, nonatomic) int verseEndBeat; // @synthesize verseEndBeat;
@property(readonly, nonatomic) int verseStartBeat; // @synthesize verseStartBeat;
@property(readonly, nonatomic) int verseEndBar; // @synthesize verseEndBar;
@property(readonly, nonatomic) int verseStartBar; // @synthesize verseStartBar;
@property(nonatomic) int exportRepetitions; // @synthesize exportRepetitions;
@property(nonatomic) int exportXFadePerc; // @synthesize exportXFadePerc;
@property(nonatomic) _Bool exportChords; // @synthesize exportChords;
@property(nonatomic) _Bool exportEpilogue; // @synthesize exportEpilogue;
@property(nonatomic) _Bool exportPrologue; // @synthesize exportPrologue;
@property(nonatomic) struct TAbsPureClock regionLastExportRelevantEndClock; // @synthesize regionLastExportRelevantEndClock;
@property(nonatomic) struct TAbsPureClock verseLastExportEndClock; // @synthesize verseLastExportEndClock;
@property(nonatomic) struct TAbsPureClock verseLastExportStartClock; // @synthesize verseLastExportStartClock;
@property(nonatomic) struct TAbsPureClock regionLastExportEndClock; // @synthesize regionLastExportEndClock;
@property(nonatomic) struct TAbsPureClock regionLastExportStartClock; // @synthesize regionLastExportStartClock;
@property(nonatomic) _Bool exportEnabled; // @synthesize exportEnabled;
@property(nonatomic) __weak id userContext1; // @synthesize userContext1;
@property(readonly, nonatomic) _Bool isBeatless; // @synthesize isBeatless;
@property(nonatomic) int indexInComposition; // @synthesize indexInComposition;
@property(nonatomic) int numRhythmicSegments; // @synthesize numRhythmicSegments;
@property(nonatomic) CDStruct_8a6d1c2f *rhythmicSegments; // @synthesize rhythmicSegments;
@property(readonly, nonatomic) double verseMaxTempo; // @synthesize verseMaxTempo;
@property(readonly, nonatomic) double verseMinTempo; // @synthesize verseMinTempo;
@property(nonatomic) double regionLastExportAudioContentEndTime; // @synthesize regionLastExportAudioContentEndTime;
@property(nonatomic) double regionLastExportAudioContentStartTime; // @synthesize regionLastExportAudioContentStartTime;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateRhythmicContentSegmentsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long regionLastExportRelevantEndLgClock;
@property(readonly, nonatomic) long long regionLastExportEndLgClock;
@property(readonly, nonatomic) long long regionLastExportStartLgClock;
@property(readonly, nonatomic) long long verseLastExportEndLgClock;
@property(readonly, nonatomic) long long verseLastExportStartLgClock;
- (id)result;
- (id)audioFileURL;
- (id)copy;
- (_Bool)isVerseContentContinuationOf:(id)arg1;
- (_Bool)hasEpilogue;
- (_Bool)hasPrologue;
- (id)chordProgressionStringOverBars;
- (void)updateStatsAndDerivedData;
- (void)setBeatStartIndex:(int)arg1 endIndex:(int)arg2 alsoUpdateOtherVerseFields:(int)arg3;
- (int)addEpilogueIfAvailable;
- (int)addPrologueIfAvailable;
- (void)dealloc;
- (id)initWithCreator:(id)arg1 fromBeatIndex:(int)arg2 toBeatIndex:(int)arg3 addEpilogue:(int)arg4 addPrologue:(int)arg5;
- (struct TPureLength)verseClockLength;
- (int)verseLengthBar;

@end

