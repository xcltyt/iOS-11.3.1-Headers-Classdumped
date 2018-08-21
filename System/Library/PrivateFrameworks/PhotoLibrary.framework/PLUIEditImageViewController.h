/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PLUIImageViewController.h>

@interface PLUIEditImageViewController : PLUIImageViewController {

	id _delegate;
	int _saveOptions;
	int _mode;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                 //@synthesize mode=_mode - In the implementation block
-(id)photo;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(int)mode;
-(void)setMode:(int)arg1 ;
-(int)imageFormat;
-(unsigned long long)_contentAutoresizingMask;
-(unsigned long long)_tileAutoresizingMask;
-(id)imageTile;
-(void)setImageSavingOptions:(int)arg1 ;
-(id)initWithPhoto:(id)arg1 ;
-(int)cropOverlayMode;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(int)saveOptions;
@end
