//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray;
@protocol CbComperButtonRowAnimator;

@interface CbComperButtonRow : UIControl
{
    long long _currentSelectionIndex;
    NSMutableArray *_touchesArray;
    id <CbComperButtonRowAnimator> _animationDelegate;
    _Bool _editingChords;
    unsigned long long altIndex;
}

@property _Bool editingChords; // @synthesize editingChords=_editingChords;
@property unsigned long long altIndex; // @synthesize altIndex;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1 forElementQuantity:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property long long currentSelectionIndex;
@property(nonatomic) id animationDelegate;

@end
