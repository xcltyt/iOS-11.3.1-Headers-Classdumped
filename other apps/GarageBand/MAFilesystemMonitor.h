//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MAFilesystemMonitor : NSObject
{
    int _fd;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSURL *_url;
    CDUnknownBlockType _modificationHandler;
}

@property(copy) CDUnknownBlockType modificationHandler; // @synthesize modificationHandler=_modificationHandler;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)cancelMonitoring;
- (void)monitorFileAtURL:(id)arg1 modificationHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

