/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXComponentView;

@interface SXComponentExposureTracking : NSObject {

	SXComponentView* _componentView;
	/*^block*/id _exposureStateChangeBlock;
	double _visibilityFactor;
	double _minimumVisibleY;
	double _maximumVisibleY;
	long long _lastObservedVisibilityState;

}

@property (nonatomic,__weak,readonly) SXComponentView * componentView;              //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,copy,readonly) id exposureStateChangeBlock;                    //@synthesize exposureStateChangeBlock=_exposureStateChangeBlock - In the implementation block
@property (nonatomic,readonly) double visibilityFactor;                             //@synthesize visibilityFactor=_visibilityFactor - In the implementation block
@property (assign,nonatomic) double minimumVisibleY;                                //@synthesize minimumVisibleY=_minimumVisibleY - In the implementation block
@property (assign,nonatomic) double maximumVisibleY;                                //@synthesize maximumVisibleY=_maximumVisibleY - In the implementation block
@property (assign,nonatomic) long long lastObservedVisibilityState;                 //@synthesize lastObservedVisibilityState=_lastObservedVisibilityState - In the implementation block
+(id)exposureTrackingWithComponent:(id)arg1 exposureStateChangeBlock:(/*^block*/id)arg2 ;
-(SXComponentView *)componentView;
-(id)initWithComponent:(id)arg1 exposureStateChangeBlock:(/*^block*/id)arg2 ;
-(void)calculateVisibilityFactor;
-(double)maximumVisibleY;
-(double)minimumVisibleY;
-(void)setMinimumVisibleY:(double)arg1 ;
-(void)setMaximumVisibleY:(double)arg1 ;
-(id)exposureStateChangeBlock;
-(double)visibilityFactor;
-(long long)lastObservedVisibilityState;
-(void)setLastObservedVisibilityState:(long long)arg1 ;
@end
