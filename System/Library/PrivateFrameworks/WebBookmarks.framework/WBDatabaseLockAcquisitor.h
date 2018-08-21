/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBDatabaseLockAcquisitorDelegate;
@class NSTimer;

@interface WBDatabaseLockAcquisitor : NSObject {

	NSTimer* _timer;
	Class _webBookmarkCollectionClass;
	BOOL _lockAcquired;
	long long _maxRetryCount;
	long long _retryCount;
	id<WBDatabaseLockAcquisitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBDatabaseLockAcquisitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WBDatabaseLockAcquisitorDelegate>)delegate;
-(void)setDelegate:(id<WBDatabaseLockAcquisitorDelegate>)arg1 ;
-(void)dealloc;
-(void)_stopTimer;
-(id)initWithWebBookmarkCollectionClass:(Class)arg1 ;
-(void)acquireLockWithTimeout:(double)arg1 ;
-(void)acquireLockWithTimeout:(double)arg1 retryInterval:(double)arg2 ;
-(BOOL)_attemptToLockSyncAndNotifyDelegateOnFailure:(BOOL)arg1 ;
-(void)_startTimerWithTimeout:(double)arg1 retryInterval:(double)arg2 ;
-(void)_retryTimerFired:(id)arg1 ;
-(void)releaseLock;
@end
