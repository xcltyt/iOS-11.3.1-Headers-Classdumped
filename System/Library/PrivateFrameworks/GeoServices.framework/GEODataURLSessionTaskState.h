/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOCapturedState.h>

@class GEONSURLSessionTaskState;

@interface GEODataURLSessionTaskState : GEOCapturedState {

	long long _rawPointer;
	unsigned _taskIdentifier;
	GEONSURLSessionTaskState* _backingTask;
	unsigned _cachedDataLength;
	unsigned _receivedDataLength;
	double _now;
	double _startTime;
	double _endTime;
	BOOL _backingTaskNeedsResume;
	int _requestKind;

}
+(const char*)decoderType;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
