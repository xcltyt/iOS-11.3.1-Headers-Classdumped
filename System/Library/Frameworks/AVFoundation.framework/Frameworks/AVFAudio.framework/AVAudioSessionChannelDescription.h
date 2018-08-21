/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString;

@interface AVAudioSessionChannelDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * channelName; 
@property (readonly) NSString * owningPortUID; 
@property (readonly) unsigned long long channelNumber; 
@property (readonly) unsigned channelLabel; 
+(id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned)arg3 ;
+(id)privateCreateArray:(id)arg1 portUID:(id)arg2 ;
-(ChannelDescriptionImpl*)privateGetImplementation;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(NSString *)channelName;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)owningPortUID;
-(unsigned long long)channelNumber;
-(unsigned)channelLabel;
@end
