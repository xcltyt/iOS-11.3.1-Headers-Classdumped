//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRInstanceIDBackupExcludedPlist, FIRInstanceIDKeyPair;

@interface FIRInstanceIDKeyPairStore : NSObject
{
    int _keychainEntitlementsErrorCount;
    FIRInstanceIDBackupExcludedPlist *_plist;
    FIRInstanceIDKeyPair *_keyPair;
}

+ (id)keyStoreFileName;
+ (id)appIDKeyWithSubtype:(id)arg1;
+ (id)creationTimeKeyWithSubtype:(id)arg1;
+ (id)privateTagWithSubtype:(id)arg1;
+ (id)publicTagWithSubtype:(id)arg1;
@property(nonatomic) int keychainEntitlementsErrorCount; // @synthesize keychainEntitlementsErrorCount=_keychainEntitlementsErrorCount;
@property(retain, nonatomic) FIRInstanceIDKeyPair *keyPair; // @synthesize keyPair=_keyPair;
@property(retain, nonatomic) FIRInstanceIDBackupExcludedPlist *plist; // @synthesize plist=_plist;
- (void).cxx_destruct;
- (_Bool)removeKeyPairCreationTimePlistWithError:(id *)arg1;
- (_Bool)deleteSavedKeyPairWithSubtype:(id)arg1 error:(id *)arg2;
- (id)cachedKeyPairWithSubtype:(id)arg1 error:(id *)arg2;
- (id)validCachedKeyPairWithSubtype:(id)arg1 error:(id *)arg2;
- (id)generateAndSaveKeyWithSubtype:(id)arg1 creationTime:(long long)arg2 error:(id *)arg3;
- (id)loadKeyPairWithError:(id *)arg1;
- (id)appIdentityWithError:(id *)arg1;
- (_Bool)hasCachedKeyPairs;
- (id)init;

@end
