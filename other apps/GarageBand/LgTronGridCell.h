//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LgGridCell-Protocol.h"

@class NSString;

@interface LgTronGridCell : NSObject <LgGridCell>
{
    unsigned int _quantization;
    struct LgGridLocation _location;
}

@property unsigned int quantization; // @synthesize quantization=_quantization;
@property struct LgGridLocation location; // @synthesize location=_location;
- (id).cxx_construct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

