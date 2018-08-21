/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSObject, AVAsset, NSURL, NSError;

@interface NTKCompanionIrisVideoExportSession : NSObject {

	NSObject*<OS_dispatch_queue> _exportQueue;
	NSObject*<OS_dispatch_queue> _encodeQueue;
	AVAsset* _video;
	unsigned long long _bitrate;
	NSURL* _outputURL;
	long long _status;
	NSError* _error;
	CGSize _outputSize;
	CGRect _crop;

}

@property (nonatomic,retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long status;                          //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) AVAsset * video;                         //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) CGRect crop;                             //@synthesize crop=_crop - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                       //@synthesize outputSize=_outputSize - In the implementation block
@property (nonatomic,readonly) unsigned long long bitrate;              //@synthesize bitrate=_bitrate - In the implementation block
@property (nonatomic,readonly) NSURL * outputURL;                       //@synthesize outputURL=_outputURL - In the implementation block
-(void)setStatus:(long long)arg1 ;
-(long long)status;
-(NSURL *)outputURL;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(CGSize)outputSize;
-(CGRect)crop;
-(id)initWithVideo:(id)arg1 crop:(CGRect)arg2 outputSize:(CGSize)arg3 bitrate:(unsigned long long)arg4 outputURL:(id)arg5 ;
-(void)exportAsynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(id)_makeReader;
-(id)_makeWriter;
-(unsigned long long)bitrate;
-(AVAsset *)video;
@end
