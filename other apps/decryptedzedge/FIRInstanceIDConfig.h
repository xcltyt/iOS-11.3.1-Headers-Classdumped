//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMutableCopying-Protocol.h"

@interface FIRInstanceIDConfig : NSObject <NSMutableCopying>
{
    BOOL _logLevel;
    _Bool _allowMissingAPNSToken;
}

+ (id)defaultConfig;
@property(nonatomic) _Bool allowMissingAPNSToken; // @synthesize allowMissingAPNSToken=_allowMissingAPNSToken;
@property(nonatomic) BOOL logLevel; // @synthesize logLevel=_logLevel;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLogLevel:(BOOL)arg1;
- (id)init;
- (_Bool)allowGCMRegistrationWithoutAPNSToken;
- (void)setAllowGCMRegistrationWithoutAPNSToken:(_Bool)arg1;

@end
