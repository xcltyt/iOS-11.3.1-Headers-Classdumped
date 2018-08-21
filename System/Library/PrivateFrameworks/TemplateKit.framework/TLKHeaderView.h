/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerStackViewDelegate.h>

@class TLKImage, TLKMultilineText, NSString, TLKImageView, UILabel, TLKVibrantLabel, TLKStackView, TLKRoundedCornerLabel;

@interface TLKHeaderView : TLKView <NUIContainerStackViewDelegate> {

	TLKImage* _image;
	TLKMultilineText* _title;
	TLKMultilineText* _subtitle;
	TLKMultilineText* _trailingText;
	TLKImage* _subtitleImage;
	NSString* _roundedBorderText;
	long long _axis;
	TLKImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _trailingTextLabel;
	TLKVibrantLabel* _subtitleLabel;
	TLKImageView* _subtitleImageView;
	TLKStackView* _subtitleStackView;
	TLKStackView* _outerStackView;
	TLKStackView* _innerStackView;
	TLKRoundedCornerLabel* _roundedCornerLabel;

}

@property (retain) TLKImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UILabel * trailingTextLabel;                             //@synthesize trailingTextLabel=_trailingTextLabel - In the implementation block
@property (retain) TLKVibrantLabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (retain) TLKImageView * subtitleImageView;                        //@synthesize subtitleImageView=_subtitleImageView - In the implementation block
@property (retain) TLKStackView * subtitleStackView;                        //@synthesize subtitleStackView=_subtitleStackView - In the implementation block
@property (retain) TLKStackView * outerStackView;                           //@synthesize outerStackView=_outerStackView - In the implementation block
@property (retain) TLKStackView * innerStackView;                           //@synthesize innerStackView=_innerStackView - In the implementation block
@property (retain) TLKRoundedCornerLabel * roundedCornerLabel;              //@synthesize roundedCornerLabel=_roundedCornerLabel - In the implementation block
@property (retain) TLKImage * image;                                        //@synthesize image=_image - In the implementation block
@property (retain) TLKMultilineText * title;                                //@synthesize title=_title - In the implementation block
@property (retain) TLKMultilineText * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (retain) TLKMultilineText * trailingText;                         //@synthesize trailingText=_trailingText - In the implementation block
@property (retain) TLKImage * subtitleImage;                                //@synthesize subtitleImage=_subtitleImage - In the implementation block
@property (retain) NSString * roundedBorderText;                            //@synthesize roundedBorderText=_roundedBorderText - In the implementation block
@property (assign) long long axis;                                          //@synthesize axis=_axis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TLKMultilineText *)trailingText;
-(id)init;
-(void)setImage:(TLKImage *)arg1 ;
-(void)setTitle:(TLKMultilineText *)arg1 ;
-(TLKMultilineText *)title;
-(void)setAxis:(long long)arg1 ;
-(UILabel *)titleLabel;
-(TLKImage *)image;
-(TLKImageView *)imageView;
-(long long)axis;
-(void)setSubtitle:(TLKMultilineText *)arg1 ;
-(TLKMultilineText *)subtitle;
-(id)hasImage;
-(id)titleLabelFont;
-(void)setImageView:(TLKImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(TLKVibrantLabel *)subtitleLabel;
-(void)setSubtitleLabel:(TLKVibrantLabel *)arg1 ;
-(void)styleDidChange:(unsigned long long)arg1 ;
-(void)observedPropertiesChanged;
-(id)observableProperties;
-(id)titleLabelText;
-(id)subtitleLabelText;
-(void)setOuterStackView:(TLKStackView *)arg1 ;
-(void)setSubtitleImageView:(TLKImageView *)arg1 ;
-(void)setSubtitleStackView:(TLKStackView *)arg1 ;
-(void)setTrailingTextLabel:(UILabel *)arg1 ;
-(UILabel *)trailingTextLabel;
-(TLKImageView *)subtitleImageView;
-(TLKRoundedCornerLabel *)roundedCornerLabel;
-(TLKStackView *)outerStackView;
-(TLKImage *)subtitleImage;
-(TLKStackView *)subtitleStackView;
-(NSString *)roundedBorderText;
-(void)setRoundedCornerLabel:(TLKRoundedCornerLabel *)arg1 ;
-(id)roundedCornerLabelText;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(void)setInnerStackView:(TLKStackView *)arg1 ;
-(TLKStackView *)innerStackView;
-(void)setSubtitleImage:(TLKImage *)arg1 ;
-(void)setRoundedBorderText:(NSString *)arg1 ;
-(void)setTrailingText:(TLKMultilineText *)arg1 ;
@end
