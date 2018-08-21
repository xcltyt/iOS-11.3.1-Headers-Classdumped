//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIActivityIndicatorView, WDPlayButton;

@interface WDPosterImageView : UIImageView
{
    long long _displayState;
    WDPlayButton *_playButton;
    UIActivityIndicatorView *_activityIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) WDPlayButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) long long displayState; // @synthesize displayState=_displayState;
- (void).cxx_destruct;
- (void)_updateViewsForDisplayState;
- (void)didMoveToWindow;
- (void)setupSubviews;
- (void)commonInit;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

