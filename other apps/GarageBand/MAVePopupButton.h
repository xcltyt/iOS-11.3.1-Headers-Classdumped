//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeElementBase.h"

@class CAGradientLayer, MAVeScalableTextLayer, NSDictionary, NSMutableArray, NSString;

@interface MAVePopupButton : MAVeElementBase
{
    NSMutableArray *_itemArray;
    _Bool _titleIsFixed;
    _Bool _stickyGlyph;
    int _textAlignment;
    MAVeScalableTextLayer *_titleLayer;
    MAVeScalableTextLayer *_glyphLayer;
    CAGradientLayer *_backgroundLayer;
    NSDictionary *_titleAttributes;
}

@property(nonatomic) __weak NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(nonatomic) _Bool stickyGlyph; // @synthesize stickyGlyph=_stickyGlyph;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) MAVeScalableTextLayer *glyphLayer; // @synthesize glyphLayer=_glyphLayer;
@property(retain, nonatomic) MAVeScalableTextLayer *titleLayer; // @synthesize titleLayer=_titleLayer;
@property(nonatomic) _Bool titleIsFixed; // @synthesize titleIsFixed=_titleIsFixed;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
- (void).cxx_destruct;
- (id)addValueWithID:(id)arg1 forType:(id)arg2;
- (void)setItemWithValueID:(id)arg1 enabled:(_Bool)arg2;
- (void)setItemAtIndex:(long long)arg1 enabled:(_Bool)arg2;
- (id)itemAtIndex:(long long)arg1;
- (long long)indexOfItem:(id)arg1;
- (long long)indexOfSelectedItem;
- (id)selectedItem;
- (void)menuItemSelectedAtIndex:(long long)arg1;
- (void)selectItemWithTitle:(id)arg1;
- (void)selectItemAtIndex:(long long)arg1;
- (void)removeAllItems;
- (void)addItemWithTitle:(id)arg1 shortTitle:(id)arg2 isSeparator:(_Bool)arg3 enabled:(_Bool)arg4 menuPath:(id)arg5 valueID:(id)arg6 value:(double)arg7;
- (void)addItemWithTitle:(id)arg1 shortTitle:(id)arg2 isSeparator:(_Bool)arg3 enabled:(_Bool)arg4;
- (void)addItemWithTitle:(id)arg1;
- (long long)numberOfItems;
- (void)assetSetHasChanged;
@property(nonatomic) _Bool abbreviate;
@property(nonatomic) unsigned long long abbreviationLength;
@property(copy, nonatomic) NSString *truncationMode;
- (void)setScaleFactor:(double)arg1;
- (void)setCornerRadius:(double)arg1;
@property(nonatomic) struct CGSize design_glyphOffset;
@property(readonly, nonatomic) struct CGSize glyphOffset;
@property(nonatomic) double design_titleMargin;
@property(readonly, nonatomic) double titleMargin;
@property(nonatomic) double design_baselinePosition;
@property(readonly, nonatomic) double baselinePosition;
@property(nonatomic) double design_cornerRadius;
@property(readonly, nonatomic) double cornerRadius;
@property(nonatomic) __weak NSString *title;
@property(nonatomic) long long selectedIndex;
- (void)resetValueAtPosition:(struct CGPoint)arg1;
- (void)updateLayers;
- (void)tearDownLayers;
- (void)setUpLayers;
- (void)setupLayersWithRootLayer:(id)arg1;
- (void)dealloc;
- (id)init;

@end

