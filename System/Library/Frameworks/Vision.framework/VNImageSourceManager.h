/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class NSURL, NSData;

@interface VNImageSourceManager : NSObject {

	os_unfair_lock_s _getOrientationLock;
	os_unfair_lock_s _loadSubSample1Lock;
	os_unfair_lock_s _loadSubSample2Lock;
	os_unfair_lock_s _loadSubSample4Lock;
	os_unfair_lock_s _loadSubSample8Lock;
	CGImageSourceRef _imageSourceSubsample1;
	CGImageSourceRef _imageSourceSubsample2;
	CGImageSourceRef _imageSourceSubsample4;
	CGImageSourceRef _imageSourceSubsample8;
	NSURL* _imageURL;
	NSData* _imageData;
	int _orientation;

}
-(void)dealloc;
-(int)exifOrientation;
-(CGImageSourceRef)obtainImageSourceRefWithSubSampleFactor:(unsigned)arg1 andLowPriorityHint:(BOOL)arg2 ;
-(CGImageSourceRef)_obtainCreatedCGImageSourceRefAtAddress:(CGImageSource*)arg1 forSubSampleFactor:(unsigned)arg2 protectedWithUnfairLock:(os_unfair_lock_s*)arg3 operatingInLowPriority:(BOOL)arg4 ;
-(CGImageSourceRef)obtainImageSourceRef;
-(id)imageURL;
-(id)imageData;
-(id)initWithImageData:(id)arg1 ;
-(id)initWithImageURL:(id)arg1 ;
@end
