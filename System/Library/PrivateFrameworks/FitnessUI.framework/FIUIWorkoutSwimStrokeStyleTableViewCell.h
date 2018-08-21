/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface FIUIWorkoutSwimStrokeStyleTableViewCell : UITableViewCell {

	UIView* _dividerView;

}

@property (nonatomic,retain) UIView * dividerView;              //@synthesize dividerView=_dividerView - In the implementation block
+(id)_overrideLabelAttributes;
+(id)_sizingLabel;
+(double)preferredHeightWithSwimDistanceByStrokeStyle:(id)arg1 isPoolSwim:(BOOL)arg2 width:(double)arg3 formattingManager:(id)arg4 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureWithSwimDistanceByStrokeStyle:(id)arg1 isPoolSwim:(BOOL)arg2 formattingManager:(id)arg3 ;
-(void)setDividerView:(UIView *)arg1 ;
-(UIView *)dividerView;
@end
