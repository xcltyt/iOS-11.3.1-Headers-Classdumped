/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class MFWeakObjectCache;

@interface _MFWeakObjectCacheRef : NSObject {

	id<NSCopying> _key;
	MFWeakObjectCache* _cache;

}

@property (nonatomic,copy) id<NSCopying> key;                               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) MFWeakObjectCache * cache;              //@synthesize cache=_cache - In the implementation block
-(id<NSCopying>)key;
-(void)dealloc;
-(void)setKey:(id<NSCopying>)arg1 ;
-(MFWeakObjectCache *)cache;
-(void)setCache:(MFWeakObjectCache *)arg1 ;
@end
