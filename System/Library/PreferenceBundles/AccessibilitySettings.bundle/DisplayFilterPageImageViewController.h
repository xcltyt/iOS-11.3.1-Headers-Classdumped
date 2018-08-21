/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/DisplayFilterPageViewController.h>

@class UIImageView, NSLayoutConstraint, UIImage;

@interface DisplayFilterPageImageViewController : DisplayFilterPageViewController {

	BOOL _stretchHorizontal;
	UIImageView* _imageView;
	NSLayoutConstraint* _imageAspectConstraint;

}

@property (nonatomic,retain) UIImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageAspectConstraint;              //@synthesize imageAspectConstraint=_imageAspectConstraint - In the implementation block
@property (assign,nonatomic) BOOL stretchHorizontal;                                  //@synthesize stretchHorizontal=_stretchHorizontal - In the implementation block
@property (nonatomic,retain) UIImage * displayImage; 
-(id)initWithImageName:(id)arg1 stretchHorizontal:(BOOL)arg2 ;
-(void)setStretchHorizontal:(BOOL)arg1 ;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(BOOL)stretchHorizontal;
-(void)setImageAspectConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageAspectConstraint;
-(void)loadView;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImage *)displayImage;
@end
