/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSMutableArray, NSArray;

@interface QuotaAppDetailsResponse : AAResponse {

	NSMutableArray* _apps;

}

@property (nonatomic,readonly) NSArray * apps;              //@synthesize apps=_apps - In the implementation block
-(id)description;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSArray *)apps;
-(void)addApps:(id)arg1 ;
@end
