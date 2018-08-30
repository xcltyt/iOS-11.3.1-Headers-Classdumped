//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "NXOAuth2TrustDelegate-Protocol.h"

@class NSData, NSError, NSURL, NSURLResponse, NXOAuth2Connection;

@protocol NXOAuth2ConnectionDelegate <NSObject, NXOAuth2TrustDelegate>

@optional
- (void)oauthConnection:(NXOAuth2Connection *)arg1 didReceiveRedirectToURL:(NSURL *)arg2;
- (void)oauthConnection:(NXOAuth2Connection *)arg1 didSendBytes:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3;
- (void)oauthConnection:(NXOAuth2Connection *)arg1 didReceiveData:(NSData *)arg2;
- (void)oauthConnection:(NXOAuth2Connection *)arg1 didFailWithError:(NSError *)arg2;
- (void)oauthConnection:(NXOAuth2Connection *)arg1 didFinishWithData:(NSData *)arg2;
- (void)oauthConnection:(NXOAuth2Connection *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
@end

