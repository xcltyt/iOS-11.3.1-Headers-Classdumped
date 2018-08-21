/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface UIPickerContentView : UIView {

	UILabel* _titleLabel;
	UIImageView* _checkView;
	struct {
		unsigned checked : 1;
		unsigned highlighted : 1;
	}  _pickerContentViewFlags;

}

@property (assign,getter=isChecked,nonatomic) BOOL checked; 
@property (nonatomic,readonly) UILabel * titleLabel; 
+(double)_checkmarkOffset;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)_isSelectable;
-(double)labelWidthForBounds:(CGRect)arg1 ;
-(BOOL)isChecked;
-(id)checkedColor;
@end
