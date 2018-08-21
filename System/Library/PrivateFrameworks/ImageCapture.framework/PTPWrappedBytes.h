/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPWrappedBytes : NSObject {

	unsigned long long _offset;
	unsigned long long _capacity;
	BOOL _allocatedBytes;
	char* _bytes;
	int _fd;
	BOOL _useByteBuffer;
	unsigned long long _excessDataLength;
	double _progressNotificationTime;
	/*function pointer*/void* _progressNotifier;
	void* _progressNotifierContext;
	int _lastNotifiedProgress;

}
+(id)wrappedBytesWithCapacity:(unsigned long long)arg1 ;
+(id)wrappedBytesWithBytes:(void*)arg1 capacity:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)length;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(const void*)bytes;
-(unsigned long long)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)capacity;
-(unsigned long long)setCapacity:(unsigned long long)arg1 ;
-(id)data;
-(unsigned long long)offset;
-(void)setLength:(unsigned long long)arg1 ;
-(unsigned long long)appendData:(id)arg1 ;
-(void*)mutableBytes;
-(id)initWithFileDescriptor:(int)arg1 capacity:(unsigned long long)arg2 ;
-(BOOL)wasInitWithFD;
-(double)percentFull;
-(id)initWithBytes:(void*)arg1 capacity:(unsigned long long)arg2 ;
-(unsigned long long)rewindBytesToPosition64:(unsigned long long)arg1 ;
-(void)setProgressNotifierCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(unsigned long long)excessDataLength;
-(id)mutableData;
@end
