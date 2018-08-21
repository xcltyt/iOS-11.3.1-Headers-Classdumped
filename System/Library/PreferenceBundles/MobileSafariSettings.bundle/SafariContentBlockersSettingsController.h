/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <libobjc.A.dylib/SFContentBlockerManagerObserver.h>

@class _UIContentUnavailableView, NSString;

@interface SafariContentBlockersSettingsController : SafariSettingsListController <SFContentBlockerManagerObserver> {

	_UIContentUnavailableView* _contentUnavailableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)contentBlockerManagerExtensionListDidChange:(id)arg1 ;
-(id)specifiers;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_valueOfSpecifier:(id)arg1 ;
-(void)_showContentUnavailableView;
-(void)_hideContentUnavailableView;
@end
