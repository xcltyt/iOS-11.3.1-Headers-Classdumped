/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PASampleTaskData;

@interface PATimestampIndexedSampleTask : NSObject {

	unsigned long long _lastTimestampIndex;
	PASampleTaskData* _sampleTask;

}

@property (assign) unsigned long long lastTimestampIndex;              //@synthesize lastTimestampIndex=_lastTimestampIndex - In the implementation block
@property (readonly) PASampleTaskData * sampleTask;                    //@synthesize sampleTask=_sampleTask - In the implementation block
-(id)debugDescription;
-(id)initWithSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(unsigned long long)lastTimestampIndex;
-(void)setLastTimestampIndex:(unsigned long long)arg1 ;
-(PASampleTaskData *)sampleTask;
@end
