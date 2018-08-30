//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MAVePopupButtonItem : NSObject
{
    _Bool _selected;
    _Bool _isSeparator;
    _Bool _enabled;
    long long _tag;
    NSString *_title;
    NSString *_shortTitle;
    NSString *_valueID;
    double _value;
    NSString *_menuPath;
}

+ (id)popupButtonItemWithTitle:(id)arg1 shortTitle:(id)arg2 isSeparator:(_Bool)arg3 enabled:(_Bool)arg4;
@property(retain, nonatomic) NSString *menuPath; // @synthesize menuPath=_menuPath;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *valueID; // @synthesize valueID=_valueID;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool isSeparator; // @synthesize isSeparator=_isSeparator;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

