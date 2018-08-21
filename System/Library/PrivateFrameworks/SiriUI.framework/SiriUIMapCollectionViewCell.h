/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class MKMapView;

@interface SiriUIMapCollectionViewCell : SiriUIContentCollectionViewCell {

	MKMapView* _mapView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)unloadExpensiveViews;
-(void)setLatitude:(double)arg1 longitude:(double)arg2 ;
@end
