/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, TXRImageInfo;

@interface TXRDeferredImageInfo : NSObject {

	NSObject*<OS_dispatch_semaphore> _infoLoaded;
	TXRImageInfo* _info;

}

@property (nonatomic,retain) TXRImageInfo * info;              //@synthesize info=_info - In the implementation block
-(void)signalLoaded;
-(id)init;
-(TXRImageInfo *)info;
-(void)setInfo:(TXRImageInfo *)arg1 ;
@end
