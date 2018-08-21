//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AKAppleIDAuthenticationDelegate.h"
#import "CDPUIDelegate.h"

@class ACAccount, AKAppleIDAuthenticationPurpleBuddyContext, BuddyAppleIDSignInController, NSString, UINavigationController;

@interface BuddyAppleIDAuthManager : NSObject <AKAppleIDAuthenticationDelegate, CDPUIDelegate>
{
    CDUnknownBlockType _authShouldContinueBlock;
    AKAppleIDAuthenticationPurpleBuddyContext *_authContext;
    UINavigationController *_nav;
    BuddyAppleIDSignInController *_signInController;
    _Bool _shouldOfferSecurityUpgrade;
    _Bool _firstTimeLogin;
    _Bool _hasContinuationKey;
    ACAccount *_accountToUpgrade;
    long long _serviceType;
}

+ (id)_contextForPrimaryAccount;
+ (id)_authContextForContext:(id)arg1;
+ (id)_contextForPrimaryAccountSilentAuth;
+ (void)_authWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)silentAuthenticationForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)silentAuthenticationForPrimaryAccountWithCompletion:(CDUnknownBlockType)arg1;
+ (id)managerWithNavigationController:(id)arg1;
@property(nonatomic) _Bool hasContinuationKey; // @synthesize hasContinuationKey=_hasContinuationKey;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) ACAccount *accountToUpgrade; // @synthesize accountToUpgrade=_accountToUpgrade;
@property(nonatomic) _Bool firstTimeLogin; // @synthesize firstTimeLogin=_firstTimeLogin;
@property(nonatomic) _Bool shouldOfferSecurityUpgrade; // @synthesize shouldOfferSecurityUpgrade=_shouldOfferSecurityUpgrade;
- (void).cxx_destruct;
- (void)uiController:(id)arg1 didPresentRootViewController:(id)arg2;
- (_Bool)_doiCDPEnrollWithResults:(id)arg1 error:(id *)arg2;
- (void)runiCDPEnrollFlowWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (void)fetchAuthModeForUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authenticateWithSignInController:(id)arg1 username:(id)arg2 password:(id)arg3 shouldContinueHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)runCreateAppleIDWithShouldContinueHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runiForgotWithShouldContinueHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_authenticateWithSignInController:(id)arg1 shouldContinueHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)authContext;
@property(readonly, nonatomic) NSString *passwordForCreating;
@property(readonly, nonatomic) NSString *usernameForCreating;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
