//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADSActionViewController.h"

#import "SKStoreProductViewControllerDelegate.h"

@class NSString, SKStoreProductViewController;

@interface ADSiTunesActionViewController : ADSActionViewController <SKStoreProductViewControllerDelegate>
{
    int _defaultResult;
    SKStoreProductViewController *_storeProductViewController;
}

@property(nonatomic) int defaultResult; // @synthesize defaultResult=_defaultResult;
@property(retain, nonatomic) SKStoreProductViewController *storeProductViewController; // @synthesize storeProductViewController=_storeProductViewController;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpaceController;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

