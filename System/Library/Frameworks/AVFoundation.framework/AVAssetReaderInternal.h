/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVAsset, NSMutableArray, NSMutableSet, NSError, NSObject;

@interface AVAssetReaderInternal : NSObject {

	AVWeakReference* weakReference;
	AVAsset* asset;
	OpaqueFigAssetReaderRef figAssetReader;
	SCD_Struct_AV3 timeRange;
	BOOL readSingleSample;
	NSMutableArray* outputs;
	NSMutableSet* outputFinishedCallbackInvokers;
	long long status;
	NSError* error;
	NSError* errorThatOccurredBeforeStartReading;
	NSObject*<OS_dispatch_queue> statusReadWriteQueue;

}
@end
