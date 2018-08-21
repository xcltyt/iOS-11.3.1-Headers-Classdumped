/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAssistantAccessControl.h>

@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (getter=isEnabled) BOOL enabled; 
@property (assign) unsigned long long options; 
@property (copy) NSArray * accessories; 
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(void)removeAccessory:(id)arg1 ;
-(NSArray *)accessories;
-(void)addAccessory:(id)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
@end
