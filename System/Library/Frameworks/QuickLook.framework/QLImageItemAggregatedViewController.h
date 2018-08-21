/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemAggregatedViewController.h>

@class QLMarkupImageItemViewController, QLImageItemViewController;

@interface QLImageItemAggregatedViewController : QLItemAggregatedViewController {

	QLMarkupImageItemViewController* _imageMarkupPreviewController;
	QLImageItemViewController* _imagePreviewController;

}
+(Class)transformerClass;
+(BOOL)shouldBeRemoteForContentType:(id)arg1 ;
+(id)supportedContentTypes;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_imageMarkupPreviewController;
-(id)_imagePreviewController;
@end
