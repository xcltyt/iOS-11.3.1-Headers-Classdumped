/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OISFUBufferedInputStream.h>

@protocol OISFUBufferedInputStream <SFUInputStream>
@required
-(BOOL)seekWithinBufferToOffset:(long long)arg1;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2;

@end


@protocol SFUInputStream;
@class NSString;

@interface OISFUBufferedInputStream : NSObject <OISFUBufferedInputStream> {

	id<SFUInputStream> mStream;
	char* mBuffer;
	unsigned long long mBufferSize;
	long long mBufferOffset;
	long long mBufferStart;
	long long mBufferEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)offset;
-(void)close;
-(BOOL)canSeek;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)seekToOffset:(long long)arg1 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(BOOL)seekWithinBufferToOffset:(long long)arg1 ;
-(id)initWithStream:(id)arg1 dataLength:(long long)arg2 ;
-(id)initWithStream:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(id)initWithStream:(id)arg1 ;
@end
