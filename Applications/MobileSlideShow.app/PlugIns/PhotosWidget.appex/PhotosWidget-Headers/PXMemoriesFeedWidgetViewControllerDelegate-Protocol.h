//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, PXMemoriesFeedWidgetViewController;

@protocol PXMemoriesFeedWidgetViewControllerDelegate <NSObject>
- (void)availableNumberOfRowsDidChangeForMemoriesFeedWidgetViewController:(PXMemoriesFeedWidgetViewController *)arg1;
- (void)memoriesFeedWidgetViewController:(PXMemoriesFeedWidgetViewController *)arg1 openURL:(NSURL *)arg2;
- (unsigned long long)numberOfRowsVisibleForMemoriesFeedWidgetViewController:(PXMemoriesFeedWidgetViewController *)arg1;
- (struct CGSize)referenceSizeForMemoriesFeedWidgetViewController:(PXMemoriesFeedWidgetViewController *)arg1;
@end

