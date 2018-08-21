/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RMSService : NSObject {

	int _port;
	NSString* _displayName;
	NSString* _networkName;
	NSString* _hostName;
	long long _serviceType;
	long long _serviceDiscoverySource;
	long long _serviceFlags;
	NSString* _homeSharingGroupKey;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * networkName;                        //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,retain) NSString * hostName;                           //@synthesize hostName=_hostName - In the implementation block
@property (assign,nonatomic) int port;                                      //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) long long serviceType;                         //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) long long serviceDiscoverySource;              //@synthesize serviceDiscoverySource=_serviceDiscoverySource - In the implementation block
@property (assign,nonatomic) long long serviceFlags;                        //@synthesize serviceFlags=_serviceFlags - In the implementation block
@property (nonatomic,retain) NSString * homeSharingGroupKey;                //@synthesize homeSharingGroupKey=_homeSharingGroupKey - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)servicesFromProtobufs:(id)arg1 ;
+(id)protobufsFromServices:(id)arg1 ;
-(NSString *)hostName;
-(void)setDisplayName:(NSString *)arg1 ;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(int)port;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)protobuf;
-(BOOL)isEqualToService:(id)arg1 ;
-(void)setPort:(int)arg1 ;
-(long long)serviceDiscoverySource;
-(long long)serviceFlags;
-(NSString *)homeSharingGroupKey;
-(void)setServiceDiscoverySource:(long long)arg1 ;
-(void)setServiceFlags:(long long)arg1 ;
-(void)setHomeSharingGroupKey:(NSString *)arg1 ;
-(BOOL)isLegacyAppleTV;
-(BOOL)isMediaRemoteSupported;
-(void)setHostName:(NSString *)arg1 ;
@end
