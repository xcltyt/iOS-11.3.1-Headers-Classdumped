//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSURL, SAUIAddViews, UIViewController;

@protocol AFUIDebugControllerDelegate
- (void)debugController:(id <AFUIDebugControlling>)arg1 openURL:(NSURL *)arg2;
- (void)getScreenshotImageForDebugController:(id <AFUIDebugControlling>)arg1 withCompletion:(void (^)(UIImage *))arg2;
- (void)debugController:(id <AFUIDebugControlling>)arg1 wantsDismissViewController:(UIViewController *)arg2;
- (void)debugController:(id <AFUIDebugControlling>)arg1 wantsPresentViewController:(UIViewController *)arg2;
- (UIViewController *)presentedViewControllerForDebugController;
- (void)debugController:(id <AFUIDebugControlling>)arg1 stateDidChangeWithAddViews:(SAUIAddViews *)arg2;
@end

