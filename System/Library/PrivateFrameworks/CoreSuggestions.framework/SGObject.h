/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, SGOrigin;

@interface SGObject : NSObject <NSCopying, NSSecureCoding> {

	SGRecordId* _recordId;
	SGOrigin* _origin;

}

@property (nonatomic,readonly) SGRecordId * recordId;              //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) SGOrigin * origin;                  //@synthesize origin=_origin - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SGOrigin *)origin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToSuggestion:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 ;
-(SGRecordId *)recordId;
@end
