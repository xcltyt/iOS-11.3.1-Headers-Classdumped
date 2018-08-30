//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKProductsRequestDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MAInAppPurchaseDelegateProtocol;

@interface MAInAppPurchaseController : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    NSMutableArray *_productRequests;
    NSMutableArray *_restoreTransactionFinishingBlocks;
    NSMutableDictionary *_paymentTransactionFinishingBlockDictionary;
    NSMutableDictionary *_productAvailability;
    NSMutableSet *_restoredProducts;
    id <MAInAppPurchaseDelegateProtocol> _delegate;
    _Bool _paymentQueueRegistered;
}

+ (id)sharedController;
@property(nonatomic) __weak id <MAInAppPurchaseDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)paymentQueue:(id)arg1 updatedDownloads:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (id)restoreDidFinishWithError:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)receiptRefreshFinished;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)refreshReceiptWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)restoreProductsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)purchaseProduktWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)logAppStoreAction:(unsigned long long)arg1 anyObject:(id)arg2;
- (id)asaStringForID:(unsigned long long)arg1;
- (_Bool)alreadyDownloadingProduct:(id)arg1;
- (_Bool)alreadyProcessingProduct:(id)arg1;
- (void)_storeActionCompletionWithState:(long long)arg1 forProducts:(id)arg2 error:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_requestDictForRequest:(id)arg1;
- (_Bool)isInternetReacheable;
- (_Bool)hasValidReceipt;
- (_Bool)validateProduct:(id)arg1;
- (void)registerPaymentQueue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

