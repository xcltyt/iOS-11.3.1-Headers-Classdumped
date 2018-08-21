/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface GEOClientRequestInfo : NSObject {

	NSString* _clientID;
	NSMutableDictionary* _requests;

}

@property (nonatomic,readonly) NSString * clientID;                  //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) NSDictionary * requests;              //@synthesize requests=_requests - In the implementation block
-(NSDictionary *)requests;
-(id)initWithClientID:(id)arg1 ;
-(unsigned long long)countForRequestType:(unsigned char)arg1 ;
-(void)incrementCountForRequestType:(unsigned char)arg1 ;
-(NSString *)clientID;
-(id)init;
@end
