/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSDate, UIImage, NSError, QLTThumbnailRequest;

@interface QLTThumbnailOperation : NSOperation {

	BOOL _finished;
	BOOL _executing;
	NSDate* _beginDate;
	UIImage* _image;
	NSError* _error;
	/*^block*/id _needsAdditionalTime;
	QLTThumbnailRequest* _request;

}

@property (retain) QLTThumbnailRequest * request;              //@synthesize request=_request - In the implementation block
@property (retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (retain) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (copy) id needsAdditionalTime;                       //@synthesize needsAdditionalTime=_needsAdditionalTime - In the implementation block
+(id)operationWithThumbnailRequest:(id)arg1 ;
-(void)setRequest:(QLTThumbnailRequest *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(QLTThumbnailRequest *)request;
-(UIImage *)image;
-(void)start;
-(void)main;
-(void)_finish;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initWithThumbnailRequest:(id)arg1 ;
-(void)_logOperationDuration;
-(id)needsAdditionalTime;
-(void)setNeedsAdditionalTime:(id)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(BOOL)_finishIfCancelled;
-(void)setExecuting:(BOOL)arg1 ;
@end
