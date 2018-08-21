//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SBFDeviceBlockTimer;

@interface PBADeviceBlockOverlayViewController : UIViewController
{
    id <PBADeviceBlockOverlayViewControllerDelegate> _delegate;
    SBFDeviceBlockTimer *_blockTimer;
    id <SBFBlockStatusProvider> _blockStatusProvider;
}

@property(retain, nonatomic) id <SBFBlockStatusProvider> blockStatusProvider; // @synthesize blockStatusProvider=_blockStatusProvider;
@property(retain, nonatomic) SBFDeviceBlockTimer *blockTimer; // @synthesize blockTimer=_blockTimer;
@property(nonatomic) __weak id <PBADeviceBlockOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)overlayView;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithBlockStatusProvider:(id)arg1;

@end

