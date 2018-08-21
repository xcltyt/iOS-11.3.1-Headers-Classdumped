/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIStackView, AKController;

@interface AKModernToolbarPicker : UIControl {

	UIStackView* _stackview;
	AKController* _controller;
	long long _currentTag;

}

@property (assign,nonatomic,__weak) AKController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UIStackView * stackview;                       //@synthesize stackview=_stackview - In the implementation block
@property (assign,nonatomic) long long currentTag;                          //@synthesize currentTag=_currentTag - In the implementation block
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithFrame:(CGRect)arg1 controller:(id)arg2 ;
-(UIStackView *)stackview;
-(void)setCurrentTag:(long long)arg1 ;
-(void)revalidateItems:(id)arg1 ;
-(long long)currentTag;
-(void)setStackview:(UIStackView *)arg1 ;
@end
