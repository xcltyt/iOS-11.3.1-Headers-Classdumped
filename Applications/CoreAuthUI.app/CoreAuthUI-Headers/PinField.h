//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LASecureData, NSMutableArray;

@interface PinField : UIView
{
    NSMutableArray *_pinDashViews;
    NSMutableArray *_pinDotViews;
    struct CGSize _pinDashSize;
    struct CGSize _pinDotSize;
    double _slotHeight;
    double _slotWidth;
    id <PinFieldDelegate> _delegate;
    LASecureData *_pinValue;
    unsigned long long _pinLength;
}

@property(readonly, nonatomic) unsigned long long pinLength; // @synthesize pinLength=_pinLength;
@property(readonly, nonatomic) LASecureData *pinValue; // @synthesize pinValue=_pinValue;
@property(nonatomic) __weak id <PinFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deleteLastPinCharacter;
- (void)appendPinCharacter:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayoutForWidth:(double)arg1;
- (id)initWithPinLength:(id)arg1;

@end
