//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVFilesContainerViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, SVMetadataItem, UIBarButtonItem, UIViewController<SVFilesChildViewController>;

@interface SVDocPickerFilesContainerViewController : SVFilesContainerViewController <UITextFieldDelegate>
{
    SVMetadataItem *_currentlyDownloadingItem;
    UIViewController<SVFilesChildViewController> *_downloadingFileChildViewController;
    UIBarButtonItem *_exportOrMoveButton;
}

@property(retain, nonatomic) UIBarButtonItem *exportOrMoveButton; // @synthesize exportOrMoveButton=_exportOrMoveButton;
@property(nonatomic) __weak UIViewController<SVFilesChildViewController> *downloadingFileChildViewController; // @synthesize downloadingFileChildViewController=_downloadingFileChildViewController;
@property(retain, nonatomic) SVMetadataItem *currentlyDownloadingItem; // @synthesize currentlyDownloadingItem=_currentlyDownloadingItem;
- (void).cxx_destruct;
- (void)startDownloadingItem:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (_Bool)showDisclosureIndicatorForFiles;
- (void)metadataCacheDidUpdateAttributes:(id)arg1;
- (void)setUpToolbar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)_mangledFilenameForPath:(id)arg1 withExistingFileNames:(id)arg2;
- (void)_showExportOrMoveErrorAlertWithMessage:(id)arg1;
- (void)dismissAfterSuccessfullyExportingOrMovingFileToURL:(id)arg1 forPath:(id)arg2;
- (void)exportOrMoveFileToPath:(id)arg1;
- (void)tryExportOrMoveFileToPath:(id)arg1;
- (void)exportOrMoveButtonPressed:(id)arg1;
- (id)originalURL;
- (id)validTypes;
- (unsigned long long)documentPickerMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
