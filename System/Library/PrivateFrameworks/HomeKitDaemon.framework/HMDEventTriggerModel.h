/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTriggerModel.h>

@class NSData, NSNumber;

@interface HMDEventTriggerModel : HMDTriggerModel

@property (nonatomic,retain) NSData * evaluationCondition; 
@property (nonatomic,retain) NSData * recurrences; 
@property (nonatomic,retain) NSNumber * executeOnce; 
+(id)properties;
-(id)createPayload;
@end
