/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AWAttentionEvent : NSObject <NSSecureCoding> {

	unsigned long long _tagIndex;
	unsigned long long _eventMask;
	double _timestamp;
	id _tag;

}

@property (nonatomic,readonly) unsigned long long eventMask;              //@synthesize eventMask=_eventMask - In the implementation block
@property (nonatomic,readonly) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id tag;                                    //@synthesize tag=_tag - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(id)tag;
-(unsigned long long)eventMask;
-(unsigned long long)tagIndex;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 eventMask:(unsigned long long)arg3 ;
-(void)validateMask;
-(void)updateWithConfig:(id)arg1 ;
@end
