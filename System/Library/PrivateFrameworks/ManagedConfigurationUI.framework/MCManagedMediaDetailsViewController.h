/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class MCUIProfile, MCBook, NSString;

@interface MCManagedMediaDetailsViewController : UITableViewController <PSStateRestoration> {

	MCUIProfile* _UIProfile;
	MCBook* _managedBook;

}

@property (nonatomic,retain) MCUIProfile * UIProfile;               //@synthesize UIProfile=_UIProfile - In the implementation block
@property (nonatomic,retain) MCBook * managedBook;                  //@synthesize managedBook=_managedBook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)_setup;
-(MCUIProfile *)UIProfile;
-(void)setManagedBook:(MCBook *)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(MCBook *)managedBook;
-(id)initWithUIProfile:(id)arg1 managedBook:(id)arg2 ;
@end
