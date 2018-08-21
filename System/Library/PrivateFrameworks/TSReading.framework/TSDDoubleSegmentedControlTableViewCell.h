/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class TSKSegmentedControl;

@interface TSDDoubleSegmentedControlTableViewCell : UITableViewCell {

	TSKSegmentedControl* mLeftSegmentedControl;
	TSKSegmentedControl* mRightSegmentedControl;

}

@property (nonatomic,readonly) TSKSegmentedControl * leftSegmentedControl; 
@property (nonatomic,readonly) TSKSegmentedControl * rightSegmentedControl; 
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithLeftSegmentedControl:(id)arg1 rightSegmentedControl:(id)arg2 ;
-(TSKSegmentedControl *)leftSegmentedControl;
-(TSKSegmentedControl *)rightSegmentedControl;
@end
