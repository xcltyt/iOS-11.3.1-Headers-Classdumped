//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DfDocument, NSMutableArray;

@interface CbArrangeSongPartsIndicatorView : UIView
{
    DfDocument *_document;
    NSMutableArray *_partViews;
    UIView *_containerView;
    _Bool _arrangeTracksVisible;
    long long _highlightedSongPartIndex;
}

@property(nonatomic) _Bool arrangeTracksVisible; // @synthesize arrangeTracksVisible=_arrangeTracksVisible;
@property(nonatomic) long long highlightedSongPartIndex; // @synthesize highlightedSongPartIndex=_highlightedSongPartIndex;
- (void).cxx_destruct;
- (void)updatePartViewStates:(_Bool)arg1;
- (void)relayoutPartViews;
- (void)updatePartViews;
- (id)initWithFrame:(struct CGRect)arg1 document:(id)arg2;

@end

