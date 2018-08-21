/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeMessage.h>

@class FigCaptureStillImageSettings, BWStillImageCaptureSettings, NSArray;

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {

	FigCaptureStillImageSettings* _requestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _resolvedStillImageCaptureSettings;
	NSArray* _resolvedPhotoManifest;

}

@property (readonly) FigCaptureStillImageSettings * requestedStillImageCaptureSettings; 
@property (readonly) BWStillImageCaptureSettings * resolvedStillImageCaptureSettings; 
@property (readonly) NSArray * resolvedPhotoManifest; 
+(id)newMessageWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 resolvedPhotoManifest:(id)arg3 ;
-(FigCaptureStillImageSettings *)requestedStillImageCaptureSettings;
-(BWStillImageCaptureSettings *)resolvedStillImageCaptureSettings;
-(NSArray *)resolvedPhotoManifest;
-(id)_initWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 resolvedPhotoManifest:(id)arg3 ;
-(void)dealloc;
@end
