/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, UILabel, UITableViewController, UIView, PKPaymentSetupDockView, _UIBackdropView, NSIndexPath, NSString;

@interface PKPaymentSetupTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	UILabel* _footerLabel;
	UITableViewController* _tableViewController;
	UIView* _containerView;
	long long _style;
	PKPaymentSetupDockView* _dockView;
	_UIBackdropView* _backdropView;
	long long _backdropStyle;
	double _backdropWeight;
	BOOL _updatingBackdropSettings;
	BOOL _clearsSelectionOnViewWillAppear;
	long long _context;
	NSIndexPath* _selectedIndexPath;

}

@property (assign,nonatomic) long long context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UILabel * footerLabel; 
@property (nonatomic,readonly) PKPaymentSetupDockView * dockView; 
@property (assign,nonatomic) BOOL clearsSelectionOnViewWillAppear;                //@synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * selectedIndexPath;              //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(long long)context;
-(void)viewWillLayoutSubviews;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)extendedLayoutIncludesOpaqueBars;
-(unsigned long long)edgesForExtendedLayout;
-(void)setContext:(long long)arg1 ;
-(void)setClearsSelectionOnViewWillAppear:(BOOL)arg1 ;
-(BOOL)clearsSelectionOnViewWillAppear;
-(PKPaymentSetupDockView *)dockView;
-(UILabel *)footerLabel;
-(id)initWithStyle:(long long)arg1 context:(long long)arg2 ;
-(void)_accessibilitySettingsDidChange:(id)arg1 ;
-(NSIndexPath *)selectedIndexPath;
@end
