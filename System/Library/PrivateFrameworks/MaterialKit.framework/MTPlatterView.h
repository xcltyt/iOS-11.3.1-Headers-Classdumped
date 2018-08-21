/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MaterialKit/MaterialKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MTMaterialSettingsObserving.h>
#import <libobjc.A.dylib/MTPlatterInternal.h>
#import <libobjc.A.dylib/MTPlatter.h>

@class UIView, UIImageView, MTMaterialView, NSString;

@interface MTPlatterView : UIView <MTMaterialSettingsObserving, MTPlatterInternal, MTPlatter> {

	long long _recipe;
	unsigned long long _options;
	UIImageView* _shadowView;
	UIView* _mainContainerView;
	MTMaterialView* _mainOverlayView;
	UIView* _customContentView;
	BOOL _hasShadow;
	BOOL _backgroundBlurred;
	BOOL _usesBackgroundView;
	UIView* _backgroundView;
	double _cornerRadius;

}

@property (nonatomic,readonly) long long recipe; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) MTMaterialView * backgroundMaterialView; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double cornerRadius;                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundView;                                        //@synthesize usesBackgroundView=_usesBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,readonly) UIView * customContentView;                                   //@synthesize customContentView=_customContentView - In the implementation block
@property (assign,nonatomic) BOOL hasShadow;                                                 //@synthesize hasShadow=_hasShadow - In the implementation block
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred;              //@synthesize backgroundBlurred=_backgroundBlurred - In the implementation block
+(id)_shadowImageMask;
+(CGRect)_shadowImage:(id)arg1 frameForPlatterViewBounds:(CGRect)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(unsigned long long)options;
-(NSString *)groupName;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)hasShadow;
-(void)setHasShadow:(BOOL)arg1 ;
-(UIView *)customContentView;
-(void)_configureMainOverlayView;
-(void)_configureBackgroundView:(id)arg1 ;
-(unsigned long long)_optionsForBackgroundWithBlur:(BOOL)arg1 ;
-(id)_newDefaultBackgroundView;
-(void)_configureMainContainerViewIfNecessary;
-(void)_configureShadowViewIfNecessary;
-(void)_configureMainOverlayViewIfNecessary;
-(void)_configureCustomContentView;
-(void)setUsesBackgroundView:(BOOL)arg1 ;
-(void)_willRemoveCustomContent:(id)arg1 ;
-(BOOL)usesBackgroundView;
-(long long)recipe;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(BOOL)isBackgroundBlurred;
-(void)setBackgroundBlurred:(BOOL)arg1 ;
-(void)_configureCustomContentViewIfNecessary;
-(id)vibrantStylingProvider;
-(void)_configureBackgroundViewIfNecessary;
-(id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2 ;
-(MTMaterialView *)backgroundMaterialView;
@end
