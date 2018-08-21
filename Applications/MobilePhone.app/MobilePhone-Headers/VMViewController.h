//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHViewController.h"

#import "VMPlayerViewController.h"

@class NSString, VMPlayerController, VMPlayerControlsView, VMVoicemailManager;

@interface VMViewController : PHViewController <VMPlayerViewController>
{
    VMVoicemailManager *_manager;
}

@property(readonly, nonatomic) VMVoicemailManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithManager:(id)arg1;
- (void)stop;
- (void)play;
- (void)pause;
- (void)playbackControls:(id)arg1 didRequestState:(long long)arg2;
- (void)playerController:(id)arg1 didSeekToTime:(float)arg2;
- (void)playerController:(id)arg1 didChangeToTimeControlStatus:(long long)arg2;
- (void)playerController:(id)arg1 didChangeToStatus:(long long)arg2;
- (void)playerController:(id)arg1 didChangeToDuration:(double)arg2;
- (void)playerController:(id)arg1 didChangeToCurrentTime:(float)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) VMPlayerController *playerController; // @dynamic playerController;
@property(readonly, nonatomic) VMPlayerControlsView *playerControlsView; // @dynamic playerControlsView;
@property(readonly) Class superclass;

@end

