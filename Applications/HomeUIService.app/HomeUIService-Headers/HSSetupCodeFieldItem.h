//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSNumber, UILabel;

@interface HSSetupCodeFieldItem : UIView
{
    _Bool _active;
    unsigned long long _itemNumber;
    NSNumber *_value;
    UILabel *_digitLabel;
}

@property(retain, nonatomic) UILabel *digitLabel; // @synthesize digitLabel=_digitLabel;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long itemNumber; // @synthesize itemNumber=_itemNumber;
- (void).cxx_destruct;
- (void)clear;
- (void)deactivate;
- (void)activate;
- (id)init;

@end
