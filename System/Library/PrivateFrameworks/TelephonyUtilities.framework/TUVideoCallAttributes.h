/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TUVideoCallAttributes : NSObject <NSSecureCoding> {

	long long _remoteCameraOrientation;
	long long _localVideoContextSlotIdentifier;
	long long _remoteVideoContextSlotIdentifier;

}

@property (assign,nonatomic) long long remoteCameraOrientation;                       //@synthesize remoteCameraOrientation=_remoteCameraOrientation - In the implementation block
@property (assign,nonatomic) long long localVideoContextSlotIdentifier;               //@synthesize localVideoContextSlotIdentifier=_localVideoContextSlotIdentifier - In the implementation block
@property (assign,nonatomic) long long remoteVideoContextSlotIdentifier;              //@synthesize remoteVideoContextSlotIdentifier=_remoteVideoContextSlotIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)remoteCameraOrientation;
-(long long)localVideoContextSlotIdentifier;
-(long long)remoteVideoContextSlotIdentifier;
-(BOOL)isEqualToVideoCallAttributes:(id)arg1 ;
-(void)setRemoteCameraOrientation:(long long)arg1 ;
-(void)setLocalVideoContextSlotIdentifier:(long long)arg1 ;
-(void)setRemoteVideoContextSlotIdentifier:(long long)arg1 ;
@end
