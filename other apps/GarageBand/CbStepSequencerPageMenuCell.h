//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbStepSequencerMenuBaseCell.h"

#import "CbStepSequencerActivePageObserver-Protocol.h"

@class CAShapeLayer, CbStepSequencerThumbnailView, NSString, UIView;

@interface CbStepSequencerPageMenuCell : CbStepSequencerMenuBaseCell <CbStepSequencerActivePageObserver>
{
    UIView *_thumbnailContainer;
    CbStepSequencerThumbnailView *_thumbnailView;
    CAShapeLayer *_selectedBorderLayer;
    struct CGPoint _normalizedContentOffset;
    unsigned long long _sequencePage;
}

@property(nonatomic) unsigned long long sequencePage; // @synthesize sequencePage=_sequencePage;
- (void).cxx_destruct;
- (void)setNormalizedContentOffset:(struct CGPoint)arg1;
- (void)didUpdateModel:(id)arg1;
- (void)removeActiveSteps;
- (void)didUpdateActiveSteps:(id)arg1;
- (id)selectedColor;
- (id)highlightedColor;
- (void)configureNameLabel;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

