//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDHealthTableViewController.h"

#import "WDUserActivityResponder.h"

@interface WDSourcesViewController : WDHealthTableViewController <WDUserActivityResponder>
{
    int _sourceListUpdateToken;
}

+ (id)tableViewSectionClasses;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (void)pushViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)reloadSectionData;
- (void)_registerForSourceChangeNotifications;
- (void)viewDidLoad;
- (id)initWithProfile:(id)arg1;

@end

