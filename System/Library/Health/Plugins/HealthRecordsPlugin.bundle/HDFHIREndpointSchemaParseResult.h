/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface HDFHIREndpointSchemaParseResult : NSObject {

	NSDictionary* _authorizationSchemas;
	NSArray* _resourceSchemas;

}

@property (nonatomic,copy) NSDictionary * authorizationSchemas;              //@synthesize authorizationSchemas=_authorizationSchemas - In the implementation block
@property (nonatomic,copy) NSArray * resourceSchemas;                        //@synthesize resourceSchemas=_resourceSchemas - In the implementation block
-(NSArray *)resourceSchemas;
-(void)setAuthorizationSchemas:(NSDictionary *)arg1 ;
-(void)setResourceSchemas:(NSArray *)arg1 ;
-(NSDictionary *)authorizationSchemas;
@end
