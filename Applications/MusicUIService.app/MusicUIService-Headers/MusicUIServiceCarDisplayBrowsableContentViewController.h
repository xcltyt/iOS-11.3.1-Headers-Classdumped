//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSUICarDisplayNowPlayingViewController.h"

@class MCDPlayableContentViewController, NSMutableDictionary, NSString;

@interface MusicUIServiceCarDisplayBrowsableContentViewController : SBSUICarDisplayNowPlayingViewController
{
    MCDPlayableContentViewController *_nowPlayingViewController;
    NSString *_displayedViewControllerKey;
    NSMutableDictionary *_bundleIDsToStacks;
    _Bool _firstLaunchCompleted;
    CDUnknownBlockType _needsSwitch;
}

- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)saveCurrentStack;
- (void)_performSwitchToNowPlayingForBundleID:(id)arg1 showNowPlaying:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)switchToState:(id)arg1;

@end

