//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DKDiagnosticInputs.h"

@class NSSet, NSString;

@interface UncleanShutdownHistoryInputs : NSObject <DKDiagnosticInputs>
{
    NSSet *_logTypesIds;
    NSSet *_processNames;
}

@property(retain, nonatomic) NSSet *processNames; // @synthesize processNames=_processNames;
@property(retain, nonatomic) NSSet *logTypesIds; // @synthesize logTypesIds=_logTypesIds;
- (void).cxx_destruct;
- (id)_generateSanitizedStringSetFromArray:(id)arg1 boundedByStringSet:(id)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
- (id)_processNamesWhitelist;
- (id)_logTypesWhitelist;
- (_Bool)validateAndInitializeParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
