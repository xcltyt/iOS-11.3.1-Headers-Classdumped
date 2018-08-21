/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTrafficFeature.h>

@class NSString, NSDate;

@interface VKTrafficIncidentFeature : VKTrafficFeature {

	NSString* _title;
	NSString* _subtitle;
	long long _type;
	long long _routeRelevance;
	long long _significance;
	BOOL _isNotForDisplay;
	BOOL _isOnSelectedRoute;
	unsigned _routeOffsetInMeters;
	NSString* _street;
	NSString* _crossStreet;
	NSString* _info;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _lastUpdatedDate;
	unsigned long long _uniqueID;
	NSString* _uniqueString;

}

@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSString * uniqueString;                  //@synthesize uniqueString=_uniqueString - In the implementation block
@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isNotForDisplay;                     //@synthesize isNotForDisplay=_isNotForDisplay - In the implementation block
@property (assign,nonatomic) long long routeRelevance;                   //@synthesize routeRelevance=_routeRelevance - In the implementation block
@property (assign,nonatomic) BOOL isOnSelectedRoute;                     //@synthesize isOnSelectedRoute=_isOnSelectedRoute - In the implementation block
@property (assign,nonatomic) unsigned routeOffsetInMeters;               //@synthesize routeOffsetInMeters=_routeOffsetInMeters - In the implementation block
@property (nonatomic,readonly) NSString * street;                        //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) NSString * crossStreet;                   //@synthesize crossStreet=_crossStreet - In the implementation block
@property (nonatomic,readonly) NSString * info;                          //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdatedDate;                 //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,readonly) long long significance;                   //@synthesize significance=_significance - In the implementation block
-(unsigned long long)uniqueID;
-(NSString *)street;
-(long long)significance;
-(NSString *)crossStreet;
-(void)dealloc;
-(NSString *)title;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)info;
-(NSString *)subtitle;
-(BOOL)hasSameIdentifier:(id)arg1 ;
-(id)initWithIncidentData:(const Incident*)arg1 worldPoint:(Matrix<double, 3, 1>*)arg2 ;
-(id)initWithRouteIncident:(id)arg1 routeRelevance:(long long)arg2 ;
-(NSString *)uniqueString;
-(BOOL)isNotForDisplay;
-(long long)routeRelevance;
-(void)setRouteRelevance:(long long)arg1 ;
-(BOOL)isOnSelectedRoute;
-(void)setIsOnSelectedRoute:(BOOL)arg1 ;
-(unsigned)routeOffsetInMeters;
-(void)setRouteOffsetInMeters:(unsigned)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDate *)lastUpdatedDate;
@end
