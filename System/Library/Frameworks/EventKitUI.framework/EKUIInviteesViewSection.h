/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKUIInviteesViewSection <NSObject>
@optional
-(BOOL)hideDivderLineForindexPath:(id)arg1;

@required
-(unsigned long long)numberOfRows;
-(id)headerTitle;
-(id)debugTitle;
-(BOOL)sectionShouldBeShown;
-(id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
-(void)selectRow:(id)arg1;
-(double)estimatedHeightForRow:(id)arg1;
-(BOOL)canEditRow:(id)arg1;
-(long long)editingStyleForRow:(id)arg1;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg1;
-(void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
-(void)setTableViewCellHook:(/*^block*/id)arg1;
-(void)cancelOutstandingOperations;
-(BOOL)canSelectRow:(id)arg1;

@end
