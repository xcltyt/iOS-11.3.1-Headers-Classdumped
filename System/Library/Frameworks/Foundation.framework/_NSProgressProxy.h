/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;
@interface _NSProgressProxy : NSProgress {

	id<NSProgressPublisher> _forwarder;
	BOOL _isOld;
	/*^block*/id _unpublishingHandler;

}
-(void)prioritize;
-(void)setPausingHandler:(/*^block*/id)arg1 ;
-(void)setEstimatedTimeRemaining:(id)arg1 ;
-(void)setThroughput:(id)arg1 ;
-(void)setFileOperationKind:(id)arg1 ;
-(void)setFileTotalCount:(id)arg1 ;
-(void)setFileCompletedCount:(id)arg1 ;
-(void)publish;
-(void)unpublish;
-(void)acknowledgeWithSuccess:(BOOL)arg1 ;
-(BOOL)isOld;
-(void)setPrioritizable:(BOOL)arg1 ;
-(void)setPrioritizationHandler:(/*^block*/id)arg1 ;
-(void)_setRemoteUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setRemoteValues:(id)arg1 forKeys:(id)arg2 ;
-(void)_acknowledgeWithSuccess:(BOOL)arg1 ;
-(id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(BOOL)arg3 ;
-(void)_invokePublishingHandler:(/*^block*/id)arg1 ;
-(void)_invokeUnpublishingHandler;
-(void)resignCurrent;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(void)resume;
-(void)setKind:(id)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(double)fractionCompleted;
-(void)pause;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)setCancellable:(BOOL)arg1 ;
-(void)setPausable:(BOOL)arg1 ;
-(void)setFileURL:(id)arg1 ;
@end

