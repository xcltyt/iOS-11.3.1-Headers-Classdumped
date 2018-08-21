/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRMutableStateBase.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary, NRMutableDevice, NSUUID;

@interface NRMutableDeviceCollection : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {

	NSMutableDictionary* _deviceCollection;
	NSMutableDictionary* _childMap;

}

@property (nonatomic,retain) NSMutableDictionary * deviceCollection;              //@synthesize deviceCollection=_deviceCollection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * childMap;                      //@synthesize childMap=_childMap - In the implementation block
@property (nonatomic,readonly) NRMutableDevice * activeDevice; 
@property (nonatomic,retain) NSUUID * activeDeviceID; 
@property (getter=paired,nonatomic,readonly) BOOL isPaired; 
+(BOOL)supportsSecureCoding;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allPairingIDs;
-(void)setActiveDeviceID:(NSUUID *)arg1 ;
-(NSUUID *)activeDeviceID;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(NSMutableDictionary *)deviceCollection;
-(id)_diffsToChangeActiveDeviceToDeviceID:(id)arg1 ;
-(void)setDevice:(id)arg1 forPairingID:(id)arg2 ;
-(void)removeDeviceForPairingID:(id)arg1 ;
-(id)deviceForBluetoothID:(id)arg1 ;
-(void)setDeviceCollection:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)childMap;
-(void)setChildMap:(NSMutableDictionary *)arg1 ;
-(id)deviceForPairingID:(id)arg1 ;
-(NRMutableDevice *)activeDevice;
-(BOOL)paired;
@end
