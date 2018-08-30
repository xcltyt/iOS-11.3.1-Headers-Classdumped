//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GChFilterParameter : NSObject
{
    long long rootEnhTypeToFilter;
    long long bassEnhTypeToFilter;
    long long rootNoteToFilter;
    long long bassNoteToFilter;
    long long chordTypeToFilter;
    long long difficultyToFilter;
    long long isFavoriteToFilter;
}

- (long long)isFavoriteToFilter;
- (long long)difficultyToFilter;
- (long long)chordTypeToFilter;
- (long long)bassNoteToFilter;
- (long long)rootNoteToFilter;
- (void)setIsFavoriteToFilter:(long long)arg1;
- (void)setDifficultyToFilter:(long long)arg1;
- (void)setChordTypeToFilter:(long long)arg1;
- (void)setBassNoteToFilter:(long long)arg1 enhType:(long long)arg2;
- (void)setRootNoteToFilter:(long long)arg1 enhType:(long long)arg2;
- (void)setNoRestrictions;
- (id)init;

@end

