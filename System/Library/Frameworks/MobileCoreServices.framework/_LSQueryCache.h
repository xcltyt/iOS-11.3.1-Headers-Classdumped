/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface _LSQueryCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _cache;
	NSMutableSet* _uniqueObjects;
	int _databaseChangeToken;
	NSObject*<OS_dispatch_source> _memPressureSource;

}
+(id)sharedCache;
-(id)cachedQueryResultsForQueries:(id)arg1 ;
-(id)cacheAndUniquifyQueryResults:(id)arg1 ;
-(id)uniquifiedObjectNotDispatched:(id)arg1 localObjects:(id)arg2 ;
-(void)cacheLocalObjects:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)clearCache;
@end
