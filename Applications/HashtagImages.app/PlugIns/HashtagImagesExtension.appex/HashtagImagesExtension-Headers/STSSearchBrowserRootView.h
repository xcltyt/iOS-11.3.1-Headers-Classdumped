//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class STSSearchBrowserHeaderView;

@interface STSSearchBrowserRootView : UIView
{
    STSSearchBrowserHeaderView *_headerView;
    double _headerTopInset;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double headerTopInset; // @synthesize headerTopInset=_headerTopInset;
@property(retain, nonatomic) STSSearchBrowserHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)didAddSubview:(id)arg1;
- (void)layoutSubviews;

@end
