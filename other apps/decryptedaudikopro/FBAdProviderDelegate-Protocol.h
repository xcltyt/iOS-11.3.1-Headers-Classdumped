//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdProviderResponseAds, FBAdSourceRequest, NSError;

@protocol FBAdProviderDelegate <NSObject>
- (void)onAdRequestError:(NSError *)arg1;
- (void)onAdRequestSuccess:(FBAdProviderResponseAds *)arg1;

@optional
- (void)onAdSourceRequestError:(FBAdSourceRequest *)arg1;
@end
