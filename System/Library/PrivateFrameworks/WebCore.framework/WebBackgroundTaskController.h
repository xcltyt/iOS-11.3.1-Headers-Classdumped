/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WebBackgroundTaskController : NSObject {

	unsigned long long _invalidBackgroundTaskIdentifier;
	/*^block*/id _backgroundTaskStartBlock;
	/*^block*/id _backgroundTaskEndBlock;

}

@property (assign,nonatomic) unsigned long long invalidBackgroundTaskIdentifier;              //@synthesize invalidBackgroundTaskIdentifier=_invalidBackgroundTaskIdentifier - In the implementation block
@property (nonatomic,copy) id backgroundTaskStartBlock;                                       //@synthesize backgroundTaskStartBlock=_backgroundTaskStartBlock - In the implementation block
@property (nonatomic,copy) id backgroundTaskEndBlock;                                         //@synthesize backgroundTaskEndBlock=_backgroundTaskEndBlock - In the implementation block
+(id)sharedController;
-(unsigned long long)startBackgroundTaskWithExpirationHandler:(/*^block*/id)arg1 ;
-(void)endBackgroundTaskWithIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)invalidBackgroundTaskIdentifier;
-(id)backgroundTaskEndBlock;
-(void)dealloc;
-(id)backgroundTaskStartBlock;
-(void)setBackgroundTaskStartBlock:(id)arg1 ;
-(void)setBackgroundTaskEndBlock:(id)arg1 ;
-(void)setInvalidBackgroundTaskIdentifier:(unsigned long long)arg1 ;
@end
