/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject, _MRNowPlayingPlayerPathProtobuf, _MRContentItemProtobuf;

@interface MRPlaybackQueuePlayerClient : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _offsets;
	NSMutableSet* _requests;
	NSObject*<OS_dispatch_queue> _queue;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) _MRContentItemProtobuf * nowPlayingItem; 
-(void)readData:(id)arg1 ;
-(void)addRequest:(id)arg1 ;
-(void)invalidate;
-(id)description;
-(void)augmentCommandOptions:(id)arg1 forCommand:(unsigned)arg2 ;
-(id)requestForIdentifer:(id)arg1 ;
-(id)offsetForIdentifier:(id)arg1 ;
-(void)subscribeToPlaybackQueue:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)hasRequest:(id)arg1 ;
-(id)subscribedContentItems:(id)arg1 forRequest:(id)arg2 ;
-(id)subscribedContentItems:(id)arg1 ;
-(id)subscribedContentItemRequests:(id)arg1 ;
-(id)initWithPlayerPath:(id)arg1 queue:(id)arg2 ;
-(void)removeRequest:(id)arg1 ;
-(void)_onQueue_invalidate;
-(void)_onQueue_augmentCommandOptions:(id)arg1 forCommand:(unsigned)arg2 ;
-(id)_onQueue_writeData;
-(id)requestForContentItem:(id)arg1 ;
-(id)subscribedContentItemsIdentifiers:(id)arg1 forRequest:(id)arg2 ;
-(_MRContentItemProtobuf *)nowPlayingItem;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(id)contentItemForOffset:(long long)arg1 ;
@end

