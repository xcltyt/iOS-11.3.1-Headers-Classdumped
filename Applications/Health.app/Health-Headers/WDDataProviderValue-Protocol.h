//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKDateCache, HKDisplayType, HKUnitPreferenceController, NSAttributedString, NSDate, NSString, UIFont;

@protocol WDDataProviderValue <NSObject>
- (NSAttributedString *)attributedStringWithDisplayType:(HKDisplayType *)arg1 unitController:(HKUnitPreferenceController *)arg2 valueFont:(UIFont *)arg3 unitFont:(UIFont *)arg4 dateCache:(HKDateCache *)arg5;

@optional
- (NSString *)stringWithDisplayType:(HKDisplayType *)arg1 unitController:(HKUnitPreferenceController *)arg2;
- (NSString *)contextualDescriptionWithDateCache:(HKDateCache *)arg1;
- (NSDate *)date;
@end

