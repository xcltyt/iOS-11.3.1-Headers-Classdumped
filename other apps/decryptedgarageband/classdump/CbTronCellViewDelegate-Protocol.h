//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CbTronCellView, UIGestureRecognizer, UIPanGestureRecognizer;

@protocol CbTronCellViewDelegate <NSObject>
- (void)tronCellViewPanned:(CbTronCellView *)arg1 withGestureRecognizer:(UIPanGestureRecognizer *)arg2;
- (void)tronCellViewLongPressed:(CbTronCellView *)arg1;
- (void)tronCellViewTapped:(CbTronCellView *)arg1;
- (void)tronCellViewTouched:(CbTronCellView *)arg1;
- (void)tronCellViewAction:(CbTronCellView *)arg1 fromGestureRecognizer:(UIGestureRecognizer *)arg2;
@end

