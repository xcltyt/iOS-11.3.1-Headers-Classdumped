/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MPSwipableViewDelegate.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPVideoOverlayDelegate.h>
#import <libobjc.A.dylib/MPTransportControlsTarget.h>

@class UITapGestureRecognizer, MPWeakTimer, MPAVItem, UIActivityIndicatorView, MPInlineVideoController, MPVideoPlaybackOverlayView, UIPinchGestureRecognizer, MPSwipableView, MPVolumeController, NSString;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVolumeControllerDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget> {

	BOOL _disableTaps;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	MPWeakTimer* _idleTimer;
	BOOL _isAnimatingOverlay;
	MPAVItem* _item;
	UIActivityIndicatorView* _loadingIndicator;
	MPInlineVideoController* _masterController;
	MPVideoPlaybackOverlayView* _overlayView;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	BOOL _shouldForwardRotationEvents;
	MPSwipableView* _swipableView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	unsigned long long _activeOverlayUserEvents;
	BOOL _statusBarWasHidden;
	MPVolumeController* _volumeController;

}

@property (assign,nonatomic,__weak) MPInlineVideoController * masterController;              //@synthesize masterController=_masterController - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(MPAVItem *)item;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)setItem:(MPAVItem *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(MPInlineVideoController *)masterController;
-(void)setMasterController:(MPInlineVideoController *)arg1 ;
-(void)swipableViewHadActivity:(id)arg1 ;
-(BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)overlayTappedFullscreenButton:(id)arg1 ;
-(void)overlay:(id)arg1 didBeginUserEvent:(unsigned long long)arg2 ;
-(void)overlay:(id)arg1 didCancelUserEvent:(unsigned long long)arg2 ;
-(void)overlay:(id)arg1 didEndUserEvent:(unsigned long long)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)showAlternateTracks;
-(void)_viewWasTapped:(id)arg1 ;
-(void)_viewWasPinched:(id)arg1 ;
-(void)_hideOverlayAnimated:(BOOL)arg1 ;
-(void)updateOverlayView;
-(void)cancelOverlayIdleTimer;
-(void)showLoadingIndicator;
-(void)hideLoadingIndicator;
-(void)_hideOverlayDidEnd;
-(void)resetOverlayIdleTimer;
-(void)showOverlayAnimated:(BOOL)arg1 ;
-(void)prepareForTransitionFromFullscreen;
-(void)_overlayIdleTimerFired;
-(void)_showOverlayDidEnd;
@end
