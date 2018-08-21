//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURLCache, NSURLSession;

@interface ResourceLoader : NSObject <NSURLSessionDelegate>
{
    NSOperationQueue *_queue;
    NSURLSession *_session;
    NSURLCache *_urlCache;
    NSObject<OS_dispatch_queue> *_dateFormatterQueue;
}

+ (id)_rfc1123DateFormatter;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dateFormatterQueue; // @synthesize dateFormatterQueue=_dateFormatterQueue;
@property(retain, nonatomic) NSURLCache *urlCache; // @synthesize urlCache=_urlCache;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (double)_simulatedLatency;
- (void)flushCache;
- (void)asynchronousDataFromURL:(id)arg1 timeout:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)asynchronousDataFromURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)refreshCacheForRequest:(id)arg1 usingCachedResponse:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

