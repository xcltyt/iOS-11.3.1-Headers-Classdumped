/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDMediaOutputDevice : HMFObject {

	void* _outputDevice;
	NSString* _uniqueIdentifier;
	NSString* _name;
	NSString* _modelID;

}

@property (assign,nonatomic) void* outputDevice;                                                 //@synthesize outputDevice=_outputDevice - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                                      //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * modelID;                                               //@synthesize modelID=_modelID - In the implementation block
@property (getter=isGroupable,nonatomic,readonly) BOOL groupable; 
@property (getter=isRemoteControllable,nonatomic,readonly) BOOL remoteControllable; 
@property (nonatomic,readonly) unsigned deviceType; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)uniqueIdentifier;
-(unsigned)deviceType;
-(void*)outputDevice;
-(NSString *)modelID;
-(id)initWithOutputDevice:(void*)arg1 ;
-(BOOL)isGroupable;
-(BOOL)isRemoteControllable;
-(BOOL)shouldCreateAppleMediaAccessory;
-(void)setOutputDevice:(void*)arg1 ;
@end
