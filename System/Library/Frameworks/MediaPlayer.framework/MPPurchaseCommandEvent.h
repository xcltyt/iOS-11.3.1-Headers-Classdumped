/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSNumber, NSString;

@interface MPPurchaseCommandEvent : MPRemoteCommandEvent {

	long long _type;
	NSNumber* _trackID;
	NSString* _stationHash;
	NSNumber* _stationID;

}

@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSNumber * trackID;                  //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) NSString * stationHash;              //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) NSNumber * stationID;                //@synthesize stationID=_stationID - In the implementation block
-(NSNumber *)stationID;
-(long long)type;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(NSString *)stationHash;
-(NSNumber *)trackID;
@end
