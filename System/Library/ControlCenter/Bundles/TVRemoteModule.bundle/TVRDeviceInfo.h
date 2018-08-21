/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/TVRemoteModule.bundle/TVRemoteModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TVRCDeviceDescriptor;

@interface TVRDeviceInfo : NSObject <NSSecureCoding> {

	BOOL _isConnected;
	NSString* _name;
	NSString* _identifier;
	TVRCDeviceDescriptor* _deviceDescriptor;

}

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) TVRCDeviceDescriptor * deviceDescriptor;              //@synthesize deviceDescriptor=_deviceDescriptor - In the implementation block
@property (nonatomic,readonly) BOOL isConnected;                                     //@synthesize isConnected=_isConnected - In the implementation block
+(id)deviceInfoFromDevice:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isConnected;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(TVRCDeviceDescriptor *)deviceDescriptor;
-(id)initWithDevice:(id)arg1 ;
@end
