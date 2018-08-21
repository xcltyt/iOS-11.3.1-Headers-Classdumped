/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/ClassKitSettings.bundle/ClassKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class CLSCurrentUser, PSSpecifier, NSMutableArray, NSMutableDictionary;

@interface CLSClassKitSettingsController : PSListController {

	BOOL _fetchAllActivities;
	CLSCurrentUser* _cachedCurrentUser;
	PSSpecifier* _allowBrowseToggleSpecifier;
	NSMutableArray* _userProgressActivities;
	NSMutableDictionary* _objectIDToContextMap;

}

@property (nonatomic,retain) CLSCurrentUser * cachedCurrentUser;                      //@synthesize cachedCurrentUser=_cachedCurrentUser - In the implementation block
@property (nonatomic,retain) PSSpecifier * allowBrowseToggleSpecifier;                //@synthesize allowBrowseToggleSpecifier=_allowBrowseToggleSpecifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * userProgressActivities;                 //@synthesize userProgressActivities=_userProgressActivities - In the implementation block
@property (assign,nonatomic) BOOL fetchAllActivities;                                 //@synthesize fetchAllActivities=_fetchAllActivities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * objectIDToContextMap;              //@synthesize objectIDToContextMap=_objectIDToContextMap - In the implementation block
-(void)showMoreTapped:(id)arg1 ;
-(id)createTeacherSpecifiers;
-(id)createStudentSpecifiers;
-(void)setAllowBrowseSync:(id)arg1 specifier:(id)arg2 ;
-(id)allowBrowseSync:(id)arg1 ;
-(void)setAllowBrowseToggleSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)allowBrowseToggleSpecifier;
-(void)showProgressPrivacyInfo:(id)arg1 ;
-(void)loadUserProgressActivities;
-(NSMutableArray *)userProgressActivities;
-(id)specifierWithProgressActivity:(id)arg1 ;
-(BOOL)fetchAllActivities;
-(void)setUserProgressActivities:(NSMutableArray *)arg1 ;
-(void)setFetchAllActivities:(BOOL)arg1 ;
-(NSMutableDictionary *)objectIDToContextMap;
-(void)setObjectIDToContextMap:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)specifiers;
-(CLSCurrentUser *)cachedCurrentUser;
-(void)setCachedCurrentUser:(CLSCurrentUser *)arg1 ;
@end
