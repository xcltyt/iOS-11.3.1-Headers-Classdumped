/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSData;

@interface HMDeviceSetupResponseMessage : TRResponseMessage {

	NSData* _payload;

}

@property (nonatomic,copy,readonly) NSData * payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)payload;
-(id)initWithPayload:(id)arg1 ;
@end
