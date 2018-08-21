/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/DoNotDisturbSettings.bundle/DoNotDisturbSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbSettings/DoNotDisturbSettings-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, UIDatePicker, PSTableCell, NSString;

@interface DateRangePane : PSEditingPane <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	UIDatePicker* _datePicker;
	PSTableCell* _fromCell;
	PSTableCell* _toCell;
	CFDateFormatterRef _timeFormatter;
	int _selectedIndex;

}

@property (nonatomic,retain) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
@property (assign,nonatomic) int selectedIndex;                      //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)update;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(UIDatePicker *)datePicker;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
@end
