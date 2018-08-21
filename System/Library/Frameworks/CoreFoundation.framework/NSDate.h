/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSDate : NSObject <NSCopying, NSSecureCoding>

@property (readonly) double timeIntervalSinceReferenceDate; 
+(id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3 ;
+(id)dateWithNaturalLanguageString:(id)arg1 ;
+(id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2 ;
+(id)dateWithDate:(id)arg1 ;
+(id)dateWithString:(id)arg1 ;
+(id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
+(double)timeIntervalSinceReferenceDate;
+(id)distantFuture;
+(id)date;
+(id)dateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)distantPast;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dateWithTimeIntervalSinceReferenceDate:(double)arg1 ;
+(id)dateWithTimeIntervalSince1970:(double)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(long long)_web_compareDay:(id)arg1 ;
-(id)_web_RFC1123DateString;
-(BOOL)_web_isToday;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2 ;
-(id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3 ;
-(BOOL)isInToday;
-(BOOL)isInTomorrow;
-(BOOL)isInYesterday;
-(BOOL)isInSameDayAsDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
-(long long)compare:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
-(BOOL)isNSDate__;
-(unsigned long long)_cfTypeID;
-(id)addTimeInterval:(double)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(double)timeIntervalSinceReferenceDate;
-(double)timeIntervalSinceDate:(id)arg1 ;
-(double)timeIntervalSinceNow;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithTimeIntervalSinceNow:(double)arg1 ;
-(id)dateByAddingTimeInterval:(double)arg1 ;
-(BOOL)isEqualToDate:(id)arg1 ;
-(double)timeIntervalSince1970;
-(id)laterDate:(id)arg1 ;
-(id)earlierDate:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
@end
