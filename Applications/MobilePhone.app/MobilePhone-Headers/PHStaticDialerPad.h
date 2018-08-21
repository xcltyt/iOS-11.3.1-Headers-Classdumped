//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPPhonePad.h"

@class _UIFocusLinearMovementSequence;

@interface PHStaticDialerPad : TPPhonePad
{
    _UIFocusLinearMovementSequence *_linearSequence;
    int _dialerType;
}

@property int dialerType; // @synthesize dialerType=_dialerType;
- (void).cxx_destruct;
- (id)_linearFocusMovementSequences;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (struct CGSize)intrinsicContentSize;
- (float)_yFudge;
- (id)_highlightedImage;
- (id)_keypadImage;
- (id)_pressedImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)keyPressed:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDialerType:(int)arg1;

@end

