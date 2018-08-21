/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, GEOComposedRouteSection, NSArray, GEOMapRequest;

@interface GEOSnappedRoutePath : NSObject {

	GEOComposedRoute* _route;
	GEOComposedRouteSection* _section;
	NSArray* _edges;
	GEOMapRequest* _edgeSearchRequest;
	CFSetRef _observers;
	unique_ptr<geo::RouteMapMatchingSection, std::__1::default_delete<geo::RouteMapMatchingSection> >* _mapMatchingSection;
	BOOL _hasCompletedMapMatching;
	unsigned _routeStartIndex;
	unsigned _routeEndIndex;
	unsigned _unsnappedPointCount;
	SCD_Struct_GE188* _unsnappedPoints;

}

@property (readonly) unsigned routeStartIndex;                                       //@synthesize routeStartIndex=_routeStartIndex - In the implementation block
@property (readonly) unsigned routeEndIndex;                                         //@synthesize routeEndIndex=_routeEndIndex - In the implementation block
@property (readonly) BOOL isMapMatching; 
@property (readonly) BOOL isMapMatched; 
@property (readonly) BOOL hasCompletedMapMatching; 
@property (readonly) NSArray * edges;                                                //@synthesize edges=_edges - In the implementation block
@property (__weak,readonly) GEOComposedRouteSection * section;                       //@synthesize section=_section - In the implementation block
@property (readonly) const RouteMapMatchingSection* mapMatchingSection; 
-(BOOL)isMapMatching;
-(unsigned)routeStartIndex;
-(void)matchWithDecoder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasCompletedMapMatching;
-(id)initWithRoute:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned)arg3 routeEndIndex:(unsigned)arg4 ;
-(unsigned)routeEndIndex;
-(const RouteMapMatchingSection*)mapMatchingSection;
-(void)_debugPrintEdge:(id)arg1 ;
-(BOOL)isMapMatched;
-(float)_calculateEdgeLengthFrom:(const Matrix<float, 2, 1>*)arg1 to:(const Matrix<float, 2, 1>*)arg2 startCoord:(const PolylineCoordinate*)arg3 endCoord:(const PolylineCoordinate*)arg4 ;
-(BOOL)hasObserver:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(GEOComposedRouteSection *)section;
-(void)addObserver:(id)arg1 ;
-(BOOL)removeObserver:(id)arg1 ;
-(NSArray *)edges;
@end
