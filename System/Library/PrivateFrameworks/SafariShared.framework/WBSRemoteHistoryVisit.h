/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDate;

@interface WBSRemoteHistoryVisit : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSDate* _date;

}

@property (nonatomic,readonly) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)url;
-(NSDate *)date;
-(id)initWithURL:(id)arg1 date:(id)arg2 ;
@end
