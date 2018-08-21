/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HKCategorySample;

@interface HDCoachingDiagnosticData : NSObject {

	NSArray* _items;
	HKCategorySample* _coachingEventSample;

}

@property (nonatomic,readonly) NSArray * items;                                   //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) HKCategorySample * coachingEventSample;              //@synthesize coachingEventSample=_coachingEventSample - In the implementation block
-(id)init;
-(NSArray *)items;
-(id)itemForInterval:(unsigned long long)arg1 future:(BOOL)arg2 ;
-(HKCategorySample *)coachingEventSample;
-(void)setCoachingEventSample:(HKCategorySample *)arg1 ;
@end
