/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel, OS_dispatch_queue, OS_dispatch_data;
@class NSObject, SFUCryptoKey, NSString;

@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	NSObject*<OS_dispatch_queue> _readChannelQueue;
	SFUCryptoKey* _decryptionKey;
	NSObject*<OS_dispatch_data> _holdData;
	char* _iv;
	unsigned long long _ivRead;
	CCCryptorRef _cryptor;
	char* _buffer;
	unsigned long long _initialBytesIgnored;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2 ;
@end
