/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentAuthorizationLayout, UILabel, NSMutableArray, UIView, UIImageView, NSAttributedString, UIImage, NSString;

@interface PKPaymentAuthorizationItemCell : PKTableViewCell {

	PKPaymentAuthorizationLayout* _layout;
	UILabel* _labelView;
	NSMutableArray* _valueViews;
	UIView* _separatorView;
	UIImageView* _arrowView;
	UIImageView* _alertView;
	UIImageView* _labelImageView;
	NSMutableArray* _constraints;
	BOOL _showsDisclosure;
	BOOL _showsSeperator;
	NSAttributedString* _label;
	UIImage* _labelImage;
	NSString* _accessibilityLabel;
	NSAttributedString* _value;

}

@property (nonatomic,copy) NSAttributedString * label;                 //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) UIImage * labelImage;                       //@synthesize labelImage=_labelImage - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy) NSAttributedString * value;                 //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL showsDisclosure;                     //@synthesize showsDisclosure=_showsDisclosure - In the implementation block
@property (assign,nonatomic) BOOL showsSeperator;                      //@synthesize showsSeperator=_showsSeperator - In the implementation block
-(void)dealloc;
-(void)updateConstraints;
-(void)setValue:(NSAttributedString *)arg1 ;
-(NSAttributedString *)value;
-(void)prepareForReuse;
-(NSAttributedString *)label;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setLabel:(NSAttributedString *)arg1 ;
-(void)_createSubviews;
-(id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShowsDisclosure:(BOOL)arg1 ;
-(void)setShowsSeperator:(BOOL)arg1 ;
-(id)addValue:(id)arg1 isPlaceholder:(BOOL)arg2 ;
-(void)setLabelImage:(UIImage *)arg1 ;
-(void)setValue:(id)arg1 isPlaceholder:(BOOL)arg2 ;
-(id)_createValueView;
-(id)_applyStylingToValueString:(id)arg1 defaultColor:(id)arg2 ;
-(UIImage *)labelImage;
-(BOOL)showsDisclosure;
-(BOOL)showsSeperator;
@end
