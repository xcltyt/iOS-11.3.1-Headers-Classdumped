//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CbArrangeTrackViewController, UIColor, UIPanGestureRecognizer, UIView;

@protocol CbArrangeTrackViewControllerDelegate
- (_Bool)trackControllerShouldIgnoreGestures;
- (UIView *)trackControllerGetHeaderContainerViewForCtrl:(CbArrangeTrackViewController *)arg1;
- (CDStruct_3a9866bf *)trackControllerGetArrangeBackgroundGridLineInfo;
- (void)trackControllerUpdateHelpOverlay:(CbArrangeTrackViewController *)arg1;
- (_Bool)trackControllerIsAnyTouchActiveInTheWholeArrange:(CbArrangeTrackViewController *)arg1;
- (void)trackControllerWillHandleSingleTap:(CbArrangeTrackViewController *)arg1;
- (void)trackControllerWillHandleDoubleTap:(CbArrangeTrackViewController *)arg1;
- (void)trackControllerCloseRegionRenameMode:(CbArrangeTrackViewController *)arg1 animated:(_Bool)arg2;
- (void)trackControllerCloseTrackRenameMode:(CbArrangeTrackViewController *)arg1 animated:(_Bool)arg2;
- (struct CGRect)trackController:(CbArrangeTrackViewController *)arg1 getEditorEditMenuFrameForEditorObjectFrame:(struct CGRect)arg2 inView:(UIView *)arg3;
- (void)trackController:(CbArrangeTrackViewController *)arg1 editorObject:(id)arg2 wasReplacedWithObject:(id)arg3;
- (void)trackController:(CbArrangeTrackViewController *)arg1 setVerticalGuideLineClock:(long long)arg2;
- (void)trackController:(CbArrangeTrackViewController *)arg1 setWantsVerticalGuideLine:(_Bool)arg2 withColor:(UIColor *)arg3;
- (void)trackController:(CbArrangeTrackViewController *)arg1 editorHasNewSelectionLeftClock:(long long)arg2 rightClock:(long long)arg3;
- (void)trackControllerCloseTrackRegionEditor:(CbArrangeTrackViewController *)arg1;
- (void)trackControllerTrackChosenFlagDidChange:(CbArrangeTrackViewController *)arg1;
- (void)trackControllerOpenTrackInputMenu:(CbArrangeTrackViewController *)arg1;
- (void)trackControllerOpenTrackEditMenu:(CbArrangeTrackViewController *)arg1;
- (void)trackController:(CbArrangeTrackViewController *)arg1 muteButtonPanGestureAction:(UIPanGestureRecognizer *)arg2;
- (void)trackController:(CbArrangeTrackViewController *)arg1 soloButtonPanGestureAction:(UIPanGestureRecognizer *)arg2;
- (double)trackControllerGetAllTacksHeight:(CbArrangeTrackViewController *)arg1;
- (void)trackControllerTrackDropped:(CbArrangeTrackViewController *)arg1 deleteTrack:(_Bool)arg2;
- (void)trackControllerTrackMoved:(CbArrangeTrackViewController *)arg1;
- (void)trackControllerWillBeginTrackReordering:(CbArrangeTrackViewController *)arg1;
- (_Bool)trackControllerShouldBeginTrackReordering:(CbArrangeTrackViewController *)arg1;
@end

