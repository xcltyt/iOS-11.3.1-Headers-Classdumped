//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbComperView.h"

#import "CbScreenshotable-Protocol.h"

@class CbKeysComperController, CbKeysComperGrooveView, CbKeysComperHitView, NSMutableArray, UIView;

@interface CbKeysComperView : CbComperView <CbScreenshotable>
{
    CbKeysComperHitView *_hitView;
    CbKeysComperGrooveView *_grooveView;
    NSMutableArray *_allLabels;
    UIView *_labelsView;
    unsigned long long _chordQty;
    double _leftMargin;
    double _rightMargin;
}

@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
- (unsigned long long)chordQty;
@property(nonatomic) __weak CbKeysComperGrooveView *grooveView; // @synthesize grooveView=_grooveView;
@property(nonatomic) __weak CbKeysComperHitView *hitView; // @synthesize hitView=_hitView;
- (void).cxx_destruct;
- (void)reset;
- (void)restoreFromScreenshotType:(int)arg1;
- (void)prepareForScreenshotType:(int)arg1;
- (void)layoutSubviews;
- (void)showGrooveView:(_Bool)arg1;
- (void)highlightHitChordAtIndex:(unsigned long long)arg1;
- (void)showHitView:(_Bool)arg1;
- (void)updateCurrentChordToChordInfo:(id)arg1;
- (void)updateChordSubviewsWithChordInfos:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEditingChords:(_Bool)arg1;
@property(nonatomic) CbKeysComperController *controller; // @dynamic controller;
- (void)setChordQty:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
