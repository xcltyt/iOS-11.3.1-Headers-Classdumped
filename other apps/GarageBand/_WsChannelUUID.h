//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface _WsChannelUUID : NSObject <NSCoding, NSCopying>
{
    struct __CFUUID *_UUID;
}

+ (id)UUIDForString:(struct __CFString *)arg1;
+ (id)UUID;
- (id)description;
- (id)stringValue;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(struct __CFString *)arg1;
- (void)dealloc;
- (id)init;

@end

