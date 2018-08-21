/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/UsageBundles/MusicUsage.bundle/MusicUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSUsageBundleDetailController.h>

@class NSMutableArray, MusicUsageGroup;

@interface MusicUsageDetailController : PSUsageBundleDetailController {

	NSMutableArray* _usageGroups;
	MusicUsageGroup* _localSongsGroup;

}
-(void)buildUsageGroupForCategory:(id)arg1 usingStorageReporter:(id)arg2 ;
-(id)specifiersFromUsageGroups;
-(void)updateLocalSongsGroupSize;
-(void)updateUsageBundleSizeForCategoryIdentifier:(id)arg1 ;
-(void)deleteUsageItemAtIndexPath:(id)arg1 ;
-(void)addUsageGroup:(id)arg1 ;
-(id)_placeholderAlbumArtistArtworkCatalog;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)removeSpecifierAtIndexPath:(id)arg1 ;
-(id)sizeForSpecifier:(id)arg1 ;
-(id)specifiers;
@end
