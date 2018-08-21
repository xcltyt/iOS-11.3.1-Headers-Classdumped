//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PinnableBanner.h"

@class LSAppLink, UIButton, UIImageView, UILabel, UIView, _UIBackdropView;

@interface AppLinkBanner : PinnableBanner
{
    _UIBackdropView *_backdrop;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_openButton;
    UIView *_separator;
    CDUnknownBlockType _openActionHandler;
    LSAppLink *_appLink;
}

@property(readonly, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
- (void).cxx_destruct;
- (void)_open;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithAppLink:(id)arg1 openActionHandler:(CDUnknownBlockType)arg2;

@end

