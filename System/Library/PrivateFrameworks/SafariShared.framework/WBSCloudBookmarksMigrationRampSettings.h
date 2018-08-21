/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet, NSString, NSDictionary;

@interface WBSCloudBookmarksMigrationRampSettings : NSObject {

	NSArray* _eligibleOperatingSystemVersionRanges;
	unsigned long long _gmMigrationPercent;
	unsigned long long _seedMigrationPercent;
	unsigned long long _internalMigrationPercent;
	NSSet* _whitelistedAccounts;
	NSString* _minimumMacSafariVersion;
	NSDictionary* _dictionaryRepresentation;

}

@property (nonatomic,readonly) NSArray * eligibleOperatingSystemVersionRanges;              //@synthesize eligibleOperatingSystemVersionRanges=_eligibleOperatingSystemVersionRanges - In the implementation block
@property (nonatomic,readonly) unsigned long long gmMigrationPercent;                       //@synthesize gmMigrationPercent=_gmMigrationPercent - In the implementation block
@property (nonatomic,readonly) unsigned long long seedMigrationPercent;                     //@synthesize seedMigrationPercent=_seedMigrationPercent - In the implementation block
@property (nonatomic,readonly) unsigned long long internalMigrationPercent;                 //@synthesize internalMigrationPercent=_internalMigrationPercent - In the implementation block
@property (nonatomic,readonly) NSSet * whitelistedAccounts;                                 //@synthesize whitelistedAccounts=_whitelistedAccounts - In the implementation block
@property (nonatomic,readonly) NSString * minimumMacSafariVersion;                          //@synthesize minimumMacSafariVersion=_minimumMacSafariVersion - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation;                     //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)eligibleOperatingSystemVersionRanges;
-(unsigned long long)gmMigrationPercent;
-(unsigned long long)internalMigrationPercent;
-(NSSet *)whitelistedAccounts;
-(NSString *)minimumMacSafariVersion;
-(unsigned long long)seedMigrationPercent;
@end
