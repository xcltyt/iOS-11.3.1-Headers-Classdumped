//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DKDiagnosticInputs.h"

@class NSArray, NSSet, NSString;

@interface AppCrashHistoryInputs : NSObject <DKDiagnosticInputs>
{
    int _minCrashesToConsider;
    int _avgCrashesToConsider;
    NSArray *_logIds;
    NSSet *_whitelist;
}

@property(retain, nonatomic) NSSet *whitelist; // @synthesize whitelist=_whitelist;
@property(retain, nonatomic) NSArray *logIds; // @synthesize logIds=_logIds;
@property(nonatomic) int avgCrashesToConsider; // @synthesize avgCrashesToConsider=_avgCrashesToConsider;
@property(nonatomic) int minCrashesToConsider; // @synthesize minCrashesToConsider=_minCrashesToConsider;
- (void).cxx_destruct;
- (_Bool)_applyWhitelistParameter:(id)arg1;
- (_Bool)_applyCrashTypesParameter:(id)arg1;
- (_Bool)validateAndInitializeParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

