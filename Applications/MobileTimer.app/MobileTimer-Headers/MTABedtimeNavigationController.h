//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "MTABedtimeSetupDelegate.h"
#import "UIAdaptivePresentationControllerDelegate.h"

@class MTAAddSheetNavigationController, NSString;

@interface MTABedtimeNavigationController : UINavigationController <MTABedtimeSetupDelegate, UIAdaptivePresentationControllerDelegate>
{
    MTAAddSheetNavigationController *_presentedNavigationController;
}

@property(retain, nonatomic) MTAAddSheetNavigationController *presentedNavigationController; // @synthesize presentedNavigationController=_presentedNavigationController;
- (void).cxx_destruct;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)updateNavigationBarForTraitCollection:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)bedtimeSetupDidCancel;
- (void)bedtimeSetupDidCompleteWithSleepAlarm:(id)arg1;
- (void)presentBedtimeSetup;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

