/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _HMCameraSource, NSObject;

@interface HMCameraSource : NSObject {

	_HMCameraSource* _source;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,retain) _HMCameraSource * source;                                  //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
-(void)setSource:(_HMCameraSource *)arg1 ;
-(_HMCameraSource *)source;
-(id)aspectRatio;
-(id)initWithSource:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
@end
