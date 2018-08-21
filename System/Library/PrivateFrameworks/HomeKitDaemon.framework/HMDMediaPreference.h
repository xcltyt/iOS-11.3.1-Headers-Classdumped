/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDPreference.h>
#import <libobjc.A.dylib/HMFObject.h>

@class NSString, HMDSystemPreference, HMDPreference;

@interface HMDMediaPreference : HMDPreference <HMFObject> {

	HMDSystemPreference* _homeKitPreference;

}

@property (copy,readonly) HMDPreference * appleMediaPreference; 
@property (copy,readonly) HMDPreference * airPlay2Preference; 
@property (readonly) HMDSystemPreference * homeKitPreference;                //@synthesize homeKitPreference=_homeKitPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * propertyDescription; 
+(void)load;
-(BOOL)boolValue;
-(id)stringValue;
-(id)numberValue;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(HMDSystemPreference *)homeKitPreference;
-(HMDPreference *)appleMediaPreference;
-(HMDPreference *)airPlay2Preference;
-(NSString *)propertyDescription;
@end
