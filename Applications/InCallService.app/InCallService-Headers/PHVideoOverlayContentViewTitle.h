//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHVideoOverlayContentView.h"

@class UILabel;

@interface PHVideoOverlayContentViewTitle : PHVideoOverlayContentView
{
    UILabel *_titleLabel;
}

@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)resetView;
- (void)updateConstraints;
- (void)setupViewWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end
