//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABPeerResourceHost, DBLocalEndpoint, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface ABPeerResourceManager : NSObject
{
    NSMutableDictionary *_resourceExistsCache;
    NSMutableArray *_queue;
    NSMutableSet *_pausedPeers;
    _Bool _serializeRequests;
    DBLocalEndpoint *_localEndpoint;
    ABPeerResourceHost *_resourceHost;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_loaders;
}

@property(retain, nonatomic) NSMutableDictionary *loaders; // @synthesize loaders=_loaders;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(nonatomic) _Bool serializeRequests; // @synthesize serializeRequests=_serializeRequests;
@property(retain, nonatomic) ABPeerResourceHost *resourceHost; // @synthesize resourceHost=_resourceHost;
@property(retain, nonatomic) DBLocalEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
- (void).cxx_destruct;
- (void)postNotification:(id)arg1 resource:(unsigned int)arg2 peer:(id)arg3;
- (void)executeCompletionBlocksForPeer:(id)arg1 resourceID:(unsigned int)arg2 image:(id)arg3 error:(id)arg4;
- (id)completionBlocksForPeer:(id)arg1 resourceID:(unsigned int)arg2;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 forPeer:(id)arg2 forResourceID:(unsigned int)arg3;
- (id)nextNonPausedItemInQueue;
- (void)removeQueueItemForPeer:(id)arg1 resourceID:(unsigned int)arg2;
- (id)createOrFindQueueEntryForPeer:(id)arg1 resourceID:(unsigned int)arg2;
- (void)addRequestToQueueforResourceWithID:(unsigned int)arg1 fromPeer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 retryCount:(int)arg4;
- (_Bool)isResourcExisting:(unsigned int)arg1 forPeer:(id)arg2;
- (void)rememberIfResourceExists:(unsigned int)arg1 forPeer:(id)arg2 exists:(_Bool)arg3;
- (float)loadingProgressOfImageResourceWithID:(unsigned int)arg1 forPeer:(id)arg2;
- (id)pathForResourceWithID:(unsigned int)arg1 forPeer:(id)arg2;
- (id)cachePath;
- (void)executeStartLoadOfResourceWithID:(unsigned int)arg1 fromPeer:(id)arg2 retryCount:(int)arg3;
- (void)processNextItemInQueue;
- (void)startLoadOfResourceWithID:(unsigned int)arg1 fromPeer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 retryCount:(int)arg4;
- (id)loaderForPeer:(id)arg1 andResourceID:(long long)arg2;
- (id)loaderKeyForPeer:(id)arg1 andResourceID:(long long)arg2;
- (void)pause:(_Bool)arg1 loadingResourceForPeer:(id)arg2;
- (void)startLoadOfResourceWithID:(unsigned int)arg1 fromPeer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)appIconOfPeerNeedsToBeUpdated:(id)arg1;
- (id)appIconImageResourceForPeer:(id)arg1;
- (id)imageResourceWithID:(unsigned int)arg1 forPeer:(id)arg2;
- (void)memoryWarning:(id)arg1;
- (void)dealloc;
- (void)cancelAll;
- (id)initWithLocalEndpoint:(id)arg1;

@end
