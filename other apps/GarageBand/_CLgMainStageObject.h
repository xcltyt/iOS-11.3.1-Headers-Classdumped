//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary;

@interface _CLgMainStageObject : NSObject <NSCopying>
{
    NSDictionary *_properties;
}

+ (id)_descriptionOfObject:(id)arg1 withLocale:(id)arg2 indent:(unsigned long long)arg3;
+ (long long)compareObject:(id)arg1 withObject:(id)arg2;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (void)dealloc;
- (id)valueForKey:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)description;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProperties:(id)arg1;

@end

