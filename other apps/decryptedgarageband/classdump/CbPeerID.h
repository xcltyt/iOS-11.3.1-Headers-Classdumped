//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface CbPeerID : NSObject <NSCopying>
{
    NSObject *_internalPeerID;
}

+ (id)cbPeerIDFromMcPeerID:(id)arg1;
+ (id)mcPeerIDFromCbPeerID:(id)arg1;
@property(retain) NSObject *internalPeerID; // @synthesize internalPeerID=_internalPeerID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
