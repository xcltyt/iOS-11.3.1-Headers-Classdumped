/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFImage.h>

@class NSDate;

@interface SFCalendarImage : SFImage {

	NSDate* _date;

}

@property (retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end
