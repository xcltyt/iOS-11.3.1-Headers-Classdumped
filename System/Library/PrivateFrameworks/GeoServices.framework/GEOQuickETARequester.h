/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOQuickETARequest, GEOETARequest, GEODirectionsRequest, NSString;

@interface GEOQuickETARequester : NSObject {

	GEOQuickETARequest* _request;
	GEOETARequest* _simpleETARequest;
	GEODirectionsRequest* _directionsETARequest;
	NSString* _loggingFacility;
	int _requestMode;

}

@property (nonatomic,copy) NSString * loggingFacility;              //@synthesize loggingFacility=_loggingFacility - In the implementation block
+(BOOL)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(/*^block*/id)arg5 ;
+(BOOL)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 withShortTrafficString:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(id)initWithRequest:(id)arg1 requestMode:(int)arg2 ;
-(void)_calculateSimpleETAFromAPI:(BOOL)arg1 WithHandler:(/*^block*/id)arg2 ;
-(void)_calculateSimpleETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithHandler:(/*^block*/id)arg3 ;
-(void)_calculateRoutingETAWithHandler:(/*^block*/id)arg1 ;
-(void)_calculateRoutingETAWithSummary:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)calculateETAWithResponseHandler:(/*^block*/id)arg1 ;
-(void)calculateETAFromAPI:(BOOL)arg1 WithResponseHandler:(/*^block*/id)arg2 ;
-(void)calculateETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithResponseHandler:(/*^block*/id)arg3 ;
-(NSString *)loggingFacility;
-(void)setLoggingFacility:(NSString *)arg1 ;
-(void)cancel;
-(id)initWithRequest:(id)arg1 ;
@end
