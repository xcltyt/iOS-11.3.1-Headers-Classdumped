//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CbStepSequencerModel;

@protocol CbStepSequencerActivePageObserver <NSObject>
- (void)setNormalizedContentOffset:(struct CGPoint)arg1;
- (void)didUpdateModel:(CbStepSequencerModel *)arg1;
- (void)removeActiveSteps;
- (void)didUpdateActiveSteps:(CbStepSequencerModel *)arg1;
@end
