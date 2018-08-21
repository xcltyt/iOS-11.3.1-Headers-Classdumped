/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol HUWallpaperEditingViewControllerDelegate;
@class HFWallpaper, UIImage, UIScrollView, UIImageView, UIView, UIButton, UIVisualEffectView, NSString;

@interface HUWallpaperEditingViewController : UIViewController <UIScrollViewDelegate> {

	BOOL _statusBarHidden;
	id<HUWallpaperEditingViewControllerDelegate> _delegate;
	HFWallpaper* _wallpaper;
	UIImage* _image;
	UIScrollView* _scrollView;
	UIImageView* _imageView;
	UIView* _buttonContainerView;
	UIView* _buttonSeparatorView;
	UIButton* _cancelButton;
	UIButton* _setButton;
	UIVisualEffectView* _buttonBackgroundView;

}

@property (assign,nonatomic) BOOL statusBarHidden;                                                      //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (nonatomic,retain) HFWallpaper * wallpaper;                                                   //@synthesize wallpaper=_wallpaper - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * buttonContainerView;                                              //@synthesize buttonContainerView=_buttonContainerView - In the implementation block
@property (nonatomic,retain) UIView * buttonSeparatorView;                                              //@synthesize buttonSeparatorView=_buttonSeparatorView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * setButton;                                                      //@synthesize setButton=_setButton - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * buttonBackgroundView;                                 //@synthesize buttonBackgroundView=_buttonBackgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<HUWallpaperEditingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUWallpaperEditingViewControllerDelegate>)delegate;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<HUWallpaperEditingViewControllerDelegate>)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(BOOL)statusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(UIImage *)image;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(UIImageView *)imageView;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)cancelButton;
-(void)buttonPressed:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)_createButtonViews;
-(UIView *)buttonContainerView;
-(id)_createButtonConstraints;
-(void)updateScrollViewScale;
-(UIButton *)setButton;
-(HFWallpaper *)wallpaper;
-(void)setButtonContainerView:(UIView *)arg1 ;
-(void)setButtonBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)buttonBackgroundView;
-(id)transparentButtonWithTitle:(id)arg1 ;
-(void)setSetButton:(UIButton *)arg1 ;
-(void)setButtonSeparatorView:(UIView *)arg1 ;
-(UIView *)buttonSeparatorView;
-(void)buttonTouchStarted:(id)arg1 ;
-(void)buttonTouchFinished:(id)arg1 ;
-(id)initWithWallpaper:(id)arg1 image:(id)arg2 delegate:(id)arg3 ;
-(void)setWallpaper:(HFWallpaper *)arg1 ;
@end
