//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@protocol CbPipaLunzhiDelegate;

@interface CbPipaLunzhiButton : UIButton
{
    id <CbPipaLunzhiDelegate> _delegate;
}

@property(nonatomic) __weak id <CbPipaLunzhiDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

