/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VVCarrierParameters : NSObject {

	NSDictionary* _parameterValues;

}
+(id)retryIntervals;
+(id)carrierServiceName;
+(BOOL)supportsGreetingChanges;
+(BOOL)supportsPasswordChanges;
+(BOOL)ignoresRoamingSwitch;
+(id)messageNotificationFallbackTimeout;
+(BOOL)supportsDetachedStorage;
-(id)parameterValueForKey:(id)arg1 ;
-(id)initForService:(id)arg1 ;
-(void)_initForBundle:(id)arg1 ;
-(id)initForServiceBundleId:(id)arg1 ;
@end
