//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRInstanceIDAuthService, NSMutableDictionary;

@interface FIRInstanceIDRegistrar : NSObject
{
    FIRInstanceIDAuthService *_authService;
    NSMutableDictionary *_registrationClientsByKeyMap;
}

@property(retain, nonatomic) NSMutableDictionary *registrationClientsByKeyMap; // @synthesize registrationClientsByKeyMap=_registrationClientsByKeyMap;
@property(retain, nonatomic) FIRInstanceIDAuthService *authService; // @synthesize authService=_authService;
- (void).cxx_destruct;
- (void)addNewRegistrationClient:(id)arg1;
- (id)registrationClientForAuthorizedEntity:(id)arg1 scope:(id)arg2;
- (id)createRegistrationClientWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 options:(id)arg4;
- (void)fetchNewTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 options:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)willDeleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)deleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)fetchTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 options:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)stopAllRequests;
- (id)initWithAuthService:(id)arg1;

@end
