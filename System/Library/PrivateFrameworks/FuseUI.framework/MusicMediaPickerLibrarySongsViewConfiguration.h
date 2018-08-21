/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibrarySongsViewConfiguration.h>

@interface MusicMediaPickerLibrarySongsViewConfiguration : MusicLibrarySongsViewConfiguration {

	BOOL _isMultipleSelectionAllowed;

}
-(id)init;
-(void)dealloc;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(BOOL)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithMultipleSelectionAllowed:(BOOL)arg1 ;
-(void)_multipleSelectionAllowanceDidChange:(id)arg1 ;
-(void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3 ;
@end
