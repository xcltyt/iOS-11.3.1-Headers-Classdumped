/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKTTLEventTracker : NSObject
+(id)significantEventTracker;
+(id)ttlCandidateEventTracker;
+(id)eventFiredTTLAlertTracker;
+(id)eventFiredTTLAlertSharedCalendarSupportingTracker;
+(id)isTTLEnabledTracker;
+(id)directionsEngagedEventTracker;
+(id)directionsEngagedSharedCalendarSupportingTracker;
+(id)_boolEnumMapping;
+(id)_alertTypeMapping;
+(id)_transportTypeMapping;
+(id)_etaTypeMapping;
+(id)_travelStateMapping;
+(void)trackSignificantEventHasSuggestedLocation:(BOOL)arg1 isOnSharedCalendar:(BOOL)arg2 ;
+(void)trackTTLCandidateEventHasSuggestedLocation:(BOOL)arg1 isOnSharedCalendar:(BOOL)arg2 ;
+(void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(BOOL)arg5 isOnSharedCalendar:(BOOL)arg6 ;
+(void)trackIsTTLEnabled:(BOOL)arg1 ;
+(void)trackDirectionsEngagedForTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 hasSuggestedLocation:(BOOL)arg4 isOnSharedCalendar:(BOOL)arg5 ;
@end
