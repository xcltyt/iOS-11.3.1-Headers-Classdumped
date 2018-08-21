/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVAsset, NSString, NSMutableArray, NSObject, AVVideoComposition, AVCustomVideoCompositorSession;

@interface AVAssetImageGeneratorInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigAssetImageGeneratorRef generator;
	AVAsset* asset;
	BOOL appliesPreferredTrackTransform;
	CGSize maximumSize;
	NSString* apertureMode;
	SCD_Struct_AV2 requestedTimeToleranceBefore;
	SCD_Struct_AV2 requestedTimeToleranceAfter;
	NSMutableArray* requests;
	NSObject*<OS_dispatch_queue> requestsQueue;
	int nextRequestID;
	AVVideoComposition* videoComposition;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	NSObject*<OS_dispatch_queue> imageRequestQueue;
	int cancelledRequestIDThreshold;

}
@end
