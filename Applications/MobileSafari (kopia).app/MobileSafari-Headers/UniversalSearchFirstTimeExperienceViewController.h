//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SearchUIFirstTimeExperienceDelegate.h"

@class NSString, SearchUIFirstTimeExperienceViewController, UIScrollView;

@interface UniversalSearchFirstTimeExperienceViewController : UIViewController <SearchUIFirstTimeExperienceDelegate>
{
    SearchUIFirstTimeExperienceViewController *_firstTimeExperienceViewController;
    UIScrollView *_scrollView;
    id <UniversalSearchFirstTimeExperienceViewControllerDelegate> _delegate;
}

+ (void)userDidInteractWithParsecFirstTimeUserExperience;
+ (_Bool)hasShownParsecFirstTimeUserExperience;
@property(nonatomic) __weak id <UniversalSearchFirstTimeExperienceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)firstTimeExperienceContinueButtonPressed;
- (void)unifiedFieldDidChange;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

