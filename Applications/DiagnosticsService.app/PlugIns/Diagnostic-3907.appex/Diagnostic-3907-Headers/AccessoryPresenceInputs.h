//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DKDiagnosticInputs.h"

@class NSArray, NSString;

@interface AccessoryPresenceInputs : NSObject <DKDiagnosticInputs>
{
    NSArray *_modelNumbers;
    unsigned long long _timeout;
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSArray *modelNumbers; // @synthesize modelNumbers=_modelNumbers;
- (void).cxx_destruct;
- (_Bool)validateAndInitializeParameters:(id)arg1;
- (_Bool)validateAndInitializePredicates:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
