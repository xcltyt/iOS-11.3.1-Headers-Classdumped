/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;
@interface CATOperationQueue : NSOperationQueue {

	id<CATOperationQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATOperationQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)mainQueue;
+(id)backgroundQueue;
+(id)currentQueue;
-(void)setUnderlyingQueue:(id)arg1 ;
-(id<CATOperationQueueDelegate>)delegate;
-(void)setDelegate:(id<CATOperationQueueDelegate>)arg1 ;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addOperation:(id)arg1 ;
-(void)startObserving:(id)arg1 ;
-(void)stopObserving:(id)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(void)delegateWillAddOperation:(id)arg1 ;
-(void)delegateOperationDidFinish:(id)arg1 ;
@end
