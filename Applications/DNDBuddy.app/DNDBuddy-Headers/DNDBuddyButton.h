//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface DNDBuddyButton : UIButton
{
    CDUnknownBlockType _buttonBlock;
    unsigned long long _DNDButtonShape;
}

+ (id)buddyButtonWithShape:(unsigned long long)arg1;
@property(nonatomic) unsigned long long DNDButtonShape; // @synthesize DNDButtonShape=_DNDButtonShape;
@property(readonly, copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (id)_fontWithSizeCapForFont:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (void)configureWithLabel:(id)arg1 action:(CDUnknownBlockType)arg2;

@end

