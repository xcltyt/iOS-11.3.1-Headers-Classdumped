/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIImage, UIImageView, UIColor, CAFilter, TVImageProxy;

@interface _TVImageView : UIControl {

	BOOL _rendersImageAsTemplates;
	UIImage* _image;
	UIImageView* _imageView;
	UIColor* __focusedColor;
	long long _imageContentMode;
	UIImage* _flatImage;
	UIImage* _flatHighlightImage;
	BOOL _selected;
	double _cornerRadius;
	BOOL _continuousCorners;
	CAFilter* _highlightFilter;
	BOOL _imageContainsCornerRadius;
	BOOL _imageLoaded;
	BOOL __enableEdgeAntialiasingOnSelected;
	UIImage* _placeholderImage;
	TVImageProxy* _imageProxy;
	/*^block*/id _completion;
	UIColor* __tintColor;

}

@property (nonatomic,copy) id completion;                                                                                      //@synthesize completion=_completion - In the implementation block
@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                                                            //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                                                       //@synthesize _tintColor=__tintColor - In the implementation block
@property (setter=_setFocusedColor:,nonatomic,retain) UIColor * _focusedColor;                                                 //@synthesize _focusedColor=__focusedColor - In the implementation block
@property (assign,setter=_setEnableEdgeAntialiasingOnSelected:,nonatomic) BOOL _enableEdgeAntialiasingOnSelected;              //@synthesize _enableEdgeAntialiasingOnSelected=__enableEdgeAntialiasingOnSelected - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage;                                                                       //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) BOOL imageContainsCornerRadius;                                                                   //@synthesize imageContainsCornerRadius=_imageContainsCornerRadius - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                                                                        //@synthesize imageProxy=_imageProxy - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)_imageView;
-(UIColor *)_tintColor;
-(UIImage *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setTintColor:(id)arg1 ;
-(long long)contentMode;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_continuousCornerRadius;
-(double)_cornerRadius;
-(void)_setCornerRadius:(double)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_setContentRectInPixels:(CGRect)arg1 forContentSize:(CGSize)arg2 ;
-(void)_resetContentRect;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)_updateImageView;
-(BOOL)isImageLoaded;
-(void)_setImage:(id)arg1 ;
-(void)_updateCornerRadius;
-(void)setImageLoaded:(BOOL)arg1 ;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)_loadImage;
-(void)setImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_enableEdgeAntialiasingOnSelected;
-(void)setImageContainsCornerRadius:(BOOL)arg1 ;
-(void)_reloadImageForLayoutDirectionChange;
-(void)_setFocusedColor:(id)arg1 ;
-(BOOL)imageContainsCornerRadius;
-(UIColor *)_focusedColor;
-(void)_setEnableEdgeAntialiasingOnSelected:(BOOL)arg1 ;
@end
