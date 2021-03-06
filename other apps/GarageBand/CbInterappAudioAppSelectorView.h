//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor;

@interface CbInterappAudioAppSelectorView : UIView
{
    struct CGRect _originalFrame;
    struct CGRect _originalInputButtonFrame;
    UIButton *_genButton;
    UIButton *_fxButton;
    _Bool _alwaysShowsBackgroundColor;
    UIButton *_inputMenuButton;
    long long _direction;
    UIColor *_bgColor;
}

+ (void)initialize;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) _Bool alwaysShowsBackgroundColor; // @synthesize alwaysShowsBackgroundColor=_alwaysShowsBackgroundColor;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) UIButton *inputMenuButton; // @synthesize inputMenuButton=_inputMenuButton;
- (void).cxx_destruct;
- (void)_handleInterappAudioConnectionChange:(id)arg1;
- (void)fxButtonAction:(id)arg1;
- (void)genButtonAction:(id)arg1;
@property(readonly, nonatomic) unsigned long long currentlyShownAppSwitcherCount;
- (void)updateAnimated:(_Bool)arg1;
- (void)updateFrameAnimated:(_Bool)arg1;
- (void)updateAfterAbsoluteInputMenuButtonFrameWasSet:(_Bool)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end

