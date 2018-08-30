//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CbPluginCtrlsMappingController, CbRockerSwitch, CbStrokeLabel, MAUIRoundSlider, UIImageView;

@interface CbRockerGroup : UIView
{
    CbRockerSwitch *firstRocker;
    CbRockerSwitch *secondRocker;
    MAUIRoundSlider *rockerKnob;
    CbStrokeLabel *knobLabel;
    UIImageView *backgroundImageView;
    CbPluginCtrlsMappingController *_pluginMappingController;
}

@property(nonatomic) CbPluginCtrlsMappingController *pluginMappingController; // @synthesize pluginMappingController=_pluginMappingController;
- (void).cxx_destruct;
- (void)updateLabels;
- (void)updateMappings;
- (void)setAssetSet:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
