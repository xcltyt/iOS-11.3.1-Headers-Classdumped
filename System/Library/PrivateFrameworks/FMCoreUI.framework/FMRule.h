/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface FMRule : UIView {

	BOOL _leading;
	UIColor* _color;
	UIImageView* _imageView;

}

@property (assign,nonatomic) BOOL leading;                         //@synthesize leading=_leading - In the implementation block
@property (nonatomic,retain) UIColor * color;                      //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(id)imageWithColor:(id)arg1 leading:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)awakeFromNib;
-(UIImageView *)imageView;
-(void)prepareForInterfaceBuilder;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)leading;
-(void)setLeading:(BOOL)arg1 ;
-(void)commonSetup;
@end
