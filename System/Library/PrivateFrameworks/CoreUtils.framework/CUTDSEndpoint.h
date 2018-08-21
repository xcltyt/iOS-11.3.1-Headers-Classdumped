/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface CUTDSEndpoint : NSObject {

	int _dataLinkType;
	NSData* _deviceAddress;
	NSString* _serviceType;

}

@property (assign,nonatomic) int dataLinkType;                  //@synthesize dataLinkType=_dataLinkType - In the implementation block
@property (nonatomic,copy) NSData * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSString * serviceType;              //@synthesize serviceType=_serviceType - In the implementation block
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(int)dataLinkType;
-(void)setDataLinkType:(int)arg1 ;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(NSData *)deviceAddress;
@end
