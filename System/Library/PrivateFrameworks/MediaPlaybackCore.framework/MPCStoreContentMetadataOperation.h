/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPCStoreContentMetadataResponse, NSDictionary, NSArray;

@interface MPCStoreContentMetadataOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MPCStoreContentMetadataResponse* _response;
	NSDictionary* _storeBagDictionary;
	NSArray* _storeIDs;

}

@property (copy) NSDictionary * storeBagDictionary; 
@property (copy) NSArray * storeIDs; 
@property (readonly) MPCStoreContentMetadataResponse * response; 
-(id)init;
-(MPCStoreContentMetadataResponse *)response;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(NSArray *)storeIDs;
-(NSDictionary *)storeBagDictionary;
-(void)setStoreBagDictionary:(NSDictionary *)arg1 ;
-(void)execute;
@end
