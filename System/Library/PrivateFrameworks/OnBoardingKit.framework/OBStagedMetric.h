/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBCodable;

@interface OBStagedMetric : NSObject {

	unsigned _metricId;
	PBCodable* _metric;

}

@property (assign) unsigned metricId;               //@synthesize metricId=_metricId - In the implementation block
@property (retain) PBCodable * metric;              //@synthesize metric=_metric - In the implementation block
-(void)commit;
-(void)setMetric:(PBCodable *)arg1 ;
-(unsigned)metricId;
-(void)setMetricId:(unsigned)arg1 ;
-(PBCodable *)metric;
-(id)initWithMetricID:(unsigned)arg1 metric:(id)arg2 ;
@end
