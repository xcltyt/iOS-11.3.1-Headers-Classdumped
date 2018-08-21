//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADWebViewURLProxyProtocol.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSArray, NSString, NSThread, NSURLSessionDataTask;

@interface ADSWebViewURLProxyProtocol : ADWebViewURLProxyProtocol <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSThread *_clientThread;
    NSArray *_modes;
    double _startTime;
    NSURLSessionDataTask *_task;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)unregister;
+ (void)registerProtocol;
+ (void)initialize;
@property(retain) NSURLSessionDataTask *task; // @synthesize task=_task;
@property double startTime; // @synthesize startTime=_startTime;
@property(copy) NSArray *modes; // @synthesize modes=_modes;
@property(retain) NSThread *clientThread; // @synthesize clientThread=_clientThread;
- (void)startLoading;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
