//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CbStepSequencerMenuTemplate-Protocol.h"

@class NSMutableArray, NSString, UIColor;

@interface CbStepSequencerMenuBaseTemplate : NSObject <CbStepSequencerMenuTemplate>
{
    unsigned long long _sentinel;
    NSMutableArray *_itemsInSections;
}

@property(readonly, nonatomic) NSMutableArray *itemsInSections; // @synthesize itemsInSections=_itemsInSections;
- (void).cxx_destruct;
- (void)reloadValues;
- (void)resetValues;
- (void)resetItemsInSections;
@property(readonly, nonatomic) NSMutableArray *values;
- (_Bool)shouldNopSelectionForSelectedCell;
@property(readonly, nonatomic) unsigned long long itemCount;
- (CDUnknownBlockType)layoutConfigurationBlock;
- (CDUnknownBlockType)cellSelectionBlock;
- (CDUnknownBlockType)cellIsSelectedBlock;
- (_Bool)hasBottomLinePaddingForIndexPath:(id)arg1;
- (_Bool)bottomLineHiddenForIndexPath:(id)arg1;
- (id)textColorForIndexPath:(id)arg1;
- (unsigned long long)textAlignmentForIndexPath:(id)arg1;
- (_Bool)chevronHiddenForIndexPath:(id)arg1;
- (id)detailTextForIndexPath:(id)arg1;
- (id)textForIndexPath:(id)arg1;
- (CDUnknownBlockType)cellConfigurationBlock;
- (struct UIEdgeInsets)sectionInsets:(long long)arg1;
- (Class)cellClass;
@property(readonly, nonatomic) double contentHeight;
@property(readonly, nonatomic) _Bool navigationBarHidden;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool showsScrollBar;
@property(readonly, nonatomic) UIColor *backgroundColorForPopover;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) double itemCountForEqualDistribution;
@property(readonly, nonatomic) struct CGSize itemSize;
@property(readonly, nonatomic) unsigned long long itemSizeType;
- (id)initWithSentinel:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

