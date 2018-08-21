/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemViewController.h>

@class UILabel, UIActivityIndicatorView;

@interface QLLoadingItemViewController : QLItemViewController {

	UILabel* _loadingLabel;
	UIActivityIndicatorView* _spinner;

}
-(void)setDelegate:(id)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(void)_updateLoadingLabel;
-(BOOL)canSwipeToDismiss;
@end
