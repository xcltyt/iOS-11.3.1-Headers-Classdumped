/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEONavigationMatchResult, GEOComposedRoute, GEORouteMatcher, GEORoadMatcher, GEOLocationShifter;

@interface GEONavigationMapMatcher : NSObject {

	GEONavigationMatchResult* _previousMatchResult;
	GEOComposedRoute* _route;
	GEORouteMatcher* _routeMatcher;
	GEORoadMatcher* _roadMatcher;
	GEOLocationShifter* _locationShifter;
	BOOL _isSimulation;

}

@property (nonatomic,retain) GEONavigationMatchResult * previousMatchResult;              //@synthesize previousMatchResult=_previousMatchResult - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                                    //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) BOOL isSimulation;                                           //@synthesize isSimulation=_isSimulation - In the implementation block
-(int)transportType;
-(GEOComposedRoute *)route;
-(id)initWithRoute:(id)arg1 ;
-(id)matchLocation:(id)arg1 transportType:(int)arg2 ;
-(id)_routeMatcherForRoute:(id)arg1 ;
-(void)setPreviousMatchResult:(GEONavigationMatchResult *)arg1 ;
-(GEONavigationMatchResult *)previousMatchResult;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)setShouldSnapRouteMatchToRoute:(BOOL)arg1 ;
-(id)updateForReroute:(id)arg1 location:(id)arg2 ;
-(void)resetToLocation:(id)arg1 ;
-(BOOL)isSimulation;
-(void)setIsSimulation:(BOOL)arg1 ;
@end

