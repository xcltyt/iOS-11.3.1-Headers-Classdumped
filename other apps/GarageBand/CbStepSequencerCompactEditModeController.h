//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CbStepSequencerCompactEditModeView, CbStepSequencerMenuViewController;
@protocol CbStepSequencerCompactEditModeViewDelegate;

@interface CbStepSequencerCompactEditModeController : UIViewController
{
    id <CbStepSequencerCompactEditModeViewDelegate> _delegate;
    CbStepSequencerMenuViewController *_menuViewController;
    CbStepSequencerCompactEditModeView *_editModeView;
    unsigned long long _secondaryEditMode;
}

@property(nonatomic) unsigned long long secondaryEditMode; // @synthesize secondaryEditMode=_secondaryEditMode;
- (void).cxx_destruct;
- (void)setDisclosureButtonSelected:(_Bool)arg1;
- (void)loadView;
- (id)initWithViewDelegate:(id)arg1 selectedBlock:(CDUnknownBlockType)arg2 selectionBlock:(CDUnknownBlockType)arg3;

@end

