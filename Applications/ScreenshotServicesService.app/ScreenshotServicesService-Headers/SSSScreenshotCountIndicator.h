//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UIPageControl;

@interface SSSScreenshotCountIndicator : UIView
{
    UIPageControl *_pageControl;
    UILabel *_label;
    long long _count;
    long long _index;
}

+ (id)_labelFont;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

