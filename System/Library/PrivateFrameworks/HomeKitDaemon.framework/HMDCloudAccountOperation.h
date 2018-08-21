/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject;

@interface HMDCloudAccountOperation : NSOperation {

	NSUUID* _identifier;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _operationBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) id operationBlock;                                         //@synthesize operationBlock=_operationBlock - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
-(id)description;
-(NSUUID *)identifier;
-(void)main;
-(id)operationBlock;
-(void)setOperationBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)initWithBlock:(/*^block*/id)arg1 clientQueue:(id)arg2 ;
@end
