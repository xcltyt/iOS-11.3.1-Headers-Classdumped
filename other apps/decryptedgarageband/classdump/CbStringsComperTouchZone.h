//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbComperTouchZone.h"

@class CbChordLabel, NSString, UIColor, UIImage;

@interface CbStringsComperTouchZone : CbComperTouchZone
{
    CbChordLabel *_chordLabel;
    NSString *_chordName;
    _Bool _strumZoneDisabled;
    _Bool _highlightingEnabled;
    double _topHeight;
    double _topTriggerLabelYOffset;
    UIImage *_selectedImage;
    UIImage *_deselectedImage;
    _Bool _chordButtonsExpanded;
    UIColor *_chordLabelTextColor;
    UIImage *_selectedImageNormal;
    UIImage *_deselectedImageNormal;
    UIImage *_selectedImageShifted;
    UIImage *_deselectedImageShifted;
}

@property(nonatomic) _Bool chordButtonsExpanded; // @synthesize chordButtonsExpanded=_chordButtonsExpanded;
@property(retain, nonatomic) UIImage *deselectedImageShifted; // @synthesize deselectedImageShifted=_deselectedImageShifted;
@property(retain, nonatomic) UIImage *selectedImageShifted; // @synthesize selectedImageShifted=_selectedImageShifted;
@property(retain, nonatomic) UIImage *deselectedImageNormal; // @synthesize deselectedImageNormal=_deselectedImageNormal;
@property(retain, nonatomic) UIImage *selectedImageNormal; // @synthesize selectedImageNormal=_selectedImageNormal;
@property(retain, nonatomic) UIColor *chordLabelTextColor; // @synthesize chordLabelTextColor=_chordLabelTextColor;
@property(nonatomic) double topTriggerLabelYOffset; // @synthesize topTriggerLabelYOffset=_topTriggerLabelYOffset;
@property(nonatomic) double topHeight; // @synthesize topHeight=_topHeight;
@property(nonatomic) __weak CbChordLabel *chordLabel; // @synthesize chordLabel=_chordLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *chordName; // @synthesize chordName=_chordName;
- (void)addStrumTrigger;
- (id)initWithFrame:(struct CGRect)arg1;
@property _Bool strumZoneDisabled;

@end
