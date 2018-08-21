/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, AVMediaFileType, NSObject, NSOperationQueue;

@interface AVFigAssetWriterTrack : NSObject {

	AVWeakReference* _weakReference;
	OpaqueFigAssetWriterRef _figAssetWriter;
	int _trackID;
	NSString* _mediaType;
	AVMediaFileType* _mediaFileType;
	NSObject*<OS_dispatch_queue> _aboveHighWaterLevelQueue;
	BOOL _aboveHighWaterLevel;
	SCD_Struct_AV2 _sampleBufferCoalescingInterval;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) OpaqueFigAssetWriterRef figAssetWriter;                   //@synthesize figAssetWriter=_figAssetWriter - In the implementation block
@property (nonatomic,readonly) NSString * mediaType;                                     //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) AVMediaFileType * mediaFileType;                          //@synthesize mediaFileType=_mediaFileType - In the implementation block
@property (nonatomic,readonly) int trackID;                                              //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (nonatomic,readonly) BOOL encoderSupportsMultiPass; 
@property (getter=isAboveHighWaterLevel,readonly) BOOL aboveHighWaterLevel; 
@property (assign,nonatomic) SCD_Struct_AV2 sampleBufferCoalescingInterval;              //@synthesize sampleBufferCoalescingInterval=_sampleBufferCoalescingInterval - In the implementation block
+(id)assetWriterTrackWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(BOOL)arg6 attachedAdaptor:(id)arg7 error:(id*)arg8 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(void)setAlternateGroupID:(short)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setProvisionalAlternateGroupID:(short)arg1 ;
-(void)setMediaDataLocation:(id)arg1 ;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(void)setSampleBufferCoalescingInterval:(SCD_Struct_AV2)arg1 ;
-(void)prepareToEndSession;
-(void)setFormatDescriptions:(id)arg1 ;
-(void)setFigMetadata:(id)arg1 ;
-(void)setExcludeFromAutoSelection:(BOOL)arg1 ;
-(void)setFigTrackMatrix:(id)arg1 ;
-(void)setFigDimensions:(id)arg1 ;
-(void)setTrackVolume:(float)arg1 ;
-(void)setPreferredChunkDuration:(SCD_Struct_AV2)arg1 ;
-(void)setPreferredChunkAlignment:(long long)arg1 ;
-(void)setPreferredChunkSize:(long long)arg1 ;
-(BOOL)encoderSupportsMultiPass;
-(BOOL)isAboveHighWaterLevel;
-(BOOL)beginPassReturningError:(id*)arg1 ;
-(BOOL)addSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)addPixelBuffer:(CVBufferRef)arg1 atPresentationTime:(SCD_Struct_AV2)arg2 error:(id*)arg3 ;
-(BOOL)markEndOfDataReturningError:(id*)arg1 ;
-(void)endPassWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(BOOL)arg6 error:(id*)arg7 ;
-(int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(BOOL)arg3 error:(id*)arg4 ;
-(void)_refreshAboveHighWaterLevel;
-(OpaqueFigAssetWriterRef)figAssetWriter;
-(void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg1 ;
-(SCD_Struct_AV2)sampleBufferCoalescingInterval;
-(id)init;
-(void)dealloc;
-(void)setLayer:(long long)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
-(NSString *)mediaType;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(int)trackID;
-(AVMediaFileType *)mediaFileType;
-(void)finalize;
@end
