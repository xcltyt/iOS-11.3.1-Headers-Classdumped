/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface _HKReportTableViewCell : UITableViewCell {

	double _minimumHeight;
	UILabel* _reportLabel;
	UIImageView* _reportImageView;

}

@property (nonatomic,readonly) double minimumHeight;                       //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (nonatomic,readonly) UILabel * reportLabel;                      //@synthesize reportLabel=_reportLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * reportImageView;              //@synthesize reportImageView=_reportImageView - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)minimumHeight;
-(id)initWithWidth:(double)arg1 minimumHeight:(double)arg2 ;
-(void)setReportName:(id)arg1 reportImage:(id)arg2 ;
-(void)_buildCellStructureWithWidth:(double)arg1 ;
-(UILabel *)reportLabel;
-(UIImageView *)reportImageView;
@end
