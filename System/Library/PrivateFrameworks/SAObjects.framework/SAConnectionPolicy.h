/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString, NSArray;

@interface SAConnectionPolicy : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * enableTLS13; 
@property (nonatomic,copy) NSNumber * enableTLS13ZeroRTT; 
@property (nonatomic,copy) NSNumber * enableTcpFastOpen; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSNumber * globalTimeout; 
@property (nonatomic,copy) NSNumber * mptcpFallbackPort; 
@property (nonatomic,copy) NSString * policyId; 
@property (nonatomic,copy) NSArray * routes; 
@property (nonatomic,copy) NSNumber * timeToLive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionPolicy;
+(id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)routes;
-(void)setRoutes:(NSArray *)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)encodedClassName;
-(NSNumber *)enableTLS13;
-(void)setEnableTLS13:(NSNumber *)arg1 ;
-(NSNumber *)enableTLS13ZeroRTT;
-(void)setEnableTLS13ZeroRTT:(NSNumber *)arg1 ;
-(NSNumber *)enableTcpFastOpen;
-(void)setEnableTcpFastOpen:(NSNumber *)arg1 ;
-(NSNumber *)globalTimeout;
-(void)setGlobalTimeout:(NSNumber *)arg1 ;
-(NSNumber *)mptcpFallbackPort;
-(void)setMptcpFallbackPort:(NSNumber *)arg1 ;
-(NSString *)policyId;
-(void)setPolicyId:(NSString *)arg1 ;
-(NSNumber *)timeToLive;
-(void)setTimeToLive:(NSNumber *)arg1 ;
@end
