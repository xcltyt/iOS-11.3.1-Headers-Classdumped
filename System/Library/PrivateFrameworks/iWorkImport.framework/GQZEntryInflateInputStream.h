/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQZEntryInputStream.h>

@protocol GQZArchiveInputStream;
@class NSString;

@interface GQZEntryInflateInputStream : NSObject <GQZEntryInputStream> {

	z_stream_s* mStream;
	long long mOffset;
	long long mEnd;
	unsigned long long mCalculatedCrc;
	unsigned long long mCheckCrc;
	id<GQZArchiveInputStream> mInput;
	char* mOutBuffer;
	unsigned long long mOutBufferSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 input:(id)arg5 ;
-(void)dealloc;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)readToOwnBuffer:(const char**)arg1 size:(unsigned long long*)arg2 ;
@end
