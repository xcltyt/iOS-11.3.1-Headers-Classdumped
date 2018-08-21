/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PLWallpaperImageViewController.h>

@interface PLStaticWallpaperImageViewController : PLWallpaperImageViewController

@property (assign,nonatomic) BOOL colorSamplingEnabled; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)photoTileViewControllerDidEndGesture:(id)arg1 ;
-(void)setWallpaperForLocations:(long long)arg1 ;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(id)_wallPaperPreviewControllerForPhotoIrisAsset:(id)arg1 ;
-(id)_wallPaperPreviewControllerForAsset:(id)arg1 ;
-(id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4 ;
-(void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)wallpaperImage;
-(void)setColorSamplingEnabled:(BOOL)arg1 ;
-(BOOL)colorSamplingEnabled;
-(id)initWithUIImage:(id)arg1 name:(id)arg2 ;
-(id)initWithPhoto:(id)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
@end
