//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSLayoutConstraint, PHCarPlayInCallButtonRing, UIColor, UILabel;

@interface PHCarPlayInCallButton : UIButton
{
    _Bool _toggledOn;
    int _inCallButtonType;
    int _specialLayoutType;
    UILabel *_buttonLabel;
    NSLayoutConstraint *_horizontalPositioningConstraint;
    UIColor *_unhighlightedBackgroundColor;
    PHCarPlayInCallButtonRing *_ringView;
    long long _callState;
}

@property(nonatomic) long long callState; // @synthesize callState=_callState;
@property(retain) PHCarPlayInCallButtonRing *ringView; // @synthesize ringView=_ringView;
@property(retain) UIColor *unhighlightedBackgroundColor; // @synthesize unhighlightedBackgroundColor=_unhighlightedBackgroundColor;
@property(nonatomic) int specialLayoutType; // @synthesize specialLayoutType=_specialLayoutType;
@property(nonatomic) _Bool toggledOn; // @synthesize toggledOn=_toggledOn;
@property(readonly) int inCallButtonType; // @synthesize inCallButtonType=_inCallButtonType;
@property(retain) NSLayoutConstraint *horizontalPositioningConstraint; // @synthesize horizontalPositioningConstraint=_horizontalPositioningConstraint;
@property(retain) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateToProperIconColor;
- (void)setHasRingView:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)viewForLastBaselineLayout;
- (struct CGSize)intrinsicContentSize;
- (id)initForButtonType:(int)arg1 callState:(long long)arg2;

@end

