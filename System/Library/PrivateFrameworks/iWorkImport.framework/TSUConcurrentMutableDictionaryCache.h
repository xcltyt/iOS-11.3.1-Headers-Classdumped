/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, TSUReadWriteQueue, NSString;

@interface TSUConcurrentMutableDictionaryCache : NSObject {

	NSMutableDictionary* _cache;
	TSUReadWriteQueue* _readWriteQueue;
	NSString* _name;
	unsigned long long _count;

}

@property (nonatomic,readonly) TSUReadWriteQueue * readWriteQueue;              //@synthesize readWriteQueue=_readWriteQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                        //@synthesize count=_count - In the implementation block
-(void)p_didEnterBackground:(id)arg1 ;
-(void)performSyncWriteWithUnderlyingDictionary:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)description;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)p_didReceiveMemoryWarning:(id)arg1 ;
-(TSUReadWriteQueue *)readWriteQueue;
-(void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2 ;
@end
