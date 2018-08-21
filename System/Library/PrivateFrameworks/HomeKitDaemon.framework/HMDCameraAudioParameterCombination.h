/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDAudioCodecGroup, HMDBitRateSetting, HMDAudioSampleRate, NSNumber;

@interface HMDCameraAudioParameterCombination : HMFObject {

	HMDAudioCodecGroup* _codecGroupType;
	HMDBitRateSetting* _bitrateSetting;
	HMDAudioSampleRate* _sampleRate;
	NSNumber* _maximumBitrate;
	NSNumber* _minimumBitrate;
	NSNumber* _rtcpInterval;
	NSNumber* _rtpPTime;

}

@property (nonatomic,readonly) HMDAudioCodecGroup * codecGroupType;              //@synthesize codecGroupType=_codecGroupType - In the implementation block
@property (nonatomic,readonly) HMDBitRateSetting * bitrateSetting;               //@synthesize bitrateSetting=_bitrateSetting - In the implementation block
@property (nonatomic,readonly) HMDAudioSampleRate * sampleRate;                  //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumBitrate;                        //@synthesize maximumBitrate=_maximumBitrate - In the implementation block
@property (nonatomic,readonly) NSNumber * minimumBitrate;                        //@synthesize minimumBitrate=_minimumBitrate - In the implementation block
@property (nonatomic,readonly) NSNumber * rtcpInterval;                          //@synthesize rtcpInterval=_rtcpInterval - In the implementation block
@property (nonatomic,readonly) NSNumber * rtpPTime;                              //@synthesize rtpPTime=_rtpPTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(HMDAudioSampleRate *)sampleRate;
-(HMDBitRateSetting *)bitrateSetting;
-(NSNumber *)minimumBitrate;
-(NSNumber *)rtcpInterval;
-(NSNumber *)maximumBitrate;
-(id)initWithCodecGroup:(id)arg1 bitrateSetting:(id)arg2 sampleRate:(id)arg3 ;
-(NSNumber *)rtpPTime;
-(id)initWithCodecGroup:(id)arg1 bitrateSetting:(id)arg2 sampleRate:(id)arg3 maximumBitrate:(id)arg4 minimumBitrate:(id)arg5 rtcpInterval:(id)arg6 rtpPtime:(id)arg7 ;
-(HMDAudioCodecGroup *)codecGroupType;
@end
