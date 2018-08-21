/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSDictionary, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings, AVCapturePhotoSettings, AVDepthData, AVCaptureBracketedStillImageSettings, NSString, AVApplePortraitMetadata;

@interface AVCapturePhotoInternal : NSObject {

	SCD_Struct_AV2 timestamp;
	IOSurfaceRef photoSurface;
	unsigned long long photoSurfaceSize;
	CVBufferRef photoPixelBuffer;
	CVBufferRef previewPixelBuffer;
	CVBufferRef embeddedThumbnailSourcePixelBuffer;
	NSDictionary* embeddedThumbnailPhotoFormat;
	NSDictionary* metadata;
	AVCameraCalibrationData* cameraCalibrationData;
	AVCaptureResolvedPhotoSettings* resolvedSettings;
	AVCapturePhotoSettings* unresolvedSettings;
	AVDepthData* depthData;
	BOOL didTryToDecodeDepthData;
	BOOL isRawPhoto;
	AVCaptureBracketedStillImageSettings* bracketSettings;
	unsigned long long sequenceCount;
	unsigned long long photoCount;
	NSString* sourceDeviceType;
	unsigned expectedPhotoProcessingFlags;
	unsigned actualPhotoProcessingFlags;
	AVApplePortraitMetadata* portraitMetadata;

}
@end
