//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIViewController;

@protocol BCSActionDelegate <NSObject>

@optional
- (NSArray *)actionPickerItemsForAction:(id <BCSAction>)arg1 proposedItems:(NSArray *)arg2;
- (struct CGRect)sourceRectForPopoverActionPicker:(id <BCSAction>)arg1;
- (UIViewController *)presentingViewControllerForAction:(id <BCSAction>)arg1;
@end

