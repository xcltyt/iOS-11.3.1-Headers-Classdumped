//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbObjectsSettingsManager.h"

@class CbTronCellView, CbTronViewController;

@interface CbClipColumnSettingsManager : CbObjectsSettingsManager
{
    CbTronCellView *_clipView;
    CbTronViewController *_tronViewController;
    _Bool _undoStepCreated;
}

- (void).cxx_destruct;
- (void)updateTitleForViewController:(id)arg1;
- (void)setPlayMode:(int)arg1;
- (int)getPlayMode:(_Bool *)arg1;
- (void)setPlayQuantization:(unsigned int)arg1;
- (unsigned int)getPlayQuantization:(_Bool *)arg1;
- (_Bool)showsResetAll;
- (_Bool)showsPlayModeAdjustment;
- (_Bool)showsPlayQuantizationAdjustment;
- (void)willModifyObjects;
- (void)dealloc;
- (id)initWithClipView:(id)arg1 andTronViewController:(id)arg2;

@end
