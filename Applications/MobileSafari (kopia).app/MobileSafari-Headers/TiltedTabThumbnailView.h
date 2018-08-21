//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TabThumbnailView.h"

@class GradientView, TabSnapshotImageView, TiltedTabBlankSnapshotView, TiltedTabView, UIView;

@interface TiltedTabThumbnailView : TabThumbnailView
{
    _Bool _closeButtonUsesOutlineStyle;
    GradientView *_contentShadowView;
    UIView *_contentClipperView;
    TabSnapshotImageView *_snapshotView;
    TiltedTabBlankSnapshotView *_blankSnapshotView;
    TiltedTabView *_tiltedTabView;
}

@property(nonatomic) _Bool closeButtonUsesOutlineStyle; // @synthesize closeButtonUsesOutlineStyle=_closeButtonUsesOutlineStyle;
@property(nonatomic) __weak TiltedTabView *tiltedTabView; // @synthesize tiltedTabView=_tiltedTabView;
@property(readonly, nonatomic) TiltedTabBlankSnapshotView *blankSnapshotView; // @synthesize blankSnapshotView=_blankSnapshotView;
@property(readonly, nonatomic) TabSnapshotImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(readonly, nonatomic) UIView *contentClipperView; // @synthesize contentClipperView=_contentClipperView;
@property(readonly, nonatomic) GradientView *contentShadowView; // @synthesize contentShadowView=_contentShadowView;
- (void).cxx_destruct;
- (_Bool)headerHasFinishedAnimating;
- (id)closeButtonImage;
- (void)showBlankSnapshotAnimated:(_Bool)arg1;
- (void)setSnapshot:(id)arg1 animated:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)reset;
- (id)init;

@end

