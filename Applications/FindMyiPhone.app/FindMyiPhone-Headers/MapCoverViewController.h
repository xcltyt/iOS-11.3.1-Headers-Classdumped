//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMIPViewController.h"

#import "FMMapGestureRecognizerDelegate.h"

@class NSString;

@interface MapCoverViewController : FMIPViewController <FMMapGestureRecognizerDelegate>
{
    id <FMMapGestureRecognizerDelegate> _delegate;
}

@property(nonatomic) __weak id <FMMapGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

