/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarItemView.h>

@class UIButton, NSString;

@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView {

	int _currentLabelCompressionLevel;
	UIButton* _button;
	double _maxWidth;

}

@property (nonatomic,retain) UIButton * button;                             //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) double maxWidth;                               //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) int currentLabelCompressionLevel;              //@synthesize currentLabelCompressionLevel=_currentLabelCompressionLevel - In the implementation block
-(UIButton *)button;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)accessibilityHUDRepresentation;
-(double)extraRightPadding;
-(double)updateContentsAndWidth;
-(double)extraLeftPadding;
-(void)setCurrentLabelCompressionLevel:(int)arg1 ;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(BOOL)layoutImageOnTrailingEdge;
-(void)userDidActivateButton:(id)arg1 ;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(BOOL)_shouldLayoutImageOnRight;
-(long long)labelLineBreakMode;
-(CGSize)_buttonSize;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(int)currentLabelCompressionLevel;
@end
