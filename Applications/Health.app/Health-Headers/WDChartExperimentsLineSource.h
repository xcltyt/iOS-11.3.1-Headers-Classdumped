//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKGraphSeriesDataSource.h"

@class NSArray;

@interface WDChartExperimentsLineSource : HKGraphSeriesDataSource
{
    NSArray *_chartPoints;
}

@property(readonly, nonatomic) NSArray *chartPoints; // @synthesize chartPoints=_chartPoints;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(CDStruct_912cb5d2)arg1 context:(id)arg2;
- (id)_chartPointsFromDataSpec:(id)arg1;
- (id)initWithData:(id)arg1;

@end

