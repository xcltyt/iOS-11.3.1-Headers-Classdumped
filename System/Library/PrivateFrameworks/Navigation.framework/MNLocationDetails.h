/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocation, GEOLatLng, NSString, MNRouteCoordinate, NSData;

@interface MNLocationDetails : PBCodable <NSCopying> {

	double _course;
	double _courseAccuracy;
	double _distanceFromRoute;
	double _horizontalAccuracy;
	long long _shieldType;
	long long _speedLimitShieldType;
	double _timestamp;
	unsigned long long _transitID;
	GEOLocation* _location;
	unsigned _locationState;
	int _rampType;
	int _rawReferenceFrame;
	GEOLatLng* _roadCoordinate;
	unsigned _roadLineType;
	NSString* _roadName;
	MNRouteCoordinate* _routeCoordinate;
	NSData* _routeDetailsID;
	NSString* _shieldText;
	unsigned _speedLimit;
	unsigned _stepIndex;
	BOOL _isGoodMatch;
	BOOL _isTunnelProjection;
	BOOL _speedLimitIsMPH;
	SCD_Struct_MN18 _has;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                           //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteDetailsID; 
@property (nonatomic,retain) NSData * routeDetailsID;                          //@synthesize routeDetailsID=_routeDetailsID - In the implementation block
@property (assign,nonatomic) BOOL hasStepIndex; 
@property (assign,nonatomic) unsigned stepIndex;                               //@synthesize stepIndex=_stepIndex - In the implementation block
@property (assign,nonatomic) BOOL hasCourse; 
@property (assign,nonatomic) double course;                                    //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) BOOL hasLocationState; 
@property (assign,nonatomic) unsigned locationState;                           //@synthesize locationState=_locationState - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteCoordinate; 
@property (nonatomic,retain) MNRouteCoordinate * routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasRoadCoordinate; 
@property (nonatomic,retain) GEOLatLng * roadCoordinate;                       //@synthesize roadCoordinate=_roadCoordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasRoadName; 
@property (nonatomic,retain) NSString * roadName;                              //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) BOOL hasShieldText; 
@property (nonatomic,retain) NSString * shieldText;                            //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) BOOL hasShieldType; 
@property (assign,nonatomic) long long shieldType;                             //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) BOOL hasRoadLineType; 
@property (assign,nonatomic) unsigned roadLineType;                            //@synthesize roadLineType=_roadLineType - In the implementation block
@property (assign,nonatomic) BOOL hasRampType; 
@property (assign,nonatomic) int rampType;                                     //@synthesize rampType=_rampType - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedLimit; 
@property (assign,nonatomic) unsigned speedLimit;                              //@synthesize speedLimit=_speedLimit - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedLimitIsMPH; 
@property (assign,nonatomic) BOOL speedLimitIsMPH;                             //@synthesize speedLimitIsMPH=_speedLimitIsMPH - In the implementation block
@property (assign,nonatomic) BOOL hasIsGoodMatch; 
@property (assign,nonatomic) BOOL isGoodMatch;                                 //@synthesize isGoodMatch=_isGoodMatch - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;                        //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasCourseAccuracy; 
@property (assign,nonatomic) double courseAccuracy;                            //@synthesize courseAccuracy=_courseAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceFromRoute; 
@property (assign,nonatomic) double distanceFromRoute;                         //@synthesize distanceFromRoute=_distanceFromRoute - In the implementation block
@property (assign,nonatomic) BOOL hasTransitID; 
@property (assign,nonatomic) unsigned long long transitID;                     //@synthesize transitID=_transitID - In the implementation block
@property (assign,nonatomic) BOOL hasIsTunnelProjection; 
@property (assign,nonatomic) BOOL isTunnelProjection;                          //@synthesize isTunnelProjection=_isTunnelProjection - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedLimitShieldType; 
@property (assign,nonatomic) long long speedLimitShieldType;                   //@synthesize speedLimitShieldType=_speedLimitShieldType - In the implementation block
@property (assign,nonatomic) BOOL hasRawReferenceFrame; 
@property (assign,nonatomic) int rawReferenceFrame;                            //@synthesize rawReferenceFrame=_rawReferenceFrame - In the implementation block
+(id)locationDetailsWithLocation:(id)arg1 ;
+(id)locationWithLocationDetails:(id)arg1 ;
+(id)locationWithLocationDetails:(id)arg1 route:(id)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocation;
-(unsigned)speedLimit;
-(BOOL)speedLimitIsMPH;
-(int)rampType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(void)setCourse:(double)arg1 ;
-(void)setHasCourse:(BOOL)arg1 ;
-(BOOL)hasCourse;
-(double)course;
-(double)courseAccuracy;
-(void)setCourseAccuracy:(double)arg1 ;
-(void)setHasCourseAccuracy:(BOOL)arg1 ;
-(BOOL)hasCourseAccuracy;
-(unsigned long long)transitID;
-(void)setTransitID:(unsigned long long)arg1 ;
-(void)setHasTransitID:(BOOL)arg1 ;
-(BOOL)hasTransitID;
-(MNRouteCoordinate *)routeCoordinate;
-(BOOL)hasShieldText;
-(NSString *)shieldText;
-(void)setShieldText:(NSString *)arg1 ;
-(void)setIsGoodMatch:(BOOL)arg1 ;
-(BOOL)isGoodMatch;
-(unsigned)stepIndex;
-(void)setStepIndex:(unsigned)arg1 ;
-(void)setRouteCoordinate:(MNRouteCoordinate *)arg1 ;
-(void)setDistanceFromRoute:(double)arg1 ;
-(double)distanceFromRoute;
-(BOOL)hasShieldType;
-(long long)shieldType;
-(void)setShieldType:(long long)arg1 ;
-(void)setHasShieldType:(BOOL)arg1 ;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
-(BOOL)isTunnelProjection;
-(void)setIsTunnelProjection:(BOOL)arg1 ;
-(void)setSpeedLimit:(unsigned)arg1 ;
-(void)setHasSpeedLimit:(BOOL)arg1 ;
-(BOOL)hasSpeedLimit;
-(BOOL)hasRoadName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLocation *)location;
-(void)setLocation:(GEOLocation *)arg1 ;
-(BOOL)hasRouteDetailsID;
-(void)setHasStepIndex:(BOOL)arg1 ;
-(BOOL)hasStepIndex;
-(void)setHasLocationState:(BOOL)arg1 ;
-(BOOL)hasLocationState;
-(BOOL)hasRouteCoordinate;
-(BOOL)hasRoadCoordinate;
-(void)setRoadLineType:(unsigned)arg1 ;
-(void)setHasRoadLineType:(BOOL)arg1 ;
-(BOOL)hasRoadLineType;
-(void)setHasRampType:(BOOL)arg1 ;
-(BOOL)hasRampType;
-(id)rampTypeAsString:(int)arg1 ;
-(int)StringAsRampType:(id)arg1 ;
-(void)setSpeedLimitIsMPH:(BOOL)arg1 ;
-(void)setHasSpeedLimitIsMPH:(BOOL)arg1 ;
-(BOOL)hasSpeedLimitIsMPH;
-(void)setHasIsGoodMatch:(BOOL)arg1 ;
-(BOOL)hasIsGoodMatch;
-(void)setHasDistanceFromRoute:(BOOL)arg1 ;
-(BOOL)hasDistanceFromRoute;
-(void)setHasIsTunnelProjection:(BOOL)arg1 ;
-(BOOL)hasIsTunnelProjection;
-(void)setSpeedLimitShieldType:(long long)arg1 ;
-(void)setHasSpeedLimitShieldType:(BOOL)arg1 ;
-(BOOL)hasSpeedLimitShieldType;
-(int)rawReferenceFrame;
-(void)setRawReferenceFrame:(int)arg1 ;
-(void)setHasRawReferenceFrame:(BOOL)arg1 ;
-(BOOL)hasRawReferenceFrame;
-(id)rawReferenceFrameAsString:(int)arg1 ;
-(int)StringAsRawReferenceFrame:(id)arg1 ;
-(NSData *)routeDetailsID;
-(void)setRouteDetailsID:(NSData *)arg1 ;
-(GEOLatLng *)roadCoordinate;
-(void)setRoadCoordinate:(GEOLatLng *)arg1 ;
-(unsigned)roadLineType;
-(long long)speedLimitShieldType;
-(void)setRampType:(int)arg1 ;
-(void)setLocationState:(unsigned)arg1 ;
-(unsigned)locationState;
-(double)horizontalAccuracy;
@end
