/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
@class NSObject, NSOperationQueue, NSMapTable, NSCache;

@interface DOCThumbnailCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	NSMapTable* _cachedThumbnailItems;
	NSMapTable* _cachedIconItems;
	NSCache* _cachedGenericItems;
	NSCache* _recentlyUsedItems;
	long long _thumnailFetchingPriority;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSMapTable * cachedThumbnailItems;               //@synthesize cachedThumbnailItems=_cachedThumbnailItems - In the implementation block
@property (nonatomic,readonly) NSMapTable * cachedIconItems;                    //@synthesize cachedIconItems=_cachedIconItems - In the implementation block
@property (nonatomic,readonly) NSCache * cachedGenericItems;                    //@synthesize cachedGenericItems=_cachedGenericItems - In the implementation block
@property (nonatomic,readonly) NSCache * recentlyUsedItems;                     //@synthesize recentlyUsedItems=_recentlyUsedItems - In the implementation block
@property (assign,nonatomic) long long thumnailFetchingPriority;                //@synthesize thumnailFetchingPriority=_thumnailFetchingPriority - In the implementation block
+(id)sharedCache;
+(void)clearCache;
+(id)thumbnailForItem:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(BOOL)arg5 ;
+(id)iconForContentType:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(BOOL)arg5 ;
+(id)thumbnailForItem:(id)arg1 size:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(BOOL)arg6 ;
+(void)increaseThumnailFetchingPriority;
+(void)decreaseThumnailFetchingPriority;
+(void)resetThumnailFetchingPriorityValue;
-(id)init;
-(NSOperationQueue *)operationQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)clearCache;
-(void)markThumbnailAsRecentlyUsed:(id)arg1 ;
-(id)thumbnailForItem:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(BOOL)arg5 ;
-(id)iconForContentType:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(BOOL)arg5 ;
-(id)thumbnailForItem:(id)arg1 size:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(BOOL)arg6 ;
-(void)increaseThumnailFetchingPriority;
-(void)decreaseThumnailFetchingPriority;
-(void)resetThumnailFetchingPriorityValue;
-(unsigned)currentQOS;
-(id)_thumbnailForItem:(id)arg1 size:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(BOOL)arg6 qos:(unsigned)arg7 ;
-(id)_iconForContentType:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(BOOL)arg5 qos:(unsigned)arg6 ;
-(NSCache *)recentlyUsedItems;
-(NSCache *)cachedGenericItems;
-(long long)thumnailFetchingPriority;
-(void)setThumnailFetchingPriority:(long long)arg1 ;
-(NSMapTable *)cachedThumbnailItems;
-(id)_thumbnailFallbackForItem:(id)arg1 size:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(BOOL)arg6 qos:(unsigned)arg7 currentThumbnail:(id)arg8 ;
-(NSMapTable *)cachedIconItems;
@end
