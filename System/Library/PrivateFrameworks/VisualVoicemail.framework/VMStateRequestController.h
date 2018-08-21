/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VMCTMessageCenter, OS_dispatch_queue;
@class NSMapTable, NSMutableArray, NSObject;

@interface VMStateRequestController : NSObject {

	id<VMCTMessageCenter> _messageCenter;
	NSMapTable* _delegateToQueue;
	NSMutableArray* _stateRequests;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;

}

@property (nonatomic,readonly) NSMapTable * delegateToQueue;                                  //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (nonatomic,readonly) id<VMCTMessageCenter> messageCenter;                           //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,readonly) NSMutableArray * stateRequests;                                //@synthesize stateRequests=_stateRequests - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialDispatchQueue;              //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(id)stateRequestForIdentifier:(long long)arg1 ;
-(void)addStateRequest:(id)arg1 ;
-(NSMutableArray *)stateRequests;
-(void)acknowledgeOutgoingRequestWithMessageIdentifier:(id)arg1 ;
-(void)removeStateRequest:(id)arg1 ;
-(id)initWithMessageCenter:(id)arg1 ;
-(void)sendStateRequest:(id)arg1 ;
-(void)handleCTMessageCenterNotification:(id)arg1 ;
-(void)performSynchronousBlock:(/*^block*/id)arg1 ;
-(NSMapTable *)delegateToQueue;
-(id<VMCTMessageCenter>)messageCenter;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
@end
