//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDSampleListDataProvider.h"

@interface WDStationaryDiscordanceListDataProvider : WDSampleListDataProvider
{
}

- (id)_minMaxHeartStringForHeartRates:(id)arg1;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (id)dataListViewController:(id)arg1 titleForSection:(unsigned long long)arg2;
- (id)customCellForObject:(id)arg1 viewController:(id)arg2 tableView:(id)arg3;
- (double)customEstimatedCellHeight;
- (double)customCellHeight;
- (long long)cellStyleForDataListViewController:(id)arg1;
- (id)sampleTypes;

@end
