/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAVListingFaceBaseView.h>

@class NTKUtilityComplicationFactory, NTKComplicationDisplayWrapperView;

@interface NTKVideoFaceView : NTKAVListingFaceBaseView {

	unsigned long long _theme;
	NTKUtilityComplicationFactory* _complicationFactory;
	NTKComplicationDisplayWrapperView* _touchWrapper;
	unsigned _tapToPlayGestureEnabled : 1;
	unsigned _useDefaultListing : 1;
	unsigned _isComplicationColorApplied : 1;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didAddSubview:(id)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(void)_configureComplicationFactory;
-(double)_timeTravelYAdjustment;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(void)_updatePaused;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_posterImageView;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(id)_nextListing;
-(void)_performPreloadVideoTask;
-(id)_onDeckPosterImageView;
-(void)_selectDefaultListing;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(id)_complicationDisplayWrapperForTouch:(id)arg1 ;
-(void)_handleTapToPlayVideoGesture;
-(id)_overlayColor;
-(void)_applyComplicationContentSpecificAttributesWithColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)_applyComplicationContentSpecificAttributesWithColor:(id)arg1 animated:(BOOL)arg2 useComplicationFlickerWorkaround:(BOOL)arg3 ;
-(id)_posterImageViewWithTheme:(unsigned long long)arg1 ;
-(id)_defaultListing;
-(BOOL)_shouldDelayBeforePlayingNextVideo;
-(id)_viewForEditOption:(id)arg1 ;
-(double)_rightSideMarginForDigitalTimeHeroPosition;
-(void)videoPlayerViewDidBeginPlaying:(id)arg1 ;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1 ;
@end
