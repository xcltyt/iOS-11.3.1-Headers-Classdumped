//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDPortraitDataProvider.h"

@interface WDCumulativeSumCurrentValueDataProvider : WDPortraitDataProvider
{
}

- (void)_sumFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentValue;

@end

