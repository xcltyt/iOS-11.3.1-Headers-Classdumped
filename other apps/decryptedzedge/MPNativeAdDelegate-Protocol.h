//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPNativeAd, UIViewController;

@protocol MPNativeAdDelegate <NSObject>
- (UIViewController *)viewControllerForPresentingModalView;

@optional
- (void)willLeaveApplicationFromNativeAd:(MPNativeAd *)arg1;
- (void)didDismissModalForNativeAd:(MPNativeAd *)arg1;
- (void)willPresentModalForNativeAd:(MPNativeAd *)arg1;
@end
