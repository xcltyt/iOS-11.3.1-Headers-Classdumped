/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicProductTracklistTableViewController.h>

@class MusicLibraryAlbumsViewConfiguration;

@interface MusicProfileAlbumsViewController : MusicProductTracklistTableViewController {

	BOOL _collapseSections;
	MusicLibraryAlbumsViewConfiguration* _libraryAlbumsViewConfiguration;

}

@property (nonatomic,readonly) MusicLibraryAlbumsViewConfiguration * libraryAlbumsViewConfiguration; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)_updateCollapseSections;
-(MusicLibraryAlbumsViewConfiguration *)libraryAlbumsViewConfiguration;
-(void)_setCollapseSections:(BOOL)arg1 ;
-(long long)handleSelectionOfSectionHeaderForSectionEntityValueContext:(id)arg1 ;
-(void)tableViewDataDidReload;
@end
