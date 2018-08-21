//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UISlider;

@interface MTAEditAlarmVolumeCell : UITableViewCell
{
    id <MTAlarmSoundInfoProvider> _alarm;
    id <MTAEditAlarmVolumeCellDelegate> _delegate;
    UISlider *_volumeSlider;
}

@property(retain, nonatomic) UISlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property __weak id <MTAEditAlarmVolumeCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <MTAlarmSoundInfoProvider> alarm; // @synthesize alarm=_alarm;
- (void).cxx_destruct;
@property(nonatomic) float alarmVolume;
- (void)soundVolumeChanged:(id)arg1;
- (void)drawDebugFrames;
- (void)setupConstraints;
- (void)buildVolumeSlider;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

