/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompanionSync/CompanionSync-Structs.h>
@class NSMutableArray;

@interface SYAtomicFIFO : NSObject {

	os_unfair_lock_s _lock;
	NSMutableArray* _store;

}

@property (readonly) id head; 
@property (readonly) id tail; 
-(id)dequeue;
-(id)init;
-(void)removeAllObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)dequeueUntil:(/*^block*/id)arg1 ;
-(id)head;
-(id)tail;
-(void)enqueue:(id)arg1 ;
@end
