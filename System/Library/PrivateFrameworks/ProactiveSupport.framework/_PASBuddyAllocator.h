/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASBuddyAllocator : NSObject {

	unique_ptr<(anonymous namespace)::BuddyAllocator, std::__1::default_delete<(anonymous namespace)::BuddyAllocator> >* _allocator;
	void* _buffer;
	/*^block*/id _freeBuffer;

}
+(void)initialize;
+(unsigned long long)bufferSizeForHeapOfSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned)_maximumLevelsForBufferWithSize:(unsigned long long)arg1 ;
-(id)initWithAlignedBuffer:(void*)arg1 size:(unsigned long long)arg2 free:(/*^block*/id)arg3 ;
-(id)initWithFileBackedMappingWithHeapSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(void*)alloc:(unsigned long long)arg1 ;
-(void*)allocZeros:(unsigned long long)arg1 ;
-(void)free:(const void*)arg1 ;
-(BOOL)heapContains:(const void*)arg1 ;
-(void)usageWithHeapSize:(unsigned long long*)arg1 bytesAllocated:(unsigned long long*)arg2 ;
-(BOOL)integrityCheck;
@end
