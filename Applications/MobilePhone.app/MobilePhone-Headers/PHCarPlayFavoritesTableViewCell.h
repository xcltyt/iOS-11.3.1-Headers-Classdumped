//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHCarPlayGenericTableViewCell.h"

@class CNAvatarView, UILabel;

@interface PHCarPlayFavoritesTableViewCell : PHCarPlayGenericTableViewCell
{
    CNAvatarView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_phoneNumberTypeLabel;
}

@property(retain, nonatomic) UILabel *phoneNumberTypeLabel; // @synthesize phoneNumberTypeLabel=_phoneNumberTypeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

