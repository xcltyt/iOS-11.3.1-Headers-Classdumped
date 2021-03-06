/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUIconCell.h>

@class UILabel, NSString, UIFont, NSArray, UIStackView;

@interface HUTitleValueCell : HUIconCell {

	BOOL _hideTitle;
	BOOL _hideValue;
	BOOL _titleColorFollowsTintColor;
	BOOL _valueColorFollowsTintColor;
	BOOL _allowCopyValueToPasteboard;
	UILabel* _titleLabel;
	UILabel* _valueLabel;
	NSString* _titleText;
	UIFont* _titleFont;
	NSString* _valueText;
	UIFont* _valueFont;
	long long _compressionResistancePolicy;
	NSArray* _stackViewConstraints;
	UIStackView* _labelsStackView;

}

@property (nonatomic,retain) NSArray * stackViewConstraints;                     //@synthesize stackViewConstraints=_stackViewConstraints - In the implementation block
@property (nonatomic,retain) UIStackView * labelsStackView;                      //@synthesize labelsStackView=_labelsStackView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                             //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSString * titleText;                               //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                 //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic) BOOL hideTitle;                                     //@synthesize hideTitle=_hideTitle - In the implementation block
@property (nonatomic,retain) NSString * valueText;                               //@synthesize valueText=_valueText - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                                 //@synthesize valueFont=_valueFont - In the implementation block
@property (assign,nonatomic) BOOL hideValue;                                     //@synthesize hideValue=_hideValue - In the implementation block
@property (assign,nonatomic) BOOL titleColorFollowsTintColor;                    //@synthesize titleColorFollowsTintColor=_titleColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) BOOL valueColorFollowsTintColor;                    //@synthesize valueColorFollowsTintColor=_valueColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) BOOL allowCopyValueToPasteboard;                    //@synthesize allowCopyValueToPasteboard=_allowCopyValueToPasteboard - In the implementation block
@property (assign,nonatomic) long long compressionResistancePolicy;              //@synthesize compressionResistancePolicy=_compressionResistancePolicy - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(NSString *)titleText;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(BOOL)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(void)prepareForReuse;
-(void)copy:(id)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(UILabel *)valueLabel;
-(NSString *)valueText;
-(void)setValueText:(NSString *)arg1 ;
-(void)_updateTitle;
-(void)setValueFont:(UIFont *)arg1 ;
-(UIFont *)valueFont;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setTitleColorFollowsTintColor:(BOOL)arg1 ;
-(void)setHideTitle:(BOOL)arg1 ;
-(void)setValueColorFollowsTintColor:(BOOL)arg1 ;
-(void)ensureCorrectHeaderViewOrientation;
-(void)setCompressionResistancePolicy:(long long)arg1 ;
-(void)setHideValue:(BOOL)arg1 ;
-(void)_addTitleLabel;
-(void)_updateCompressionResistance;
-(long long)compressionResistancePolicy;
-(BOOL)hideTitle;
-(void)_addValueLabel;
-(void)setAllowCopyValueToPasteboard:(BOOL)arg1 ;
-(void)_updateValue;
-(BOOL)allowCopyValueToPasteboard;
-(NSArray *)stackViewConstraints;
-(void)setStackViewConstraints:(NSArray *)arg1 ;
-(BOOL)titleColorFollowsTintColor;
-(BOOL)valueColorFollowsTintColor;
-(BOOL)hideValue;
-(UIStackView *)labelsStackView;
-(void)setLabelsStackView:(UIStackView *)arg1 ;
@end

