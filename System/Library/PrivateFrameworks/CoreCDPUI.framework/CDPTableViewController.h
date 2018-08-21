/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSString, UIView, UITableView, BFFPaneHeaderView;

@interface CDPTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSString* _headerTitle;
	NSString* _headerSubTitle;
	/*^block*/id _completionHandler;
	UIView* _containerView;
	UITableView* _tableView;
	BFFPaneHeaderView* _headerView;

}

@property (nonatomic,retain) UIView * containerView;                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) BFFPaneHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                        //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSString * headerSubTitle;                     //@synthesize headerSubTitle=_headerSubTitle - In the implementation block
@property (nonatomic,copy) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceClass; 
@property (nonatomic,readonly) BOOL isIPad; 
@property (nonatomic,readonly) BOOL isiPhone5OrSmaller; 
@property (nonatomic,readonly) BOOL uiTestMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)deviceClass;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(UIView *)containerView;
-(void)loadView;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(double)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BFFPaneHeaderView *)headerView;
-(void)setHeaderView:(BFFPaneHeaderView *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(BOOL)isIPad;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 ;
-(void)setHeaderSubTitle:(NSString *)arg1 ;
-(BOOL)isiPhone5OrSmaller;
-(BOOL)uiTestMode;
-(NSString *)headerSubTitle;
@end
