//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbTronCellQuantizationViewController.h"

@interface CbTronCellGlobalTimeSnapViewController : CbTronCellQuantizationViewController
{
    _Bool _applyAndCloseOnSelection;
}

+ (void)dismissGlobalTimeSnapPopoverAnimated:(_Bool)arg1;
+ (id)localizedStringForTimeSnap:(unsigned int)arg1;
@property(nonatomic) _Bool applyAndCloseOnSelection; // @synthesize applyAndCloseOnSelection=_applyAndCloseOnSelection;
- (struct CGSize)sizeForPopover;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (unsigned int)quantization;
- (void)setQuantization:(unsigned int)arg1;
- (void)viewDidLoad;

@end

