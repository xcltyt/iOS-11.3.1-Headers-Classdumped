//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UILabel, UITableView;

@interface PHSOSNumbersViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <PHSOSNumbersViewControllerDelegate> _delegate;
    UILabel *_titleLabel;
    UITableView *_tableView;
    NSArray *_sosHandles;
}

@property(retain, nonatomic) NSArray *sosHandles; // @synthesize sosHandles=_sosHandles;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <PHSOSNumbersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateSOSHandles:(id)arg1;
- (void)setUpConstraints;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithSOSHandles:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

