/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MiroFreezeInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isFreeze;
	BOOL _isRemoved;
	BOOL _isAdded;

}

@property (nonatomic,readonly) BOOL isFreeze;                            //@synthesize isFreeze=_isFreeze - In the implementation block
@property (nonatomic,readonly) BOOL isRemoved;                           //@synthesize isRemoved=_isRemoved - In the implementation block
@property (nonatomic,readonly) BOOL isAdded;                             //@synthesize isAdded=_isAdded - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)freezeInfoWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)isRemoved;
-(BOOL)isAdded;
-(NSData *)dataRepresentation;
-(BOOL)isFreeze;
@end
