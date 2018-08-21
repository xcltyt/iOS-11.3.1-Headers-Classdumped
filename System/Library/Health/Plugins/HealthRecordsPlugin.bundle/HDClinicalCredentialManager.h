/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDContentProtectionObserver.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class NSData, HDHealthRecordsPlugin, HDProfile, NSObject, NSString;

@interface HDClinicalCredentialManager : NSObject <HDContentProtectionObserver, HDHealthDaemonReadyObserver> {

	NSData* __cachedCredentialKey;
	HDHealthRecordsPlugin* _plugin;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _credentialKeyQueue;

}

@property (nonatomic,__weak,readonly) HDHealthRecordsPlugin * plugin;                                  //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (setter=_setCachedCredentialKey:,nonatomic,copy) NSData * _cachedCredentialKey; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> credentialKeyQueue;                        //@synthesize credentialKeyQueue=_credentialKeyQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlugin:(id)arg1 profile:(id)arg2 ;
-(id)_encryptToken:(id)arg1 error:(out id*)arg2 ;
-(id)_tokenDataFromToken:(id)arg1 error:(out id*)arg2 ;
-(id)_generateInitializationVectorWithError:(out id*)arg1 ;
-(id)_encryptTokenData:(id)arg1 initializationVector:(id)arg2 operation:(unsigned)arg3 error:(out id*)arg4 ;
-(id)_encryptedTokenDataWithInitializationVector:(id)arg1 payload:(id)arg2 ;
-(id)_decryptTokenData:(id)arg1 error:(out id*)arg2 ;
-(id)_initializationVectorFromEncryptedTokenData:(id)arg1 error:(out id*)arg2 ;
-(id)_payloadFromEncryptedTokenData:(id)arg1 error:(out id*)arg2 ;
-(id)_tokenFromTokenData:(id)arg1 error:(out id*)arg2 ;
-(id)_credentialKeyWithError:(out id*)arg1 ;
-(BOOL)_shouldProceedWithEncryptionAfterStatus:(int)arg1 error:(out id*)arg2 ;
-(BOOL)_assignCredentialManagerError:(out id*)arg1 code:(long long)arg2 format:(id)arg3 ;
-(BOOL)_encryptedTokenDataHasInitializationVector:(id)arg1 error:(out id*)arg2 ;
-(id)_tokenByStrippingPaddingFromToken:(id)arg1 ;
-(BOOL)_assignCredentialManagerError:(out id*)arg1 code:(long long)arg2 description:(id)arg3 ;
-(BOOL)_validateToken:(id)arg1 error:(out id*)arg2 ;
-(id)_credentialKeyFingerprintWithError:(out id*)arg1 ;
-(NSObject*<OS_dispatch_queue>)credentialKeyQueue;
-(id)_retrieveOrCreateCredentialKeyWithError:(out id*)arg1 ;
-(id)_retrieveCredentialKeyFromKeychainWithError:(out id*)arg1 ;
-(BOOL)_error:(id)arg1 isCredentialManagerErrorWithCode:(long long)arg2 ;
-(id)_generateCredentialKeyWithError:(out id*)arg1 ;
-(BOOL)_storeCredentialKeyInKeychain:(id)arg1 error:(out id*)arg2 ;
-(id)_credentialKeyBaseAttributes;
-(id)_credentialKeyQuery;
-(id)_attributesForCredentialKey:(id)arg1 ;
-(id)_generateRandomBytesOfLength:(long long)arg1 error:(out id*)arg2 ;
-(id)decryptTokenData:(id)arg1 error:(out id*)arg2 ;
-(id)encryptToken:(id)arg1 error:(out id*)arg2 ;
-(NSData *)_cachedCredentialKey;
-(id)credentialKeyFingerprintWithError:(out id*)arg1 ;
-(void)_setCachedCredentialKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(HDHealthRecordsPlugin *)plugin;
-(void)daemonReady:(id)arg1 ;
-(HDProfile *)profile;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
@end
