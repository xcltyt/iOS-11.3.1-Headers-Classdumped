//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMServerInteractionController.h"

#import "FMAPSDelegate.h"

@class FMAPSHandler, FMOwnerAccount, NSArray, NSDictionary;

@interface ServerInteractionController : FMServerInteractionController <FMAPSDelegate>
{
    _Bool _isTransient;
    FMOwnerAccount *_ownerAccount;
    id _token;
    NSDictionary *_pendingUpdate;
    NSArray *_playsoundCommands;
    FMAPSHandler *_apsHandler;
}

@property(retain, nonatomic) FMAPSHandler *apsHandler; // @synthesize apsHandler=_apsHandler;
@property(retain, nonatomic) NSArray *playsoundCommands; // @synthesize playsoundCommands=_playsoundCommands;
@property(copy, nonatomic) NSDictionary *pendingUpdate; // @synthesize pendingUpdate=_pendingUpdate;
@property(retain, nonatomic) id token; // @synthesize token=_token;
@property(nonatomic) _Bool isTransient; // @synthesize isTransient=_isTransient;
@property(retain, nonatomic) FMOwnerAccount *ownerAccount; // @synthesize ownerAccount=_ownerAccount;
- (void).cxx_destruct;
- (void)processCommandResponse:(id)arg1;
- (void)sendCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didReceiveAPSToken:(id)arg1;
- (void)didReceiveAPSMessage:(id)arg1;
- (void)cancelAllCommands;
- (void)cancelAllPlaySoundCommandForDevice:(id)arg1;
- (void)cancelEraseDevice:(id)arg1 withOneTimeToken:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)eraseDevice:(id)arg1 withPasscode:(id)arg2 phoneNumber:(id)arg3 message:(id)arg4 withOneTimeToken:(id)arg5 recoverySessionId:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)verifyTrustedStatusOfDevice:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)lostDeviceWithDevice:(id)arg1 PIN:(id)arg2 phoneNumber:(id)arg3 message:(id)arg4 sound:(_Bool)arg5 lostMode:(_Bool)arg6 track:(_Bool)arg7 emailUpdates:(_Bool)arg8 withOneTimeToken:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)lockAndMessageDevice:(id)arg1 withPIN:(id)arg2 message:(id)arg3 sound:(_Bool)arg4 withOneTimeToken:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)playSoundOnDevice:(id)arg1 channels:(id)arg2 safetyWarningConfirmed:(_Bool)arg3 reason:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)rawPlaySoundOnDevice:(id)arg1 channels:(id)arg2 safetyWarningConfirmed:(_Bool)arg3 reason:(id)arg4 timeout:(double)arg5 withCompletionBlock:(CDUnknownBlockType)arg6;
- (void)changeLocationFoundPreferences:(_Bool)arg1 forDevice:(id)arg2;
- (void)removeDevice:(id)arg1 withOneTimeToken:(id)arg2;
- (void)validateFamilyMemberPassword:(id)arg1 forDevice:(id)arg2 validationContext:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)validatePassword:(id)arg1 forDevice:(id)arg2 validationContext:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getURLInfoForURL:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)refreshDevice:(id)arg1 allDevices:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loginWithUsername:(id)arg1 password:(id)arg2 personID:(id)arg3 authToken:(id)arg4;
- (void)fakeServerInteractionWithStatusCode:(unsigned long long)arg1 responseHeaders:(id)arg2 body:(id)arg3;
- (void)networkActivityStatus:(_Bool)arg1;
- (void)stopObservingSession;
- (id)sessionConfiguration;
- (id)initTransient;
- (id)init;

@end
