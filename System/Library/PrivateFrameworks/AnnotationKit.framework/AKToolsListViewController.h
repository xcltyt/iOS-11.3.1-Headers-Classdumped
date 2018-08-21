/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol AKToolsListViewControllerDelegate;
@class UITableView, NSString;

@interface AKToolsListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id<AKToolsListViewControllerDelegate> _delegate;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;                           //@synthesize tableView=_tableView - In the implementation block
@property (__weak) id<AKToolsListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AKToolsListViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AKToolsListViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_shapeButtonPressed:(id)arg1 ;
-(id)_buttonViewForText;
-(void)addRowView:(id)arg1 toCellView:(id)arg2 ;
-(id)_buttonViewForSignature;
-(id)_buttonViewForLoupe;
-(id)_buttonViewForShapes;
-(id)_buttonViewWithImage:(id)arg1 title:(id)arg2 ;
@end
