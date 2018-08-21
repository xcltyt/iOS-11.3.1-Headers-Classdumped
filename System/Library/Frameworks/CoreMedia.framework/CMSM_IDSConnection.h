/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, IDSDevice, NSString;

@interface CMSM_IDSConnection : NSObject <IDSServiceDelegate> {

	IDSService* pIdsService;
	NSObject*<OS_dispatch_queue> idsDispatchQueue;
	IDSDevice* pNearbyPairedDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateNearbyPairedDevice;
-(id)getNearbyPairedDevice;
-(id)copyNearbyPairedDeviceUniqueID;
-(id)copyNearbyPairedDeviceName;
-(id)copyNearbyPairedDeviceModelIdentifier;
-(id)copyNearbyPairedDeviceProductName;
-(id)init;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
@end
