//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSNumber, WDChartPointAnnotation;

@protocol WDChartPoint <NSObject>
@property(retain, nonatomic) WDChartPointAnnotation *annotation;
@property(retain, nonatomic) id yValue;
@property(retain, nonatomic) NSDate *xValue;
- (NSNumber *)averageYValue;
- (NSNumber *)minYValue;
- (NSNumber *)maxYValue;
- (NSArray *)allYValues;
- (NSNumber *)yValueForKey:(id <NSCopying>)arg1;
@end

