/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIView.h>

@class UISearchBar;

@interface _SFFindOnPageInputBarContainer : UIView {

	UISearchBar* _inputBar;
	double _maximumWidth;

}

@property (nonatomic,readonly) UISearchBar * inputBar;              //@synthesize inputBar=_inputBar - In the implementation block
@property (assign,nonatomic) double maximumWidth;                   //@synthesize maximumWidth=_maximumWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setMaximumWidth:(double)arg1 ;
-(double)maximumWidth;
-(float)contentCompressionResistancePriorityForAxis:(long long)arg1 ;
-(float)contentHuggingPriorityForAxis:(long long)arg1 ;
-(UISearchBar *)inputBar;
@end
