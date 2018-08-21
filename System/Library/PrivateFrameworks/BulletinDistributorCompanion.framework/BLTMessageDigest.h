/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface BLTMessageDigest : NSObject <NSSecureCoding> {

	NSData* _messageDigest;

}

@property (nonatomic,retain) NSData * messageDigest;              //@synthesize messageDigest=_messageDigest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)messageDigest;
-(BOOL)isEqualToMessageDigest:(id)arg1 ;
-(void)setMessageDigest:(NSData *)arg1 ;
-(id)initWithMessage:(id)arg1 ;
@end
