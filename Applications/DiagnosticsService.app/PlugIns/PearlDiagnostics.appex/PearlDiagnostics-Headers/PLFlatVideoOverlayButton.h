//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "PLVideoOverlayButton.h"

@interface PLFlatVideoOverlayButton : UIButton <PLVideoOverlayButton>
{
    long long _style;
    id _target;
    SEL _action;
}

- (void).cxx_destruct;
- (id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3;
- (id)_highlightedButtonImage;
- (id)_normalButtonImage;
- (void)_handleTap:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;
- (id)initWithStyle:(long long)arg1;

@end

