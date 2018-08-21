//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SSSScreenshotContentOverlayController.h"

#import "AKControllerDelegateProtocol.h"

@class AKController, AKPageModelController, NSString, _SSSScreenshotAnnotationControllerAKOverlayContainerView;

@interface _SSSScreenshotAnnotationController : _SSSScreenshotContentOverlayController <AKControllerDelegateProtocol>
{
    AKController *_akController;
    AKPageModelController *_pageModelController;
    _SSSScreenshotAnnotationControllerAKOverlayContainerView *_overlayView;
}

- (void).cxx_destruct;
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3 forAnnotationController:(id)arg4;
- (void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (id)undoManagerForAnnotationController:(id)arg1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGRect)visibleRectOfOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)annotationKitController;
- (void)endedEditingWithOverlay;
- (void)enteredEditingWithOverlay;
- (void)updateUndoState;
- (void)setGesturesEnabled:(_Bool)arg1;
- (id)rotationGestureRecognizer;
- (id)panGestureRecognizer;
- (id)longPressGestureRecognizer;
- (id)doubleTapGestureRecognizer;
- (id)tapGestureRecognizer;
- (id)gestureRecognizers;
- (struct CGRect)rectToCenterAboveKeyboard;
- (id)overlayView;
- (void)setScreenshot:(id)arg1;
- (void)setActive:(_Bool)arg1;
- (void)_prepareAKController;
- (void)dealloc;
- (void)_annotationPropertiesChanged;
- (void)_annotationsAddedOrRemoved;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

