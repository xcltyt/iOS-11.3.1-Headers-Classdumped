/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHADownloadRequestManagement.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSString;

@interface PHAAssetResourceDownloadRequestManager : NSObject <PHADownloadRequestManagement> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _dateToRequestPermissionAgain;
	unsigned long long _allowedDownloadCount;
	unsigned long long _expectedRequestsCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long expectedRequestsCount;              //@synthesize expectedRequestsCount=_expectedRequestsCount - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)setExpectedRequestsCount:(unsigned long long)arg1 ;
-(id)statusAsDictionary;
-(void)requestPermissionToDownloadWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)expectedRequestsCount;
@end
