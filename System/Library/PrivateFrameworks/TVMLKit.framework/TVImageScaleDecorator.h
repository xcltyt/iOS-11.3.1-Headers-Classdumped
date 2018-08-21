/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageDecorator.h>

@class UIColor;

@interface TVImageScaleDecorator : TVImageDecorator {

	BOOL _decoratedImageIsEquivalentToOriginal;
	BOOL _cornerContinuous;
	long long _scaleMode;
	double _focusedSizeIncrease;
	UIColor* _bgColor;
	CGSize _scaleToSize;
	UIEdgeInsets _padding;
	TVCornerRadii _cornerRadii;

}

@property (assign,nonatomic) CGSize scaleToSize;                      //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (assign,nonatomic) long long scaleMode;                     //@synthesize scaleMode=_scaleMode - In the implementation block
@property (assign,nonatomic) double focusedSizeIncrease;              //@synthesize focusedSizeIncrease=_focusedSizeIncrease - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                    //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) TVCornerRadii cornerRadii;               //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (assign,nonatomic) BOOL cornerContinuous;                   //@synthesize cornerContinuous=_cornerContinuous - In the implementation block
@property (nonatomic,copy) UIColor * bgColor;                         //@synthesize bgColor=_bgColor - In the implementation block
@property (assign,nonatomic) BOOL cropToFit; 
@property (assign,nonatomic) double upscaleAdjustment; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(void)setCornerRadii:(TVCornerRadii)arg1 ;
-(void)setFocusedSizeIncrease:(double)arg1 ;
-(double)focusedSizeIncrease;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(TVCornerRadii)cornerRadii;
-(id)initWithScaleToSize:(CGSize)arg1 scaleMode:(long long)arg2 ;
-(CGSize)scaleToSize;
-(CGSize)_scaleToSizeAdjustedForUpscaling;
-(UIEdgeInsets)_paddingAdjustedForUpscaling;
-(BOOL)needsAlphaForImage:(id)arg1 ;
-(void)_applyCornerMaskForRect:(CGRect)arg1 toContext:(CGContextRef)arg2 ;
-(id)_imageFixedForRotation:(id)arg1 ;
-(CGSize)expectedSize;
-(double)_focusedSizeIncreaseFactor;
-(BOOL)cornerContinuous;
-(id)initWithScaleToSize:(CGSize)arg1 ;
-(id)initWithScaleToSize:(CGSize)arg1 cropToFit:(BOOL)arg2 ;
-(BOOL)cropToFit;
-(void)setCropToFit:(BOOL)arg1 ;
-(double)upscaleAdjustment;
-(void)setUpscaleAdjustment:(double)arg1 ;
-(id)decoratorIdentifier;
-(CGSize)loaderScaleToSize;
-(BOOL)loaderCropToFit;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(void)_setDecoratedImageIsEquivalentToOriginal:(BOOL)arg1 ;
-(void)setScaleToSize:(CGSize)arg1 ;
-(void)setCornerContinuous:(BOOL)arg1 ;
-(void)setBgColor:(UIColor *)arg1 ;
-(UIColor *)bgColor;
@end
