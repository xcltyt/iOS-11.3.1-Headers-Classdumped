/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>
#import <AVKit/AVPlaybackControlsViewDelegate.h>
#import <AVKit/AVCaptureViewConfiguring.h>

@protocol AVPlayerViewControllerContentViewDelegate;
@class NSString, _UIVisualEffectBackdropView, AVExternalPlaybackIndicatorView, UIImageView, UIView, AVPlaybackControlsView, AVStatusBarBackgroundGradientView, __AVPlayerLayerView, NSMutableDictionary;

@interface AVPlayerViewControllerContentView : UIView <AVPlaybackControlsViewDelegate, AVCaptureViewConfiguring> {

	BOOL _canAutomaticallyZoomLetterboxVideos;
	BOOL _needsInitialLayout;
	NSString* _automaticVideoGravity;
	_UIVisualEffectBackdropView* _captureView;
	AVExternalPlaybackIndicatorView* _externalPlaybackIndicatorView;
	UIImageView* _unsupportedContentIndicatorView;
	UIImageView* _audioOnlyIndicatorView;
	UIView* _contentOverlayView;
	UIView* _playerLayerAndContentOverlayContainerView;
	UIView* _iAdPreRollView;
	AVPlaybackControlsView* _playbackControlsView;
	AVStatusBarBackgroundGradientView* _statusBarBackgroundGradientView;
	id<AVPlayerViewControllerContentViewDelegate> _delegate;
	__AVPlayerLayerView* _playerLayerView;
	NSMutableDictionary* _targetVideoGravities;
	NSString* _captureGroupName;
	NSString* _externalPlaybackIndicatorTitle;
	NSString* _externalPlaybackIndicatorSubtitle;

}

@property (nonatomic,readonly) AVExternalPlaybackIndicatorView * externalPlaybackIndicatorView;                      //@synthesize externalPlaybackIndicatorView=_externalPlaybackIndicatorView - In the implementation block
@property (nonatomic,readonly) UIImageView * unsupportedContentIndicatorView;                                        //@synthesize unsupportedContentIndicatorView=_unsupportedContentIndicatorView - In the implementation block
@property (nonatomic,readonly) UIImageView * audioOnlyIndicatorView;                                                 //@synthesize audioOnlyIndicatorView=_audioOnlyIndicatorView - In the implementation block
@property (nonatomic,readonly) AVExternalPlaybackIndicatorView * externalPlaybackIndicatorViewIfLoaded; 
@property (nonatomic,readonly) UIImageView * unsupportedContentIndicatorViewIfLoaded; 
@property (nonatomic,readonly) UIImageView * audioOnlyIndicatorViewIfLoaded; 
@property (nonatomic,readonly) __AVPlayerLayerView * playerLayerView;                                                //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (assign,nonatomic) BOOL needsInitialLayout;                                                                //@synthesize needsInitialLayout=_needsInitialLayout - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * targetVideoGravities;                                           //@synthesize targetVideoGravities=_targetVideoGravities - In the implementation block
@property (nonatomic,copy) NSString * automaticVideoGravity;                                                         //@synthesize automaticVideoGravity=_automaticVideoGravity - In the implementation block
@property (nonatomic,readonly) NSString * captureGroupName;                                                          //@synthesize captureGroupName=_captureGroupName - In the implementation block
@property (nonatomic,readonly) _UIVisualEffectBackdropView * captureView;                                            //@synthesize captureView=_captureView - In the implementation block
@property (nonatomic,copy) NSString * externalPlaybackIndicatorTitle;                                                //@synthesize externalPlaybackIndicatorTitle=_externalPlaybackIndicatorTitle - In the implementation block
@property (nonatomic,copy) NSString * externalPlaybackIndicatorSubtitle;                                             //@synthesize externalPlaybackIndicatorSubtitle=_externalPlaybackIndicatorSubtitle - In the implementation block
@property (assign,nonatomic,__weak) id<AVPlayerViewControllerContentViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isCoveringWindow; 
@property (nonatomic,readonly) UIView * playerLayerAndContentOverlayContainerView;                                   //@synthesize playerLayerAndContentOverlayContainerView=_playerLayerAndContentOverlayContainerView - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutClass; 
@property (assign,nonatomic) BOOL canAutomaticallyZoomLetterboxVideos;                                               //@synthesize canAutomaticallyZoomLetterboxVideos=_canAutomaticallyZoomLetterboxVideos - In the implementation block
@property (nonatomic,readonly) UIView * contentOverlayView;                                                          //@synthesize contentOverlayView=_contentOverlayView - In the implementation block
@property (nonatomic,readonly) UIView * interactiveContentOverlayView; 
@property (nonatomic,readonly) UIView * iAdPreRollView;                                                              //@synthesize iAdPreRollView=_iAdPreRollView - In the implementation block
@property (nonatomic,readonly) AVStatusBarBackgroundGradientView * statusBarBackgroundGradientView;                  //@synthesize statusBarBackgroundGradientView=_statusBarBackgroundGradientView - In the implementation block
@property (nonatomic,readonly) AVPlaybackControlsView * playbackControlsView;                                        //@synthesize playbackControlsView=_playbackControlsView - In the implementation block
@property (nonatomic,readonly) BOOL isDescendantOfNonPagingScrollView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(id<AVPlayerViewControllerContentViewDelegate>)delegate;
-(void)setDelegate:(id<AVPlayerViewControllerContentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(_UIVisualEffectBackdropView *)captureView;
-(__AVPlayerLayerView *)playerLayerView;
-(id)_mediaTimingFunctionForCurrentAnimationCurve;
-(AVPlaybackControlsView *)playbackControlsView;
-(BOOL)isCoveringWindow;
-(void)configureBackdropView:(id)arg1 ;
-(void)playbackControlsView:(id)arg1 interactiveContentOverlayViewLayoutMarginsDidChange:(UIEdgeInsets)arg2 shouldLayoutIfNeeded:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 playerLayerView:(id)arg2 ;
-(NSString *)automaticVideoGravity;
-(void)setAutomaticVideoGravity:(NSString *)arg1 ;
-(AVExternalPlaybackIndicatorView *)externalPlaybackIndicatorView;
-(AVExternalPlaybackIndicatorView *)externalPlaybackIndicatorViewIfLoaded;
-(UIImageView *)unsupportedContentIndicatorView;
-(UIImageView *)unsupportedContentIndicatorViewIfLoaded;
-(UIImageView *)audioOnlyIndicatorViewIfLoaded;
-(UIView *)playerLayerAndContentOverlayContainerView;
-(UIView *)iAdPreRollView;
-(AVStatusBarBackgroundGradientView *)statusBarBackgroundGradientView;
-(void)addPlayerLayerAndContentOverlayContainerViewIfNeeded;
-(BOOL)isViewDescendantOfPlaybackControlsSubview:(id)arg1 ;
-(void)setShowsUnsupportedContentIndicator:(BOOL)arg1 ;
-(void)setShowsAudioOnlyIndicator:(BOOL)arg1 ;
-(void)setShowsExternalPlaybackIndicator:(BOOL)arg1 ;
-(void)setExternalPlaybackIndicatorTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)setTargetVideoGravity:(id)arg1 forLayoutClass:(unsigned long long)arg2 ;
-(BOOL)isDescendantOfNonPagingScrollView;
-(void)_updateVideoGravityDuringLayoutSubviewsAndAssertThatIfYouBreakThisMethodYouOwnThisMethod;
-(void)_updatePlayerLayerAndContentOverlayContainerViewLayoutMarginsForVideoGravity:(long long)arg1 ;
-(void)_applyVideoGravityIfNeeded:(long long)arg1 ;
-(BOOL)canAutomaticallyZoomLetterboxVideos;
-(void)setCanAutomaticallyZoomLetterboxVideos:(BOOL)arg1 ;
-(BOOL)needsInitialLayout;
-(void)setNeedsInitialLayout:(BOOL)arg1 ;
-(NSMutableDictionary *)targetVideoGravities;
-(NSString *)captureGroupName;
-(NSString *)externalPlaybackIndicatorTitle;
-(void)setExternalPlaybackIndicatorTitle:(NSString *)arg1 ;
-(NSString *)externalPlaybackIndicatorSubtitle;
-(void)setExternalPlaybackIndicatorSubtitle:(NSString *)arg1 ;
-(UIImageView *)audioOnlyIndicatorView;
-(UIView *)interactiveContentOverlayView;
-(unsigned long long)layoutClass;
-(UIView *)contentOverlayView;
@end
