/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, SALocation, NSString, NSNumber;

@interface SALocalSearchVehicleEvent : SADomainObject

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSNumber * userSetLocation; 
@property (nonatomic,copy) NSString * vehicleIdentifier; 
+(id)vehicleEvent;
+(id)vehicleEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)vehicleIdentifier;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(id)encodedClassName;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(NSNumber *)userSetLocation;
-(void)setUserSetLocation:(NSNumber *)arg1 ;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
@end
