/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface KPersistentMovieInfo : NSObject
+(void)noteApplicationDidReceiveMemoryWarning;
+(void)nukeCaches;
+(void)ensureCacheDirectoryExists;
+(id)cachedCreationDateForURL:(id)arg1 ;
+(void)addURL:(id)arg1 withDate:(id)arg2 ;
+(id)infoCachePath;
+(void)reallySaveDict:(id)arg1 ;
+(void)createOrLoadPersistentDict;
+(void)savePersistentDict;
+(long long)cacheCount;
@end
