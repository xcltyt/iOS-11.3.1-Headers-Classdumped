/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/UsageBundles/NanoBackupUsage.bundle/NanoBackupUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSUsageBundleDetailController.h>

@class UIAlertController, NSArray;

@interface NBUsageDetailController : PSUsageBundleDetailController {

	UIAlertController* _deleteAllAlertController;
	NSArray* _deleteButtonSpecifiers;

}

@property (nonatomic,retain) UIAlertController * deleteAllAlertController;              //@synthesize deleteAllAlertController=_deleteAllAlertController - In the implementation block
@property (nonatomic,retain) NSArray * deleteButtonSpecifiers;                          //@synthesize deleteButtonSpecifiers=_deleteButtonSpecifiers - In the implementation block
-(void)showDeleteAllAlert;
-(void)deleteAllBackups;
-(NSArray *)deleteButtonSpecifiers;
-(void)setDeleteAllAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)deleteAllAlertController;
-(void)setDeleteButtonSpecifiers:(NSArray *)arg1 ;
-(void)loadView;
-(void)setEditable:(BOOL)arg1 ;
-(id)specifiers;
@end
