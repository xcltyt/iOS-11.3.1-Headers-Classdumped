/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class _MKUILabel, MKTransitInfoLabelView, UIImageView, NSLayoutConstraint;

@interface MKNearestStationCell : UITableViewCell {

	_MKUILabel* _stationTitleLabel;
	MKTransitInfoLabelView* _stationInfoLabel;
	UIImageView* _stationImageView;
	NSLayoutConstraint* _stationLabelToImageViewConstraint;
	NSLayoutConstraint* _stationLabelToLeadingEdgeConstraint;
	NSLayoutConstraint* _stationLabelToTopConstraint;

}
-(void)didMoveToWindow;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)configureWithNearestStation:(id)arg1 ;
@end
