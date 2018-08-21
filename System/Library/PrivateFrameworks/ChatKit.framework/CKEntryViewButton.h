/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class UIColor;

@interface CKEntryViewButton : UIButton {

	UIColor* _ckTintColor;
	long long _entryViewButtonType;

}

@property (assign,nonatomic) long long entryViewButtonType;              //@synthesize entryViewButtonType=_entryViewButtonType - In the implementation block
@property (nonatomic,retain) UIColor * ckTintColor;                      //@synthesize ckTintColor=_ckTintColor - In the implementation block
+(id)entryViewButtonImageForType:(long long)arg1 ;
+(id)entryViewButtonOfType:(long long)arg1 ;
+(id)imageNameForEntryViewButtonType:(long long)arg1 ;
+(void)prewarmEntryViewButtons;
-(void)setCkTintColor:(UIColor *)arg1 ;
-(void)setDefaultImage;
-(void)setTintedImageForButtonType:(long long)arg1 tintColor:(id)arg2 ;
-(void)setEntryViewButtonType:(long long)arg1 ;
-(long long)entryViewButtonType;
-(UIColor *)ckTintColor;
@end
