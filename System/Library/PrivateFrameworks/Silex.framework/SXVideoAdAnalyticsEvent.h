/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAdAnalyticsEvent.h>

@interface SXVideoAdAnalyticsEvent : SXAdAnalyticsEvent {

	double _duration;
	double _timePlayed;

}

@property (nonatomic,readonly) double duration;                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double timePlayed;              //@synthesize timePlayed=_timePlayed - In the implementation block
-(double)duration;
-(double)timePlayed;
-(id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5 duration:(double)arg6 timeplayed:(double)arg7 ;
@end
