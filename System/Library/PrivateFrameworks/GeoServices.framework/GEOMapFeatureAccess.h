/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject;

@interface GEOMapFeatureAccess : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _allowNetworkTileLoad;
	BOOL _flipNegativeTravelDirectionRoads;
	BOOL _visitDoubleTravelDirectionRoadsTwice;

}

@property (assign,nonatomic) BOOL allowNetworkTileLoad;                              //@synthesize allowNetworkTileLoad=_allowNetworkTileLoad - In the implementation block
@property (assign,nonatomic) BOOL flipNegativeTravelDirectionRoads;                  //@synthesize flipNegativeTravelDirectionRoads=_flipNegativeTravelDirectionRoads - In the implementation block
@property (assign,nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice;              //@synthesize visitDoubleTravelDirectionRoadsTwice=_visitDoubleTravelDirectionRoadsTwice - In the implementation block
+(unsigned long long)zoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(id)findTransitLinksNear:(SCD_Struct_GE29)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findBuildingsNear:(SCD_Struct_GE29)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findRoadsFromPreviousIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsToPreviousIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsFromNextIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsToNextIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsFromJunction:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsToJunction:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsNear:(SCD_Struct_GE29)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setVisitDoubleTravelDirectionRoadsTwice:(BOOL)arg1 ;
-(void)setFlipNegativeTravelDirectionRoads:(BOOL)arg1 ;
-(void)setAllowNetworkTileLoad:(BOOL)arg1 ;
-(BOOL)flipNegativeTravelDirectionRoads;
-(BOOL)visitDoubleTravelDirectionRoadsTwice;
-(/*^block*/id)_openTileLoaderWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)findTransitStopsNear:(SCD_Struct_GE29)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitHallsNear:(SCD_Struct_GE29)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStationsNear:(SCD_Struct_GE29)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitPointWithID:(unsigned long long)arg1 near:(SCD_Struct_GE29)arg2 pointHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_findTransitPointsOfType:(unsigned long long)arg1 nearCoordinate:(SCD_Struct_GE29)arg2 radius:(double)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findTransitHallForStop:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitStationForHall:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitStopsForHall:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitHallsForStation:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitAccessPointsForStation:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_findParentOfTransitPoint:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_findChildrenOfTransitPoint:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitGeometryForPoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)preloadRoadTilesNear:(SCD_Struct_GE29)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadTransitTilesNear:(SCD_Struct_GE29)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadBuildingTilesNear:(SCD_Struct_GE29)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)roadTileKeysNear:(SCD_Struct_GE29)arg1 radius:(double)arg2 ;
-(void)_preloadTilesNear:(SCD_Struct_GE29)arg1 radius:(double)arg2 tileSetStyle:(int)arg3 tileSize:(int)arg4 tileScale:(int)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)allowNetworkTileLoad;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
@end
