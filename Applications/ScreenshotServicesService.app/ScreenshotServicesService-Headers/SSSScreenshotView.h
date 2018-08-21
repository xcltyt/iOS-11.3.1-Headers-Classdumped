//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SSSCropControllerDelegate.h"
#import "SSSScreenshotRepresentation.h"
#import "_SSSScreenshotContentOverlayControllerDelegate.h"

@class AKController, NSString, PKInk, SSSCheckView, SSSCropController, SSSScreenshot, SSSScreenshotBorderView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIViewController, _SSSScreenshotContentOverlayController, _SSSScreenshotImageView;

@interface SSSScreenshotView : UIView <SSSCropControllerDelegate, _SSSScreenshotContentOverlayControllerDelegate, SSSScreenshotRepresentation>
{
    SSSCropController *_cropController;
    _SSSScreenshotImageView *_imageView;
    SSSScreenshotBorderView *_borderView;
    _Bool _hasPreparedForFullscreenExperience;
    _Bool _hasFinishedPreparingForFullscreenExperience;
    _Bool _checked;
    SSSCheckView *_checkView;
    UITapGestureRecognizer *_tapGesture;
    _SSSScreenshotContentOverlayController *_overlayController;
    UILongPressGestureRecognizer *_pixelationGesture;
    _Bool _useTrilinearMinificationFilter;
    _Bool _usesOriginalImageAspectRatio;
    _Bool _gesturesEnabled;
    _Bool _annotationsEnabled;
    _Bool _pixelationBrushEnabled;
    _Bool _showsCheckmark;
    _Bool _cropHandlesFadedOut;
    _Bool _isBeingRemoved;
    _Bool _showBackgroundForOccludingView;
    SSSScreenshot *_screenshot;
    unsigned long long _state;
    id <SSSScreenshotViewDelegate> _delegate;
    struct CGRect _currentlyVisibleRect;
    struct CGRect _extent;
}

@property(nonatomic) _Bool showBackgroundForOccludingView; // @synthesize showBackgroundForOccludingView=_showBackgroundForOccludingView;
@property(nonatomic) __weak id <SSSScreenshotViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect extent; // @synthesize extent=_extent;
@property(nonatomic) _Bool isBeingRemoved; // @synthesize isBeingRemoved=_isBeingRemoved;
@property(nonatomic) _Bool cropHandlesFadedOut; // @synthesize cropHandlesFadedOut=_cropHandlesFadedOut;
@property(nonatomic) struct CGRect currentlyVisibleRect; // @synthesize currentlyVisibleRect=_currentlyVisibleRect;
@property(nonatomic) _Bool showsCheckmark; // @synthesize showsCheckmark=_showsCheckmark;
@property(nonatomic) _Bool pixelationBrushEnabled; // @synthesize pixelationBrushEnabled=_pixelationBrushEnabled;
@property(nonatomic) _Bool annotationsEnabled; // @synthesize annotationsEnabled=_annotationsEnabled;
@property(nonatomic) _Bool gesturesEnabled; // @synthesize gesturesEnabled=_gesturesEnabled;
@property(nonatomic) _Bool usesOriginalImageAspectRatio; // @synthesize usesOriginalImageAspectRatio=_usesOriginalImageAspectRatio;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool useTrilinearMinificationFilter; // @synthesize useTrilinearMinificationFilter=_useTrilinearMinificationFilter;
@property(retain, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_handlePixelationGesture:(id)arg1;
- (void)requireGestureRecognizerToFailBeforeAllOtherGestureRecognizers:(id)arg1;
- (void)requireAllOtherGestureRecognizersToFailBeforeGestureRecognizer:(id)arg1;
- (id)_otherGestureRecognizers;
- (void)uninstallInterstitialGesture:(id)arg1;
- (void)installInterstitialGesture:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForOverlayPresentations;
@property(readonly, nonatomic) UIView *viewContainingScreenshotContents;
@property(retain, nonatomic) PKInk *ink;
- (void)_prepareGesturesForOverlayController:(id)arg1;
@property(readonly, nonatomic) struct CGRect rectToCenterAboveKeyboard;
@property(readonly, nonatomic) AKController *akController;
@property(nonatomic) _Bool screenshotEditsSnapshotted;
- (void)finishPreparingForFullscreenExperience;
- (void)prepareForFullscreenExperience;
- (void)_handleTap;
@property(readonly, nonatomic) _Bool shouldBeShared;
- (void)resetShouldBeShared;
- (void)_toggleCheck;
- (void)_setChecked:(_Bool)arg1;
- (void)commitInflightEdits;
- (void)cropController:(id)arg1 changedToCropRect:(struct CGRect)arg2;
@property(nonatomic) double geometryMultiplier;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)screenshotDidRevert:(id)arg1;
- (void)screenshotDidHaveUndoStackChanged:(id)arg1;
- (id)undoManager;
@property(nonatomic) long long borderStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

