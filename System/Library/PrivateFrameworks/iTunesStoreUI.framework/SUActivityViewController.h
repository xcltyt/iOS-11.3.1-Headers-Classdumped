/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@class NSMutableDictionary, NSArray;

@interface SUActivityViewController : UIActivityViewController {

	NSMutableDictionary* _customTitles;
	NSArray* _suActivityItems;
	long long _transitionSafetyCount;

}
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(void)_performActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(id)_titleForActivity:(id)arg1 ;
-(void)setTitle:(id)arg1 forActivityType:(id)arg2 ;
@end
