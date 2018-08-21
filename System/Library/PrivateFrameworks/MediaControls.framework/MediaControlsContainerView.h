/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKit/UIView.h>

@class MediaControlsTransportStackView, MediaControlsTimeControl, UIVisualEffectView, MPCPlayerResponse;

@interface MediaControlsContainerView : UIView {

	BOOL _empty;
	long long _style;
	MediaControlsTransportStackView* _mediaControlsTransportStackView;
	MediaControlsTimeControl* _mediaControlsTimeControl;
	UIVisualEffectView* _primaryVisualEffectView;

}

@property (nonatomic,retain) UIVisualEffectView * primaryVisualEffectView;                                   //@synthesize primaryVisualEffectView=_primaryVisualEffectView - In the implementation block
@property (assign,nonatomic) long long style;                                                                //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) MPCPlayerResponse * response; 
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                                      //@synthesize empty=_empty - In the implementation block
@property (assign,getter=isTimeControlOnScreen,nonatomic) BOOL timeControlOnScreen; 
@property (nonatomic,retain) MediaControlsTransportStackView * mediaControlsTransportStackView;              //@synthesize mediaControlsTransportStackView=_mediaControlsTransportStackView - In the implementation block
@property (nonatomic,retain) MediaControlsTimeControl * mediaControlsTimeControl;                            //@synthesize mediaControlsTimeControl=_mediaControlsTimeControl - In the implementation block
-(void)setResponse:(MPCPlayerResponse *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MPCPlayerResponse *)response;
-(void)_updateStyle;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(BOOL)isEmpty;
-(UIVisualEffectView *)primaryVisualEffectView;
-(void)setPrimaryVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(void)setTimeControlOnScreen:(BOOL)arg1 ;
-(BOOL)isTimeControlOnScreen;
-(MediaControlsTransportStackView *)mediaControlsTransportStackView;
-(void)setRatingActionSheetDelegate:(id)arg1 ;
-(MediaControlsTimeControl *)mediaControlsTimeControl;
-(void)setMediaControlsTransportStackView:(MediaControlsTransportStackView *)arg1 ;
-(void)setMediaControlsTimeControl:(MediaControlsTimeControl *)arg1 ;
@end
