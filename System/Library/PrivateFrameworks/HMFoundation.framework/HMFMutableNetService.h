/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFNetService.h>

@class NSDictionary;

@interface HMFMutableNetService : HMFNetService {

	unsigned long long _port;
	BOOL _publishing;
	/*^block*/id _publishBlock;

}

@property (getter=isPublishing) BOOL publishing;                   //@synthesize publishing=_publishing - In the implementation block
@property (nonatomic,copy) id publishBlock;                        //@synthesize publishBlock=_publishBlock - In the implementation block
@property (assign,nonatomic) unsigned long long port;              //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSDictionary * TXTRecord; 
-(unsigned long long)port;
-(id)initWithNetService:(id)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(unsigned long long)arg4 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)setPublishing:(BOOL)arg1 ;
-(BOOL)isPublishing;
-(void)stopPublishing;
-(void)startPublishingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateTXTRecordWithData:(id)arg1 ;
-(void)setTXTRecord:(NSDictionary *)arg1 ;
-(void)updateTXTRecord;
-(void)setPublishBlock:(id)arg1 ;
-(id)publishBlock;
-(id)internal;
-(void)setTXTRecordValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeTXTRecordValueForKey:(id)arg1 ;
-(void)setPort:(unsigned long long)arg1 ;
-(void)setInternal:(id)arg1 ;
@end
