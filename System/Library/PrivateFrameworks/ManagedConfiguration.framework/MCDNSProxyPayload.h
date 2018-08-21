/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSDictionary;

@interface MCDNSProxyPayload : MCPayload {

	NSString* _appBundleIdentifier;
	NSString* _providerBundleIdentifier;
	NSDictionary* _providerConfiguration;

}

@property (nonatomic,copy,readonly) NSDictionary * configurationDictionary; 
@property (nonatomic,copy,readonly) NSString * appBundleIdentifier;                      //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerBundleIdentifier;                 //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * providerConfiguration;                //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)installationWarnings;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSString *)providerBundleIdentifier;
-(NSDictionary *)providerConfiguration;
-(NSString *)appBundleIdentifier;
-(id)description;
-(NSDictionary *)configurationDictionary;
@end
