//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CGenGFModule.h"

@class CGenGFPortIndexed, CGenGFPortNumeric, CGenGFPortPatternAndProbs, NSMutableArray;

@interface CGenGFModuleValueSwitch : CGenGFModule
{
    CGenGFPortPatternAndProbs *inputPatterns;
    CGenGFPortNumeric *inputValue;
    CGenGFPortIndexed *outputActiveIndex;
    CGenGFPortNumeric *outputNormalizedValue;
    CGenGFPortPatternAndProbs *outputDefault;
    NSMutableArray *_outPorts;
    vector_26e016ee _ranges;
}

+ (_Bool)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)execute:(id)arg1 arguments:(id)arg2;
- (void)cleanup:(id)arg1;
- (void)disable:(id)arg1;
- (void)enable:(id)arg1;
- (_Bool)setup:(id)arg1;
- (unsigned long long)indexOfRangeForValue:(double)arg1;
- (void)setOutputCount:(unsigned long long)arg1;
- (unsigned long long)outputCount;
- (vector_26e016ee *)ranges;
- (_Bool)setState:(id)arg1;
- (id)state;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
