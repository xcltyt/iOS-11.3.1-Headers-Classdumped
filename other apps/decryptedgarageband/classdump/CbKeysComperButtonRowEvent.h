//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UITouch;

@interface CbKeysComperButtonRowEvent : NSObject
{
    long long _eventType;
    unsigned long long _itemIndex;
    UITouch *_touch;
}

@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
@property unsigned long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
