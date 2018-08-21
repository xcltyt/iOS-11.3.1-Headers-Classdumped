//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"

@class NSDictionary, NSMutableData, NSString, NSURL, NSURLRequest, NSURLSession, NSURLSessionConfiguration;

@interface BuddyActivationEngine : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_session;
    NSMutableData *_activationData;
    _Bool _useCellular;
    _Bool _allowAnyHTTPSCertificate;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSURL *_overrideActivationURL;
    NSURL *_overrideSessionURL;
    CDUnknownBlockType _completion;
    NSDictionary *_responseHeaders;
    NSURLRequest *_activationRequest;
    NSString *_userAgent;
}

+ (id)cellularActivationEngineWithOverrideActivationURL:(id)arg1 sessionURL:(id)arg2;
+ (id)wifiActivationEngineWithOverrideActivationURL:(id)arg1 sessionURL:(id)arg2;
@property(retain) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSURLRequest *activationRequest; // @synthesize activationRequest=_activationRequest;
@property(copy, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSURL *overrideSessionURL; // @synthesize overrideSessionURL=_overrideSessionURL;
@property(copy, nonatomic) NSURL *overrideActivationURL; // @synthesize overrideActivationURL=_overrideActivationURL;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(nonatomic) _Bool allowAnyHTTPSCertificate; // @synthesize allowAnyHTTPSCertificate=_allowAnyHTTPSCertificate;
@property(nonatomic) _Bool useCellular; // @synthesize useCellular=_useCellular;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)makeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tryActivateWithOptions:(id)arg1 requestMutator:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendSessionRequest:(id)arg1 withOptions:(id)arg2;
- (id)_newActivationRequestWithOptions:(id)arg1 sessionData:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSURLSession *session;
- (void)_cleanup;
- (void)cancel;
- (id)initWithOverrideActivationURL:(id)arg1 sessionURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
