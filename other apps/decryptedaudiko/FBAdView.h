//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBDisplayAdControllerDelegate-Protocol.h"

@class FBDisplayAdAdapter, FBDisplayAdController, NSString, UIViewController;
@protocol FBAdViewDelegate;

@interface FBAdView : UIView <FBDisplayAdControllerDelegate>
{
    _Bool _initialized;
    NSString *_placementID;
    UIViewController *_rootViewController;
    id <FBAdViewDelegate> _delegate;
    UIView *_adView;
    FBDisplayAdController *_adController;
    FBDisplayAdAdapter *_adapter;
    struct FBAdSize _adSize;
    struct CGSize _actualAdSize;
}

@property(nonatomic) struct CGSize actualAdSize; // @synthesize actualAdSize=_actualAdSize;
@property(retain, nonatomic) FBDisplayAdAdapter *adapter; // @synthesize adapter=_adapter;
@property(nonatomic, getter=isInitialized) _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic) struct FBAdSize adSize; // @synthesize adSize=_adSize;
@property(retain, nonatomic) FBDisplayAdController *adController; // @synthesize adController=_adController;
@property(nonatomic) __weak UIView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak id <FBAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
- (void).cxx_destruct;
- (void)onAdUserClose;
- (void)onAdClickThruWithURL:(id)arg1 playerHandles:(_Bool)arg2;
- (void)onAdImpression;
- (void)onAdError:(id)arg1;
- (void)onAdStopped;
- (void)onAdLoaded;
- (void)onAdViewPresented:(id)arg1;
- (void)updateInitialAdViewSize:(struct FBAdSize)arg1;
- (void)clearSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isAdValid;
- (void)disableAutoRefresh;
- (void)loadAd;
- (id)initWithPlacementID:(id)arg1 adSize:(struct FBAdSize)arg2 rootViewController:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
