/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OSASyncProxyHandler;
@class NSArray;

@interface PCCEndpoint : NSObject {

	id<OSASyncProxyHandler> _delegate;
	unsigned _fileTimeout;
	NSArray* _deviceIds;

}

@property (assign) unsigned fileTimeout;               //@synthesize fileTimeout=_fileTimeout - In the implementation block
@property (readonly) NSArray * deviceIds;              //@synthesize deviceIds=_deviceIds - In the implementation block
-(void)runWithDelegate:(id)arg1 ;
-(BOOL)isDeviceNearby:(id)arg1 ;
-(id)synchronize:(id)arg1 withOptions:(id)arg2 ;
-(id)send:(id)arg1 message:(id)arg2 error:(id*)arg3 ;
-(id)send:(id)arg1 file:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(unsigned)fileTimeout;
-(void)setFileTimeout:(unsigned)arg1 ;
-(NSArray *)deviceIds;
@end
