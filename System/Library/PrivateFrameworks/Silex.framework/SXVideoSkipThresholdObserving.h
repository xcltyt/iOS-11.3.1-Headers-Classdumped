/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXVideoSkipThresholdObserving <NSObject>
@property (nonatomic,readonly) id<SXVideoSkipThreshold> thresholdProvider; 
@property (nonatomic,readonly) BOOL loading; 
@property (setter=onChange:,nonatomic,copy) id block; 
@required
-(id)block;
-(void)onChange:(/*^block*/id)arg1;
-(id<SXVideoSkipThreshold>)thresholdProvider;
-(BOOL)loading;

@end
