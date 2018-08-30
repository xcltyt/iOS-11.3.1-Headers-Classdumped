//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IASKViewController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IASKMultipleValueSelection, IASKSettingsReader, IASKSpecifier, NSString, UITableView;
@protocol IASKSettingsStore;

@interface IASKSpecifierValuesViewController : UIViewController <IASKViewController, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    IASKSpecifier *_currentSpecifier;
    IASKSettingsReader *_settingsReader;
    _Bool _didFirstLayout;
    id <IASKSettingsStore> _settingsStore;
    IASKMultipleValueSelection *_selection;
}

@property(nonatomic) _Bool didFirstLayout; // @synthesize didFirstLayout=_didFirstLayout;
@property(readonly, nonatomic) IASKMultipleValueSelection *selection; // @synthesize selection=_selection;
@property(retain, nonatomic) id <IASKSettingsStore> settingsStore; // @synthesize settingsStore=_settingsStore;
@property(retain, nonatomic) IASKSettingsReader *settingsReader; // @synthesize settingsReader=_settingsReader;
@property(retain, nonatomic) IASKSpecifier *currentSpecifier; // @synthesize currentSpecifier=_currentSpecifier;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

