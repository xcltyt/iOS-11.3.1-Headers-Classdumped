/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLPushToTransportTaskDelegate <CPLEngineSyncTaskDelegate>
@required
-(id)task:(id)arg1 wantsToCheckRecordsExistence:(id)arg2 fetchRecordProperties:(id)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(id)task:(id)arg1 wantsToPushBatch:(id)arg2 progressBlock:(/*^block*/id)arg3 continuationBlock:(/*^block*/id)arg4;

@end
