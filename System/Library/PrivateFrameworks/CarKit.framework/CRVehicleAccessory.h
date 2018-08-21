/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSArray, NSNumber, EAAccessory;

@interface CRVehicleAccessory : NSObject {

	BOOL _supportsUSBCarPlay;
	BOOL _supportsWirelessCarPlay;
	BOOL _supportsWiredBluetoothPairing;
	NSString* _vehicleName;
	NSData* _certificateSerialNumber;
	NSArray* _accessoryProtocols;
	NSString* _bluetoothAddress;
	NSNumber* _connectionID;
	EAAccessory* _accessory;

}

@property (nonatomic,retain) NSString * vehicleName;                          //@synthesize vehicleName=_vehicleName - In the implementation block
@property (nonatomic,retain) NSData * certificateSerialNumber;                //@synthesize certificateSerialNumber=_certificateSerialNumber - In the implementation block
@property (nonatomic,retain) NSArray * accessoryProtocols;                    //@synthesize accessoryProtocols=_accessoryProtocols - In the implementation block
@property (nonatomic,retain) NSString * bluetoothAddress;                     //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,retain) NSNumber * connectionID;                         //@synthesize connectionID=_connectionID - In the implementation block
@property (assign,nonatomic) BOOL supportsUSBCarPlay;                         //@synthesize supportsUSBCarPlay=_supportsUSBCarPlay - In the implementation block
@property (assign,nonatomic) BOOL supportsWirelessCarPlay;                    //@synthesize supportsWirelessCarPlay=_supportsWirelessCarPlay - In the implementation block
@property (assign,nonatomic) BOOL supportsWiredBluetoothPairing;              //@synthesize supportsWiredBluetoothPairing=_supportsWiredBluetoothPairing - In the implementation block
@property (assign,nonatomic,__weak) EAAccessory * accessory;                  //@synthesize accessory=_accessory - In the implementation block
-(id)radarDescription;
-(NSNumber *)connectionID;
-(void)setConnectionID:(NSNumber *)arg1 ;
-(id)description;
-(id)displayName;
-(NSString *)bluetoothAddress;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(NSString *)vehicleName;
-(NSData *)certificateSerialNumber;
-(void)setCertificateSerialNumber:(NSData *)arg1 ;
-(void)setVehicleName:(NSString *)arg1 ;
-(void)setAccessoryProtocols:(NSArray *)arg1 ;
-(NSArray *)accessoryProtocols;
-(BOOL)isBluetoothConnected;
-(id)analyticsDescription;
-(void)beginWiredBluetoothPairing:(/*^block*/id)arg1 ;
-(void)requestWiFiCredentials;
-(void)sendDeviceTransportIdentifiers;
-(BOOL)supportsUSBCarPlay;
-(void)setSupportsUSBCarPlay:(BOOL)arg1 ;
-(BOOL)supportsWirelessCarPlay;
-(void)setSupportsWirelessCarPlay:(BOOL)arg1 ;
-(BOOL)supportsWiredBluetoothPairing;
-(void)setSupportsWiredBluetoothPairing:(BOOL)arg1 ;
-(BOOL)_updateName;
-(EAAccessory *)accessory;
-(void)setAccessory:(EAAccessory *)arg1 ;
@end
