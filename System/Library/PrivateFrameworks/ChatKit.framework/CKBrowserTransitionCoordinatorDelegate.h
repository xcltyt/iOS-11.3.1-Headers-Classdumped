/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKBrowserTransitionCoordinatorDelegate <NSObject>
@optional
-(void)browserTransitionCoordinator:(id)arg1 expandedStateDidChange:(BOOL)arg2 withReason:(long long)arg3;
-(void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinator:(id)arg1 browserWillBecomeInactive:(id)arg2;
-(void)browserTransitionCoordinator:(id)arg1 didTransitionFromOrientation:(long long)arg2 toOrientation:(long long)arg3;
-(void)browserTransitionCoordinator:(id)arg1 didSwitchToPlugin:(id)arg2;
-(void)browserTransitionCoordinator:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
-(CGRect*)browserTransitionCoordinator:(id)arg1 preferredFrameForBrowser:(id)arg2;
-(void)browserTransitionCoordinatorWantsPresentationOfAppStore:(id)arg1;
-(void)browserTransitionCoordinatorWantsPresentationOfAppManager:(id)arg1;
-(id)appGrabberForBrowserTransitionCoordinator:(id)arg1;
-(void)reinsertAppGrabberViewForBrowserTransitionCoordinator:(id)arg1;
-(id)switcherFooterViewForBrowserTransitionCoordinator:(id)arg1;
-(void)reinsertSwitcherFooterViewForBrowserTransitionCoordinator:(id)arg1;
-(CGRect*)cachedCompactFrameInWindowCoordsForBrowserTransitionCoordinator:(id)arg1;

@end
