/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDHome, HMHomeInvitationData, HMFTimer, NSArray, NSUUID, NSDate, NSString;

@interface HMDHomeInvitation : HMFObject <HMFTimerDelegate, NSSecureCoding> {

	long long _invitationState;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDHome* _home;
	HMHomeInvitationData* _invitationData;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _resolutionHandler;
	/*^block*/id _expirationHandler;
	HMFTimer* _timer;
	NSArray* _operations;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                     //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMHomeInvitationData * invitationData;                     //@synthesize invitationData=_invitationData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                  //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) id resolutionHandler;                                        //@synthesize resolutionHandler=_resolutionHandler - In the implementation block
@property (nonatomic,copy) id expirationHandler;                                        //@synthesize expirationHandler=_expirationHandler - In the implementation block
@property (nonatomic,retain) HMFTimer * timer;                                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSArray * operations;                                      //@synthesize operations=_operations - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (assign,nonatomic) long long invitationState;                                 //@synthesize invitationState=_invitationState - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@property (getter=isAccepted,nonatomic,readonly) BOOL accepted; 
@property (getter=isDeclined,nonatomic,readonly) BOOL declined; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)_clearTimer;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(HMFTimer *)timer;
-(void)setTimer:(HMFTimer *)arg1 ;
-(void)setOperations:(NSArray *)arg1 ;
-(NSArray *)operations;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(long long)invitationState;
-(BOOL)isPending;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)isExpired;
-(void)timerDidFire:(id)arg1 ;
-(void)_configureTimer;
-(id)initWithCoder:(id)arg1 invitationData:(id)arg2 ;
-(id)initWithInvitationData:(id)arg1 forHome:(id)arg2 ;
-(HMHomeInvitationData *)invitationData;
-(void)expire;
-(void)setInvitationState:(long long)arg1 ;
-(id)resolutionHandler;
-(id)expirationHandler;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setResolutionHandler:(id)arg1 ;
-(void)setExpirationHandler:(id)arg1 ;
-(void)_resolve:(BOOL)arg1 ;
-(void)updateInvitationState:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)refreshDisplayName;
-(BOOL)isAccepted;
-(BOOL)isDeclined;
-(void)updateTimer:(unsigned long long)arg1 clientQueue:(id)arg2 ;
-(void)accept;
-(void)decline;
-(id)describeWithFormat;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setInvitationData:(HMHomeInvitationData *)arg1 ;
@end
