//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MADirectoryIndex.h"

@class NSString;

@interface MACachedDirectoryIndex : MADirectoryIndex
{
    NSString *_identifier;
}

+ (id)cachedIndexWithSourcePath:(id)arg1 identifier:(id)arg2 filter:(CDUnknownBlockType)arg3;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)invalidate;
- (void)saveToCache;
- (_Bool)linksAreValid:(id)arg1;
- (id)initWithPath:(id)arg1 identifier:(id)arg2 filter:(CDUnknownBlockType)arg3;

@end

