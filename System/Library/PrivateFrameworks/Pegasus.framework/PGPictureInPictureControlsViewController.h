/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKit/UIViewController.h>

@protocol PGPictureInPictureControlsViewControllerDelegate;
@class PGPlaybackProgress, NSArray, UIButton, PGPlaybackProgressIndicator, NSTimer;

@interface PGPictureInPictureControlsViewController : UIViewController {

	BOOL _showsAlternateActionButtonImage;
	PGPlaybackProgress* _playbackProgress;
	NSArray* _loadedTimeRanges;
	UIButton* _stopButton;
	UIButton* _actionButton;
	UIButton* _cancelButton;
	PGPlaybackProgressIndicator* _playbackProgressIndicator;
	long long _controlsSize;
	BOOL _controlsVisibilityNeedsUpdate;
	long long _controlsVisibilityCounter;
	NSTimer* _controlsVisibilityTimer;
	BOOL _shouldShowControlsIfNeeded;
	BOOL _shouldShowControlsForUserInteraction;
	BOOL _shouldShowControlsAfterUserInteraction;
	BOOL _shouldHideControlsTemporarely;
	BOOL _showsControls;
	BOOL _preventControlsVisibilityChangeAnimation;
	id<PGPictureInPictureControlsViewControllerDelegate> _delegate;
	SCD_Struct_PG6 _delegateRespondsTo;
	long long _controlsStyle;

}

@property (nonatomic,readonly) long long controlsStyle;                                                         //@synthesize controlsStyle=_controlsStyle - In the implementation block
@property (assign,nonatomic) BOOL showsAlternateActionButtonImage; 
@property (nonatomic,retain) PGPlaybackProgress * playbackProgress; 
@property (nonatomic,retain) NSArray * loadedTimeRanges; 
@property (assign,nonatomic,__weak) id<PGPictureInPictureControlsViewControllerDelegate> delegate; 
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(id<PGPictureInPictureControlsViewControllerDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PGPictureInPictureControlsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)loadedTimeRanges;
-(PGPlaybackProgress *)playbackProgress;
-(void)setPlaybackProgress:(PGPlaybackProgress *)arg1 ;
-(void)setShowsAlternateActionButtonImage:(BOOL)arg1 ;
-(void)startShowingControlsAnimated:(BOOL)arg1 ;
-(void)stopShowingControlsAnimated:(BOOL)arg1 ;
-(id)initWithControlsStyle:(long long)arg1 ;
-(BOOL)showsAlternateActionButtonImage;
-(long long)controlsStyle;
-(void)_updateControlsVisibilityIfNeeded;
-(void)_removeControlForUserInteractionObservation:(id)arg1 ;
-(id)_actionButtonImage;
-(void)_showControlsIfNeededAndHideIfPossibleAfterDelayIfPlaying;
-(void)_stopButtonTapped:(id)arg1 ;
-(id)_stopButtonBackgroundImage;
-(id)_stopButtonImage;
-(id)_actionButtonBackgroundImage;
-(id)_cancelButtonBackgroundImage;
-(id)_cancelButtonImage;
-(void)_handleSingleTapGestureRecognizer:(id)arg1 ;
-(void)_handleDoubleDoubleTapGestureRecognizer:(id)arg1 ;
-(void)_addControlForUserInteractionObservation:(id)arg1 ;
-(void)_manageControlsSize;
-(void)_setControlsVisibilityNeedsUpdate;
-(id)_buttonImageWithName:(id)arg1 ;
-(void)_hideControlsIfPossibleUntilFurtherUserInteraction;
-(void)_hideControlsIfPossible;
-(void)_showControlsIfNeededAndHideIfPossibleAfterDelayIfPlayingWithDelay:(double)arg1 ;
-(void)_updateControlsVisibility;
-(void)_showControlsIfNeeded;
-(void)_hideControlsIfPossibleAfterDelayIfPlaying;
-(void)_userInteractionObservationControlTouchDown:(id)arg1 ;
-(void)_userInteractionObservationControlTouchUp:(id)arg1 ;
-(void)_showControlsForTouchDown;
-(void)_hideControlsForTouchUp;
-(void)_toggleControlsVisibilityForUserInteraction;
-(void)_handleDoubleTapGestureRecognizer:(id)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_actionButtonTapped:(id)arg1 ;
@end
