/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIVisualEffect.h>

@class _UIBlurEffectImpl, UIColor;

@interface UIBlurEffect : UIVisualEffect {

	_UIBlurEffectImpl* _impl;

}

@property (nonatomic,readonly) BOOL _canProvideVibrancyEffect; 
@property (nonatomic,readonly) long long _style; 
@property (nonatomic,readonly) UIColor * _tintColor; 
@property (nonatomic,readonly) BOOL _invertAutomaticStyle; 
+(BOOL)supportsSecureCoding;
+(id)effectWithStyle:(long long)arg1 ;
+(id)effectWithBlurRadius:(double)arg1 ;
+(id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ;
+(id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3 ;
+(id)_effectWithTintColor:(id)arg1 ;
+(void)_addBlurToEffectNode:(id)arg1 blurRadius:(double)arg2 scale:(double)arg3 options:(id)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(UIColor *)_tintColor;
-(long long)_style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)effectSettings;
-(BOOL)_isATVStyle;
-(BOOL)_isAutomaticStyle;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2 ;
-(BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 ;
-(BOOL)_needsUpdateForOption:(id)arg1 ;
-(long long)_expectedUsage;
-(BOOL)_canProvideVibrancyEffect;
-(BOOL)_invertAutomaticStyle;
-(id)_initWithImplementation:(id)arg1 ;
@end
