//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PKPeerPaymentMessagesAmountStepperView, PKPeerPaymentMessagesMultiActionView, PKPeerPaymentMessagesNumberPadView, UILabel;

@interface PKPeerPaymentMessagesContentAmountEntryView : UIView
{
    PKPeerPaymentMessagesAmountStepperView *_amountStepperView;
    PKPeerPaymentMessagesNumberPadView *_numberPadView;
    PKPeerPaymentMessagesMultiActionView *_actionView;
    UILabel *_balanceLabel;
}

@property(readonly, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(readonly, nonatomic) PKPeerPaymentMessagesMultiActionView *actionView; // @synthesize actionView=_actionView;
@property(readonly, nonatomic) PKPeerPaymentMessagesNumberPadView *numberPadView; // @synthesize numberPadView=_numberPadView;
@property(readonly, nonatomic) PKPeerPaymentMessagesAmountStepperView *amountStepperView; // @synthesize amountStepperView=_amountStepperView;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)_useLargeLayout;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

