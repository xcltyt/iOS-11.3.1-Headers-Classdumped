//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MoPub/MPBannerCustomEvent.h>

#import "FBAdViewDelegate-Protocol.h"

@class FBAdView, NSString;

@interface FacebookBannerCustomEvent : MPBannerCustomEvent <FBAdViewDelegate>
{
    FBAdView *_fbAdView;
}

@property(retain, nonatomic) FBAdView *fbAdView; // @synthesize fbAdView=_fbAdView;
- (void).cxx_destruct;
- (id)viewControllerForPresentingModalView;
- (void)adViewDidFinishHandlingClick:(id)arg1;
- (void)adViewDidClick:(id)arg1;
- (void)adViewDidLoad:(id)arg1;
- (void)adView:(id)arg1 didFailWithError:(id)arg2;
- (void)dealloc;
- (void)requestAdWithSize:(struct CGSize)arg1 customEventInfo:(id)arg2;
- (_Bool)enableAutomaticImpressionAndClickTracking;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

