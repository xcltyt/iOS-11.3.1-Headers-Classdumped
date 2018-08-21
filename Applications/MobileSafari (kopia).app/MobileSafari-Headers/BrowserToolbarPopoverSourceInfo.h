//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_SFPopoverSourceInfo.h"

@class BrowserController, NSString, UIView;

@interface BrowserToolbarPopoverSourceInfo : NSObject <_SFPopoverSourceInfo>
{
    long long _barItem;
    BrowserController *_browserController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *popoverSourceView;
@property(readonly, nonatomic) struct CGRect popoverSourceRect;
- (id)_sourceInfo;
- (id)initWithBrowserController:(id)arg1 barItem:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
