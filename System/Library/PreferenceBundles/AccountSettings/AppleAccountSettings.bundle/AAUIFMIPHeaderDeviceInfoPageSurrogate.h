/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/RUITableViewRowDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol UITableViewDelegateUITableViewDataSource, AAUIFMIPHeaderDeviceInfoPageDelegate;
@class NSObject, UITableView, ACAccountStore, ACAccount, RUIPage, AATrustedDevice, NSDictionary, NSString;

@interface AAUIFMIPHeaderDeviceInfoPageSurrogate : NSObject <UITableViewDelegate, RUITableViewRowDelegate, UITableViewDataSource> {

	NSObject*<UITableViewDelegate>*<UITableViewDataSource> _remoteTableViewController;
	UITableView* _remoteTableView;
	ACAccountStore* _accountStore;
	ACAccount* _account;
	RUIPage* _remoteUIPage;
	AATrustedDevice* _device;
	NSDictionary* _remoteClientInfo;
	id<AAUIFMIPHeaderDeviceInfoPageDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIFMIPHeaderDeviceInfoPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_footerForBackupRow;
-(id)_dateStringOfLatestBackup:(id)arg1 ;
-(id)backupForUDID:(id)arg1 ;
-(void)updateDetailLabelWithBackup:(id)arg1 ;
-(void)refreshBackupDetailText:(id)arg1 ;
-(id)cellWithTag:(long long)arg1 ;
-(id)initWithPage:(id)arg1 device:(id)arg2 ;
-(id<AAUIFMIPHeaderDeviceInfoPageDelegate>)delegate;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setDelegate:(id<AAUIFMIPHeaderDeviceInfoPageDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end
