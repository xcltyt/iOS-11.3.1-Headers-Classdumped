/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFLinkQuality : NSObject {

	float _scaledRssi;
	NSString* _ssid;
	long long _rssi;

}

@property (nonatomic,copy) NSString * ssid;                 //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long rssi;                //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) float scaledRssi;              //@synthesize scaledRssi=_scaledRssi - In the implementation block
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)ssid;
-(void)setRssi:(long long)arg1 ;
-(long long)rssi;
-(id)init;
-(id)description;
-(float)scaledRssi;
-(id)initWithSSID:(id)arg1 rssi:(long long)arg2 scaledRSSI:(float)arg3 ;
-(void)setScaledRssi:(float)arg1 ;
@end
