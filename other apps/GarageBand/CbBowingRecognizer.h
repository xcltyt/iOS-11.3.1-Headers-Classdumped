//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class UITouch;
@protocol CbSmartStringsDatasourceProtocol;

@interface CbBowingRecognizer : UIPanGestureRecognizer
{
    unsigned long long _chordIndex;
    unsigned long long _inversionVariant;
    unsigned long long _stringIndex;
    unsigned long long _fretIndex;
    _Bool _thresholdMet;
    _Bool _isValid;
    UITouch *_trackedTouch;
    struct CGPoint _initialLocation;
    id <CbSmartStringsDatasourceProtocol> _dataSource;
}

@property(nonatomic) __weak id <CbSmartStringsDatasourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct CGPoint initialLocation; // @synthesize initialLocation=_initialLocation;
@property(retain, nonatomic) UITouch *trackedTouch; // @synthesize trackedTouch=_trackedTouch;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) unsigned long long fretIndex; // @synthesize fretIndex=_fretIndex;
@property(nonatomic) unsigned long long stringIndex; // @synthesize stringIndex=_stringIndex;
@property(nonatomic) unsigned long long inversionVariant; // @synthesize inversionVariant=_inversionVariant;
@property(nonatomic) unsigned long long chordIndex; // @synthesize chordIndex=_chordIndex;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
