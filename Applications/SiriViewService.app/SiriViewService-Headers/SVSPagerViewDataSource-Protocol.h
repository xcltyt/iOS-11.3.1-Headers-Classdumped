//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SVSPagerView, UIView;

@protocol SVSPagerViewDataSource <NSObject>
- (UIView *)pagerView:(SVSPagerView *)arg1 pageViewAtIndex:(long long)arg2;
- (long long)numberOfPageViewsInPagerView:(SVSPagerView *)arg1;
@end

