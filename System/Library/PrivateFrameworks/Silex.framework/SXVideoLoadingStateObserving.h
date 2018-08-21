/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXVideoLoadingStateObserving <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (setter=onStart:,nonatomic,copy) id startBlock; 
@property (setter=onFinished:,nonatomic,copy) id finishedBlock; 
@property (setter=onFailed:,nonatomic,copy) id failedBlock; 
@required
-(unsigned long long)state;
-(id)finishedBlock;
-(void)onFinished:(/*^block*/id)arg1;
-(void)onFailed:(/*^block*/id)arg1;
-(id)failedBlock;
-(void)onStart:(/*^block*/id)arg1;
-(id)startBlock;

@end
