//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTATimeView.h"

@interface MTATimerTimeView : MTATimeView
{
    unsigned long long _style;
}

+ (double)defaultHeight;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)init;
- (void)configureBackground;
- (void)configureTimeLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeLabelToFit;
- (void)layoutSubviews;

@end

