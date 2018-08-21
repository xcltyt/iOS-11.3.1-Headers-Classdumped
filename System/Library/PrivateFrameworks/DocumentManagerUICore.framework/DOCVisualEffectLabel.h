/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIVisualEffectView, UIVisualEffect;

@interface DOCVisualEffectLabel : UIView {

	UILabel* _label;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,copy) UIVisualEffect * effect; 
@property (nonatomic,readonly) UILabel * label;                                    //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)label;
-(id)viewForLastBaselineLayout;
-(void)setEffect:(UIVisualEffect *)arg1 ;
-(id)initWithEffect:(id)arg1 ;
-(UIVisualEffect *)effect;
-(UIVisualEffectView *)visualEffectView;
-(id)initWithFrame:(CGRect)arg1 effect:(id)arg2 ;
-(void)DOCVisualEffectLabelSharedInitWithEffect:(id)arg1 ;
@end
