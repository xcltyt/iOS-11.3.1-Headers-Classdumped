/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSArray, NSString;

@interface _HKDailySleepSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	NSArray* _yValues;
	double _xValue;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,readonly) NSArray * yValues;                                          //@synthesize yValues=_yValues - In the implementation block
@property (nonatomic,readonly) double xValue;                                              //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(double)xValue;
-(NSArray *)yValues;
-(id)initWithXValue:(double)arg1 yValues:(id)arg2 userInfo:(id)arg3 ;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
@end
