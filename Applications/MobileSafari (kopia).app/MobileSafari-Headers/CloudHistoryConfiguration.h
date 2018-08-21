//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSCloudHistoryConfiguration.h"

@class NSArray, NSDictionary;

@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration
{
    NSArray *_assetsSortedByVersionNumber;
    NSDictionary *_remoteConfigurationDictionary;
    _Bool _fetchedAssetData;
}

+ (id)sharedConfiguration;
- (void).cxx_destruct;
- (_Bool)shouldUseLongLivedOperationsToSaveRecords;
- (void)_reloadConfigurationDataIfNecessary;
- (id)_cloudConfigurationAssetsSortedByVersionNumber;
- (id)remoteConfiguration;
- (id)platformBuiltInConfiguration;
- (id)init;

@end

