/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface VSIdentityProviderFilter : NSObject {

	NSArray* _allIdentityProviders;
	NSArray* _supportedAccountProviderIDs;
	NSString* _searchQuery;

}

@property (nonatomic,copy) NSArray * allIdentityProviders;                            //@synthesize allIdentityProviders=_allIdentityProviders - In the implementation block
@property (nonatomic,copy) NSArray * supportedAccountProviderIDs;                     //@synthesize supportedAccountProviderIDs=_supportedAccountProviderIDs - In the implementation block
@property (nonatomic,copy) NSString * searchQuery;                                    //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filteredIdentityProviders; 
+(id)keyPathsForValuesAffectingFilteredIdentityProviders;
-(NSString *)searchQuery;
-(id)init;
-(void)setSearchQuery:(NSString *)arg1 ;
-(NSArray *)allIdentityProviders;
-(NSArray *)supportedAccountProviderIDs;
-(NSArray *)filteredIdentityProviders;
-(void)setAllIdentityProviders:(NSArray *)arg1 ;
-(void)setSupportedAccountProviderIDs:(NSArray *)arg1 ;
@end
