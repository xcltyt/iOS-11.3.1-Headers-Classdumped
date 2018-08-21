//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSPersonNameComponentsFormatter, UILabel;

@interface WDProfileHeaderView : UIView
{
    UIView *_avatarView;
    UILabel *_nameLabel;
    NSPersonNameComponentsFormatter *_nameFormatter;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSPersonNameComponentsFormatter *nameFormatter; // @synthesize nameFormatter=_nameFormatter;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic, getter=isNameHidden) _Bool nameHidden;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateFont;
- (id)initWithFrame:(struct CGRect)arg1;

@end

