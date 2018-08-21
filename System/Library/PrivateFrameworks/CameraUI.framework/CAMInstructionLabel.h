/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@protocol CAMInstructionLabelDelegate;
@class NSString, UILabel;

@interface CAMInstructionLabel : UIView {

	BOOL _useModeDialFontSize;
	NSString* _text;
	id<CAMInstructionLabelDelegate> _delegate;
	long long _style;
	UILabel* __label;

}

@property (nonatomic,readonly) UILabel * _label;                                           //@synthesize _label=__label - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets _textInsets; 
@property (nonatomic,readonly) double _backgroundAlpha; 
@property (nonatomic,copy) NSString * text;                                                //@synthesize text=_text - In the implementation block
@property (assign,nonatomic,__weak) id<CAMInstructionLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long style;                                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL useModeDialFontSize;                                     //@synthesize useModeDialFontSize=_useModeDialFontSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<CAMInstructionLabelDelegate>)delegate;
-(void)setDelegate:(id<CAMInstructionLabelDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UILabel *)_label;
-(void)_updateLabel;
-(id)_textAttributes;
-(double)_backgroundAlpha;
-(UIEdgeInsets)_textInsets;
-(void)updateToContentSize:(id)arg1 ;
-(void)setUseModeDialFontSize:(BOOL)arg1 ;
-(void)_updateLayer;
-(BOOL)useModeDialFontSize;
@end
