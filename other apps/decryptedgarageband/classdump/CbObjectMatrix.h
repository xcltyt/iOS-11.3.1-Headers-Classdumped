//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSPointerArray;
@protocol OS_dispatch_queue;

@interface CbObjectMatrix : NSObject
{
    _Bool _cacheFilterResults;
    _Bool _concurrent;
    _Bool _altConcurrent;
    _Bool _alt2ndConcurrent;
    _Bool _dictRepNeedsUpdate;
    long long _queuePriority;
    NSMapTable *_valueStore;
    NSDictionary *_dictionaryRepresentation;
    NSMutableDictionary *_filterCache;
    NSArray *_cachedKeys;
    NSArray *_cachedObjects;
    long long _maxColumnCount;
    long long _maxRowCount;
    NSObject<OS_dispatch_queue> *_workConcurrentQueue;
    NSObject<OS_dispatch_queue> *_altSerialQueue;
    NSPointerArray *_keysPointerArray;
    NSPointerArray *_objectsPointerArray;
}

@property(retain, nonatomic) NSPointerArray *objectsPointerArray; // @synthesize objectsPointerArray=_objectsPointerArray;
@property(retain, nonatomic) NSPointerArray *keysPointerArray; // @synthesize keysPointerArray=_keysPointerArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *altSerialQueue; // @synthesize altSerialQueue=_altSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workConcurrentQueue; // @synthesize workConcurrentQueue=_workConcurrentQueue;
@property(nonatomic) long long maxRowCount; // @synthesize maxRowCount=_maxRowCount;
@property(nonatomic) long long maxColumnCount; // @synthesize maxColumnCount=_maxColumnCount;
@property(nonatomic) _Bool dictRepNeedsUpdate; // @synthesize dictRepNeedsUpdate=_dictRepNeedsUpdate;
@property(retain, nonatomic) NSArray *cachedObjects; // @synthesize cachedObjects=_cachedObjects;
@property(retain, nonatomic) NSArray *cachedKeys; // @synthesize cachedKeys=_cachedKeys;
@property(retain, nonatomic) NSMutableDictionary *filterCache; // @synthesize filterCache=_filterCache;
@property(retain, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(retain, nonatomic) NSMapTable *valueStore; // @synthesize valueStore=_valueStore;
@property(nonatomic) long long queuePriority; // @synthesize queuePriority=_queuePriority;
@property(nonatomic) _Bool alt2ndConcurrent; // @synthesize alt2ndConcurrent=_alt2ndConcurrent;
@property(nonatomic) _Bool altConcurrent; // @synthesize altConcurrent=_altConcurrent;
@property(nonatomic) _Bool concurrent; // @synthesize concurrent=_concurrent;
@property(nonatomic) _Bool cacheFilterResults; // @synthesize cacheFilterResults=_cacheFilterResults;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long count;
- (id)arrayAtColumn:(long long)arg1;
- (id)arrayAtColumn:(long long)arg1 withObjectsMatchingFilter:(CDUnknownBlockType)arg2;
- (id)arrayAtColumn:(long long)arg1 withObjectsMatchingFilter:(CDUnknownBlockType)arg2 objFilterCacheKey:(id)arg3;
- (id)arrayExcludingRow:(long long)arg1;
- (id)arrayAtRow:(long long)arg1;
- (id)arrayAtRow:(long long)arg1 withObjectsMatchingFilter:(CDUnknownBlockType)arg2;
- (id)arrayAtRow:(long long)arg1 withObjectsMatchingFilter:(CDUnknownBlockType)arg2 objFilterCacheKey:(id)arg3;
- (id)arrayWithKeysMatchingFilter:(CDUnknownBlockType)arg1 andObjectsMatchingFilter:(CDUnknownBlockType)arg2;
- (id)arrayWithKeysMatchingFilter:(CDUnknownBlockType)arg1 keyFilterCacheKey:(id)arg2 andObjectsMatchingFilter:(CDUnknownBlockType)arg3 objFilterCacheKey:(id)arg4;
- (id)_filterCacheKeyForColumn:(long long)arg1;
- (id)_filterCacheKeyForRow:(long long)arg1;
- (id)arrayWithKeysMatchingFilter:(CDUnknownBlockType)arg1;
- (id)arrayWithObjectsMatchingFilter:(CDUnknownBlockType)arg1;
- (void)enumerateColumnsAndRows:(CDUnknownBlockType)arg1;
- (void)enumerateMatrix:(CDUnknownBlockType)arg1;
- (id)allObjects;
- (id)allKeys;
- (void)removeAllObjects;
- (void)resetMaxRowColumnCount;
- (void)clearAllCaches;
- (void)removeObject:(id)arg1;
- (void)setObject:(id)arg1 atColumn:(long long)arg2 row:(long long)arg3;
- (id)objectAtColumn:(long long)arg1 row:(long long)arg2;
- (id)init;

@end
