//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CGenGFModule.h"

@class CGenGFComplexityMatrix, CGenGFPortNumeric, CGenGFPortString;

@interface CGenGFModuleAddOnComplexityRatingTable : CGenGFModule
{
    CGenGFPortString *inputFamilyName;
    CGenGFPortString *inputAddOnName;
    CGenGFPortNumeric *outputValue;
    CGenGFComplexityMatrix *complexityMatrix;
    _Bool _useStandardRatingTables;
}

+ (_Bool)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (id)serializedStateKeysWithIdentifier:(id)arg1;
+ (id)stateKeysWithIdentifier:(id)arg1;
@property(nonatomic) _Bool useStandardRatingTables; // @synthesize useStandardRatingTables=_useStandardRatingTables;
@property(readonly, nonatomic) CGenGFComplexityMatrix *complexityMatrix; // @synthesize complexityMatrix;
- (void).cxx_destruct;
- (_Bool)execute:(id)arg1 arguments:(id)arg2;
- (_Bool)setState:(id)arg1;
- (id)state;
- (void)cleanup:(id)arg1;
- (_Bool)setup:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
