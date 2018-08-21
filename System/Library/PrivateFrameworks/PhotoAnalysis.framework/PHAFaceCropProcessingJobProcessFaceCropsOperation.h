/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate;
@class PHAVisionServiceFaceProcessingWorker, NSArray;

@interface PHAFaceCropProcessingJobProcessFaceCropsOperation : NSOperation {

	id<PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> _delegate;
	PHAVisionServiceFaceProcessingWorker* _faceProcessingWorker;
	NSArray* _faceCrops;
	unsigned long long _totalSteps;
	unsigned long long _currentStep;

}
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(float)percentComplete;
-(void)main;
-(id)initWithFaceProcessingWorker:(id)arg1 faceCrops:(id)arg2 ;
@end
