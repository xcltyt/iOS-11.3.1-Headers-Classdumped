//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface ICSInsulatingView : UIView
{
    _Bool _forwardsHits;
    UIView *_insulatedView;
}

@property(nonatomic) _Bool forwardsHits; // @synthesize forwardsHits=_forwardsHits;
@property(readonly, nonatomic) UIView *insulatedView; // @synthesize insulatedView=_insulatedView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 insulatedView:(id)arg2;

@end
