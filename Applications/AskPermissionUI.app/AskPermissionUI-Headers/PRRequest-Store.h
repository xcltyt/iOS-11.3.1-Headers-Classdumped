//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PRRequest.h"

@class NSString, NSURL;

@interface PRRequest (Store)
@property(readonly) _Bool isSandboxRequest;
@property(readonly) NSURL *storePreviewURL;
@property(readonly) NSString *priceString;
@property(readonly) NSString *contentTypeString;
@property(readonly) _Bool isFree;
@property(readonly) _Bool isiCloudStorage;
@property(readonly) _Bool isMovieRental;
@property(readonly) _Bool isInAppPurchase;
@property(readonly) NSString *storeName;
- (id)initWithStoreMetadata:(id)arg1;
@end

