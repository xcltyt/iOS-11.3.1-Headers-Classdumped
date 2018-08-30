//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GChTuningDescr : NSObject
{
    BOOL capodasterOffset;
    unsigned char numberOfStrings;
    unsigned char openStringPitch[16];
}

- (id)description;
- (id)propertyList;
- (void)setOpenStringPitch:(long long)arg1 forStringIndex:(long long)arg2;
- (long long)openStringPitchForStringIndex:(long long)arg1;
- (void)setNumberOfStrings:(unsigned char)arg1;
- (unsigned char)numberOfStrings;
- (void)setCapodasterOffset:(BOOL)arg1;
- (BOOL)capodasterOffset;
- (_Bool)isEqualToTuningDescr:(id)arg1;
- (_Bool)isEqualToTuningStrings:(id)arg1;
- (void)setToTuningDescr:(id)arg1;
- (_Bool)isValid;
- (void)clearDataFields;
- (void)dealloc;
- (id)init;

@end

