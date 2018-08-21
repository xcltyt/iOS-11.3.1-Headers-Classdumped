/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOLatLng, GEOApplicationAuditToken, NSObject;

@interface _GEOLocationShiftLocation : NSObject {

	GEOLatLng* _latLng;
	GEOApplicationAuditToken* _auditToken;
	double _accuracy;
	/*^block*/id _completionHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _mustGoToNetworkCallback;
	/*^block*/id _functionHandler;
	CFRunLoopRef _runLoop;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _recordCacheInfo;

}

@property (nonatomic,readonly) GEOLatLng * latLng;                                 //@synthesize latLng=_latLng - In the implementation block
@property (nonatomic,readonly) double accuracy;                                    //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
-(GEOLatLng *)latLng;
-(void)performMustGoToNetwork;
-(void)performCompletionHandlerWithShiftedCoordinate:(SCD_Struct_GE29)arg1 accuracy:(double)arg2 function:(id)arg3 wasFunctionCached:(BOOL)arg4 ;
-(double)accuracy;
-(id)initWithLatLng:(id)arg1 auditToken:(id)arg2 functionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 callbackQueue:(id)arg5 ;
-(id)_initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 ;
-(id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 callbackRunLoop:(CFRunLoopRef)arg6 ;
-(id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 callbackQueue:(id)arg6 auditToken:(id)arg7 ;
-(id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(void)_performOnCallbackQueue:(/*^block*/id)arg1 ;
-(void)performErrorHandler:(id)arg1 ;
-(void)dealloc;
-(GEOApplicationAuditToken *)auditToken;
@end
