/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUTaskMemoryCache : NSObject {

	mapped_memory_tRef _memoryRegions;
	unsigned _task;
	BOOL _taskIs64Bit;
	BOOL _stopped;
	BOOL _shouldTouchPages;

}
+(BOOL)taskIs64Bit:(unsigned)arg1 ;
+(id)taskMemoryCacheForTask:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithTask:(unsigned)arg1 ;
-(int)startPeeking;
-(void)flushMemoryCache;
-(int)stopPeeking;
-(int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void*)arg3 ;
-(int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long*)arg2 ;
-(BOOL)copyRange:(VMURange)arg1 to:(void*)arg2 ;
@end
