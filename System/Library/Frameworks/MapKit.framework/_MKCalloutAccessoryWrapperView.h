/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_MKCalloutAccessoryView.h>

@protocol _MKCalloutAccessoryView;
@class UIView, NSString;

@interface _MKCalloutAccessoryWrapperView : UIView <_MKCalloutAccessoryView> {

	UIView*<_MKCalloutAccessoryView> _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(id)initWithView:(id)arg1 ;
-(void)_mapkit_setCalloutTextColor:(id)arg1 ;
-(void)_mapkit_setCalloutBackgroundColor:(id)arg1 ;
-(double)_mapkit_minimumCalloutWidthMultiplier;
-(double)_mapkit_calloutCustomLeftMargin;
-(double)_mapkit_calloutCustomRightMargin;
-(id)_mapkit_accessoryControlToExtendWithCallout;
@end
