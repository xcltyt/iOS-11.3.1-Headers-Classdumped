//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface MTACircleButton : UIButton
{
    unsigned long long _buttonCircleSize;
}

+ (double)buttonWidthForSize:(unsigned long long)arg1;
@property(nonatomic) unsigned long long buttonCircleSize; // @synthesize buttonCircleSize=_buttonCircleSize;
- (double)preferredHorizontalMargin;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)handleContentSizeChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

