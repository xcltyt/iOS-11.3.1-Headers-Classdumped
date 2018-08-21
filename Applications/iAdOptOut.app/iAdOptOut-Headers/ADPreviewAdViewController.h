//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

@class NSMutableArray, NSString, NSURL, UIActivityIndicatorView;

@interface ADPreviewAdViewController : UICollectionViewController
{
    NSString *_sourceApplication;
    UIActivityIndicatorView *_activityIndicator;
    NSURL *_URL;
    NSMutableArray *_data;
    double _bannerHeight;
    double _bannerWidth;
}

@property(nonatomic) double bannerWidth; // @synthesize bannerWidth=_bannerWidth;
@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
- (void)moveToCenter;
- (void)_prepareData:(double)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)_closeApplication;
- (void)_serverSetupDidFinishNotification:(id)arg1;
- (void)_bannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)_bannerViewActionDidFinish:(id)arg1;
- (void)_bannerViewDidLoadAd:(id)arg1;
- (id)_previewCollectionView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initWithURL:(id)arg1;

@end

