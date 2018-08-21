/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ISPlayerState : NSObject {

	NSString* _diagnosticLabel;
	double _photoBlurRadius;
	double _videoAlpha;
	double _videoBlurRadius;

}

@property (nonatomic,readonly) NSString * diagnosticLabel;              //@synthesize diagnosticLabel=_diagnosticLabel - In the implementation block
@property (nonatomic,readonly) double photoBlurRadius;                  //@synthesize photoBlurRadius=_photoBlurRadius - In the implementation block
@property (nonatomic,readonly) double videoAlpha;                       //@synthesize videoAlpha=_videoAlpha - In the implementation block
@property (nonatomic,readonly) double videoBlurRadius;                  //@synthesize videoBlurRadius=_videoBlurRadius - In the implementation block
+(id)outputInfoWithPhotoBlurRadius:(double)arg1 videoAlpha:(double)arg2 videoBlurRadius:(double)arg3 label:(id)arg4 ;
-(id)description;
-(id)initWithPhotoBlurRadius:(double)arg1 videoAlpha:(double)arg2 videoBlurRadius:(double)arg3 label:(id)arg4 ;
-(double)videoAlpha;
-(NSString *)diagnosticLabel;
-(double)photoBlurRadius;
-(double)videoBlurRadius;
@end
