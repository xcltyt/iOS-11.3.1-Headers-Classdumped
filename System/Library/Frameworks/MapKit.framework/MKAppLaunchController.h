/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSLookupRequest, NSString, NSURL;

@interface MKAppLaunchController : NSObject {

	SSLookupRequest* _request;
	NSString* _webURLString;
	NSURL* webURL;

}

@property (nonatomic,retain) SSLookupRequest * storeRequest;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURL * webURL; 
+(id)sharedController;
+(void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURL *)webURL;
-(void)dealloc;
-(void)lookUpAppStoreURLForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SSLookupRequest *)storeRequest;
-(void)setStoreRequest:(SSLookupRequest *)arg1 ;
-(void)setWebURL:(NSURL *)arg1 ;
@end
