/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection;

@interface MPAVEndpointRoute : MPAVRoute {

	MPAVRouteConnection* _connection;
	void* _endpoint;

}

@property (nonatomic,readonly) void* endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)getActiveEndpointRouteWithCompletion:(/*^block*/id)arg1 ;
-(long long)routeType;
-(id)routeNames;
-(id)initWithEndpoint:(void*)arg1 ;
-(id)routeName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)connection;
-(void*)endpoint;
-(long long)routeSubtype;
-(id)routeUID;
-(BOOL)canAccessRemoteAssets;
-(BOOL)isAppleTVRoute;
-(BOOL)isHomePodRoute;
-(BOOL)isDeviceRoute;
-(BOOL)isStereoPair;
-(BOOL)supportsGrouping;
-(BOOL)isDeviceSpeakerRoute;
-(id)designatedGroupLeaderName;
-(BOOL)isAirPlayingToDevice;
-(BOOL)isProxyGroupPlayer;
-(BOOL)supportsRemoteControl;
-(BOOL)isRoutingToWirelessDevice;
-(void)_endpointOutputDevicesDidChange:(id)arg1 ;
-(unsigned long long)_outputDevicesComposition;
-(id)groupUID;
@end

