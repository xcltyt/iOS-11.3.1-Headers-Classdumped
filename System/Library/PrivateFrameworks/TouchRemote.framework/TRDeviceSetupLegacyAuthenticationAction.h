/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRDeviceSetupConnectAction.h>

@class NSString;

@interface TRDeviceSetupLegacyAuthenticationAction : TRDeviceSetupConnectAction {

	NSString* _deviceGUID;
	NSString* _userAgent;

}

@property (nonatomic,retain) NSString * deviceGUID;              //@synthesize deviceGUID=_deviceGUID - In the implementation block
@property (nonatomic,retain) NSString * userAgent;               //@synthesize userAgent=_userAgent - In the implementation block
-(void)setDeviceGUID:(NSString *)arg1 ;
-(id)propertyListRepresentation;
-(NSString *)deviceGUID;
-(id)deviceName;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
@end
