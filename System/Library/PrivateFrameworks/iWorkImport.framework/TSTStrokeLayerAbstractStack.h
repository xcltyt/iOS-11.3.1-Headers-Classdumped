/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTStrokeLayerAbstractStack : NSObject {

	opaque_pthread_rwlock_t mRWLock;

}
-(void)enumerateStrokesInRange:(TSTSimpleRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)p_strokeLayerEnumeration;
-(id)portalledStrokeLayer;
-(void)enumerateStrokesAndCapsInRange:(TSTSimpleRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)lookupStrokeAtIndex:(long long)arg1 ;
-(void)enumerateStrokesFrom:(unsigned)arg1 to:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateStrokesAndCapsFrom:(unsigned)arg1 to:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)init;
-(unsigned long long)count;
-(void)dealloc;
-(void)unlock;
-(void)lockForRead;
-(void)lockForWrite;
@end
