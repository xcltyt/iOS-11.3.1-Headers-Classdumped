/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASLock : NSObject {

	opaque_pthread_mutex_t _lock;
	id _guardedData;

}
-(void)dealloc;
-(void)runWithLockAcquired:(/*^block*/id)arg1 ;
-(id)initWithGuardedData:(id)arg1 ;
@end
