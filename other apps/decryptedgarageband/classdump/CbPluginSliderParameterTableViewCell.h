//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbPluginParameterTableViewCell.h"

@class MAUIPanSlider;

@interface CbPluginSliderParameterTableViewCell : CbPluginParameterTableViewCell
{
    long long _defaultValue;
    MAUIPanSlider *_parameterSlider;
}

+ (id)nibName;
@property(retain, nonatomic) MAUIPanSlider *parameterSlider; // @synthesize parameterSlider=_parameterSlider;
- (void).cxx_destruct;
- (void)sendValueChanged;
- (void)updateUI;
- (void)sliderAction:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end
